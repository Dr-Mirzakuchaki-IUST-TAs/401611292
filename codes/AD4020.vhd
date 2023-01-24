
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity FE_AD4020 is
  generic(
    input_clk_freq        : natural range 1 to 1_000_000_000 := 100_000_000
  );
	port (
    sys_clk               : in  std_logic;                  
	 sys_reset_n           : in  std_logic;                    
    spi_clk               : in  std_logic; 
    AD4020_data_out       : out std_logic_vector(19 downto 0); 
    AD4020_valid_out      : out std_logic;
    AD4020_MISO_in        : in  std_logic;                
    AD4020_MOSI_out       : out std_logic;                  
    AD4020_SCLK_out       : out std_logic;
    AD4020_CONV_out       : out std_logic
	);
end entity FE_AD4020;

architecture Behavioral of FE_AD4020 is

  component spi_commands is
	  generic(
	
	  command_used_g          : std_logic 	:= '1';
	  address_used_g          : std_logic 	:= '0';
	  command_width_bits_g    : natural 	:= 8;
	  address_width_bits_g    : natural 	:= 8;
	  data_width_bits_g 	     : natural 	:= 8;
    output_bits_g            : natural    := 24;
	  cpol_cpha               : std_logic_vector(1 downto 0) := "10"
	  );
		port(
			clk	           :in	std_logic;	
			rst_n 	        :in	std_logic;
			
			command_in      : in  std_logic_vector(command_width_bits_g-1 downto 0);
			address_in      : in  std_logic_vector(address_width_bits_g-1 downto 0);			
			master_slave_data_in      : in   std_logic_vector(data_width_bits_g-1 downto 0);
			master_slave_data_rdy_in  : in   std_logic;
			master_slave_data_ack_out : out  std_logic;
			command_busy_out          : out  std_logic;
			command_done              : out  std_logic;	
			slave_master_data_out     : out std_logic_vector(output_bits_g-1 downto 0);
			slave_master_data_ack_out : out std_logic;	
			miso 				: in	std_logic;	
			mosi 				: out  std_logic;	
			sclk 				: out  std_logic;	
			cs_n 				: out  std_logic 
		);
	end component;
  
  signal   AD4020_data_r                  : std_logic_vector(31 downto 0);
  signal   AD4020_spi_command       	   : std_logic_vector(1 downto 0);  
  signal   AD4020_spi_register_address    : std_logic_vector(5 downto 0);  
  signal   AD4020_spi_write_data          : std_logic_vector(7 downto 0);  
  signal   AD4020_spi_write_data_rdy      : std_logic;                    
  signal   AD4020_spi_busy          	   : std_logic;                   
  signal   AD4020_spi_sclk                : std_logic;
  signal   AD4020_spi_sclk_delayed        : std_logic;
  signal   AD4020_conv                    : std_logic;
  signal   AD4020_valid                   : std_logic := '0';
  signal   AD4020_data                    : std_logic_vector(19 downto 0) := "00000000000000000000";
  
  constant control_reg                    : std_logic_vector(5 downto 0) := "010100";
  constant write_data                     : std_logic := '0';
  constant read_data                      : std_logic := '1';
  signal data_ready                       : std_logic := '0';

  constant WEN                            : std_logic := '0';
  constant RESERVED                       : std_logic := '0'; 
  constant TURBO                          : std_logic := '1'; 
  constant OV                             : std_logic := '0';
  constant HIGHZ                          : std_logic := '0'; 
  constant SPAN_COMPRESSION               : std_logic := '0'; 
  constant ENABLE_STATUS_BITS             : std_logic := '0'; 
  constant reg_config                     : std_logic_vector(7 downto 0)  := RESERVED & RESERVED & RESERVED & ENABLE_STATUS_BITS &
                                                                             SPAN_COMPRESSION & HIGHZ & TURBO & OV;

  signal init_done                        : std_logic := '0'; 
  
  type state_type is (
    init_adc,
    spi_init_load,
    spi_data_load,
    spi_read_data_busy,
    spi_read_data_start,
    spi_write_init_busy,
    spi_write_init_start,
    spi_read_data_finish
  );
  
  signal state : state_type;
  
  signal sclk_en : boolean := true;
  signal spi_clk_en : boolean := false;
  signal read_complete : boolean := false;
  
  signal one_cycle_delay : boolean := false;
  signal SDI_is_low : boolean := true;
  signal tquiet1_delay_complete : boolean := false;
  signal tquiet2_delay_complete : boolean := false;
  signal gpio_init_complete : boolean := false;
  
  signal mosi_ctrl : boolean := true;
  signal spi_mosi  : std_logic;
  signal read_mosi : std_logic;
  
begin

  spi_AD4020: spi_commands
  generic map (
    command_used_g            => '1',  
    address_used_g            => '1', 
    command_width_bits_g      =>  2,  
    address_width_bits_g      =>  6,  
    data_width_bits_g 	      =>  8,
    output_bits_g             =>  16, 
    cpol_cpha                 => "00" 
  )
  port map (
    clk	                     => spi_clk ,  					
    rst_n 	                  => sys_reset_n,		   				    
    command_in                => AD4020_spi_command,  			
    address_in                => AD4020_spi_register_address,     
    master_slave_data_in      => AD4020_spi_write_data,		
    master_slave_data_rdy_in  => AD4020_spi_write_data_rdy,    	
    master_slave_data_ack_out => open,                         
    command_busy_out          => AD4020_spi_busy,				
    command_done              => open,				    
    slave_master_data_out     => open,			
    slave_master_data_ack_out => open,		    
    miso 				              => AD4020_MISO_in,				
    mosi 					           => spi_mosi,					
    sclk 					           => AD4020_spi_sclk,			
    cs_n 					           => open			
  );
  

  process (spi_clk, sys_reset_n)
  begin
    if sys_reset_n = '0' then
      state     <= init_ADC;  
      init_done <= '0';
    elsif (rising_edge(spi_clk)) then
      case state is  
        when init_ADC =>
          if init_done = '0' then 
            if gpio_init_complete then 
            state <= spi_init_load;
            init_done <= '1';
            end if;
          elsif init_done = '1' then 
            state <= spi_read_data_start;
          else
            state <= init_ADC;
          end if;          
        when spi_init_load => 
          state <= spi_write_init_start;          
        when spi_write_init_start =>
          if AD4020_spi_busy = '1' then 
            state <= spi_write_init_busy;
          else
            state <= spi_write_init_start;
          end if;          
        when spi_write_init_busy =>
          if AD4020_spi_busy = '1' then 
            state <= spi_write_init_busy;
          else
            state <= spi_read_data_start;
            mosi_ctrl <= false;
            sclk_en <= false;
          end if; 
        when spi_read_data_start =>
          if one_cycle_delay then 
            state <= spi_read_data_busy;
          else
            state <= spi_read_data_start;
          end if;          
        when spi_read_data_busy =>
          if read_complete then 
            state <= spi_read_data_finish;
          else
            state <= spi_read_data_busy;
          end if;   
        when spi_read_data_finish =>
          if tquiet2_delay_complete then
            state <= spi_read_data_start;
          end if;
        when others =>
          state <= init_ADC;         
      end case;       
    end if; 
  end process;


  process (spi_clk)
    variable bits_left : integer := 20;    
  begin
    if (rising_edge(spi_clk)) then
      case state is           
        when init_ADC =>      
        when spi_init_load =>
          AD4020_conv                     <= '0';
          AD4020_spi_command              <= WEN & write_data;
          AD4020_spi_register_address     <= control_reg;
          AD4020_spi_write_data 			    <= reg_config;          
        when spi_write_init_start =>
          AD4020_spi_write_data_rdy <= '1';
          AD4020_conv               <= '1';          
        when spi_write_init_busy =>
          AD4020_spi_write_data_rdy <= '0';
        when spi_read_data_start =>
          if SDI_is_low then
            read_mosi <= '1';
          else 
            AD4020_conv <= '0';
          end if;
          AD4020_valid <= '0';
          if tquiet1_delay_complete then
            read_mosi <= '0';
            one_cycle_delay <= true;
            if one_cycle_delay then
              spi_clk_en <= true;
            end if;
          end if;
        when spi_read_data_busy =>
          one_cycle_delay <= false;
          if not(bits_left > 0) then
            spi_clk_en <= false;
          end if;
        when spi_read_data_finish =>
          AD4020_valid <= '1';
          if tquiet2_delay_complete then
            AD4020_conv <= '1';
          end if;       
        when others => 		  
      end case;
    end if;
    if (falling_edge(spi_clk)) then
      case state is     
        when spi_read_data_busy =>
          if bits_left > 0 then
            AD4020_data(bits_left - 1) <= AD4020_MISO_in;
            bits_left := bits_left - 1;
          else 
            read_complete <= true;
          end if;
        when spi_read_data_finish =>
          read_complete <= false;
          bits_left := 20;        
        when others => 
      end case;
    end if;
  end process;
  

  delays : process(spi_clk, state)
  constant tquiet1_ns : natural := 100;
  constant tquiet2_ns : natural := 100;
  constant gpio_init_ns : natural := 200;
  constant period_ns : natural range 1 to 1000 := 1_000_000_000 / input_clk_freq; 
  constant tquiet1_cycles : natural := (((tquiet1_ns + period_ns - 1) / period_ns)-2); 
  constant tquiet2_cycles : natural := (((tquiet2_ns + period_ns - 1) / period_ns)-3);
  constant gpio_init_cycles : natural := (((gpio_init_ns) / period_ns)-3);

  variable counter : natural := 0;
  begin
    if rising_edge(spi_clk) then
      case state is
        when spi_read_data_start =>
          if SDI_is_low then
            SDI_is_low <= false;
          elsif counter = tquiet1_cycles or tquiet1_delay_complete then
            tquiet1_delay_complete <= true;
            counter := 0;
          else 
            counter := counter + 1;
          end if; 
        when init_ADC =>
          if counter = gpio_init_cycles or gpio_init_complete then
            gpio_init_complete <= true;
            counter := 0;
          else 
            counter := counter + 1;
          end if; 
        when spi_read_data_finish =>
          if counter = tquiet2_cycles or tquiet2_delay_complete then
            tquiet2_delay_complete <= true;
            counter := 0;
          else 
            counter := counter + 1;
          end if; 
        when others =>
          SDI_is_low <= true;
          counter := 0;
          tquiet1_delay_complete <= false;
          tquiet2_delay_complete <= false;
          gpio_init_complete <= false;
		end case;
    end if;
  end process;

  AD4020_SCLK_out <=AD4020_spi_sclk when sclk_en else spi_clk when spi_clk_en else '0';
  AD4020_CONV_out <= AD4020_conv;
  AD4020_data_out <= AD4020_data;
  AD4020_MOSI_out <= spi_mosi when mosi_ctrl else read_mosi;
  AD4020_valid_out <= AD4020_valid;

end architecture Behavioral ;



