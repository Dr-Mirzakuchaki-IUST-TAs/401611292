
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity spi_commands is
  generic(
  command_used_g        	: std_logic := '0';
  address_used_g        	: std_logic := '0';
  command_width_bits_g     : natural 	:= 1;
  address_width_bits_g 	   : natural 	:= 1;
  data_width_bits_g 	      : natural 	:= 8;
  output_bits_g            : natural   := 10;
  cpol_cpha             	: std_logic_vector(1 downto 0) := "00"
);
	port(
      clk	            : in	std_logic;	
		rst_n 	         : in	std_logic;      
      command_in        : in  std_logic_vector(command_width_bits_g-1 downto 0);
      address_in        : in  std_logic_vector(address_width_bits_g-1 downto 0);     
      master_slave_data_in      : in   std_logic_vector(data_width_bits_g-1 downto 0);
      master_slave_data_rdy_in  : in   std_logic;
      master_slave_data_ack_out : out  std_logic;
      command_busy_out          : out  std_logic;
      command_done              : out  std_logic;
      slave_master_data_out     : out std_logic_vector(output_bits_g-1 downto 0);
      slave_master_data_ack_out : out std_logic;
      miso 				:in	  std_logic;	
      mosi 				:out  std_logic;	
      sclk 				:out  std_logic;	
      cs_n 				:out  std_logic
		 
		);
end spi_commands;

architecture Behavioral of spi_commands is

function to_natural( sl_in : std_logic ) return natural is
begin
      if sl_in = '1' then
      return 1;
   else
      return 0;
   end if;
end function;

component spi_abstract is
 generic (
      cpol_cpha : std_logic_vector(1 downto 0) := "00";
      data_width: natural := output_bits_g
 );
	port(
      clk	  :in	std_logic;	
		  rst_n 	    :in	std_logic;	

      mosi_data_i         : in std_logic_vector(data_width-1 downto 0);
      miso_data_o         : out std_logic_vector(data_width-1 downto 0);
      mosi_data_valid_i 	:in	std_logic;	
      mosi_data_ack_o 	  :out	std_logic;	
      miso_data_valid_o 	:out	std_logic;	
      
		  miso 				:in	std_logic;	
      mosi 				:out  std_logic;	
      sclk 				:out  std_logic;	
      cs_n 				:out  std_logic
		 
		);
end component;
						

    type SPI_STATE is   (
    SPI_STATE_WAIT,
    SPI_STATE_PAYLOAD,
    SPI_STATE_COMMAND_DONE,
    SPI_STATE_COMMAND_DONE_SIGNAL
    );
    
  signal cur_spi_state  : SPI_STATE;

  constant xfer_len : natural   :=  to_natural(command_used_g) * command_width_bits_g + 
                                    to_natural(address_used_g) * address_width_bits_g + 
                                    data_width_bits_g;
                    
  signal command_signal : std_logic_vector(command_width_bits_g-1 downto 0);
  signal address_signal : std_logic_vector(address_width_bits_g-1 downto 0);
  signal data_signal :std_logic_vector(data_width_bits_g-1 downto 0);  
  signal mosi_data_valid_spi : std_logic;
  signal mosi_data_ack_spi : std_logic;
  signal mosi_data_ack_spi_follower : std_logic;
  signal miso_data_valid_spi : std_logic; 
  signal miso_data_spi : std_logic_vector(xfer_len-1 downto 0);
  signal mosi_data_spi : std_logic_vector(xfer_len-1 downto 0);
  signal miso_byte_ack_count : unsigned (7 downto 0);
  signal slave_master_data_ack_out_en : std_logic;
  signal cs_n_signal : std_logic;
  signal cs_n_signal_follower : std_logic;
  signal data_select : std_logic_vector(1 downto 0) := command_used_g & address_used_g;
 
begin
  slave_master_data_out <= miso_data_spi;
  cs_n <= cs_n_signal;
 
  spi_slave: spi_abstract
  generic map(
      cpol_cpha => cpol_cpha,
      data_width => output_bits_g
  )
	port map(
      clk	    => clk,
		  rst_n 	      => rst_n,

      mosi_data_i    =>  mosi_data_spi,
      miso_data_o    => miso_data_spi,
      mosi_data_valid_i  => mosi_data_valid_spi,
      mosi_data_ack_o 	  => mosi_data_ack_spi,
      miso_data_valid_o  => miso_data_valid_spi,

		  miso 				=> miso,
      mosi 				=> mosi,
      sclk 				=> sclk,
      cs_n 				=> cs_n_signal
		 
		);


spi_state_state_machine: process(clk, rst_n)
begin 
  if rst_n = '0' then 
    cur_spi_state <= SPI_STATE_WAIT;
    
  elsif rising_edge(clk) then 
    case cur_spi_state is 
      when SPI_STATE_WAIT => 
      if (master_slave_data_rdy_in = '1') then
          cur_spi_state <= SPI_STATE_PAYLOAD;
      else
        cur_spi_state <= SPI_STATE_WAIT;
      end if;    

      when SPI_STATE_PAYLOAD =>
        cur_spi_state <= SPI_STATE_COMMAND_DONE;

      when SPI_STATE_COMMAND_DONE   =>      
        if (cs_n_signal_follower /= cs_n_signal) and (cs_n_signal = '1') then
            cur_spi_state <= SPI_STATE_COMMAND_DONE_SIGNAL;
        else
          cur_spi_state <= SPI_STATE_COMMAND_DONE;
        end if; 

      when SPI_STATE_COMMAND_DONE_SIGNAL =>
        cur_spi_state <= SPI_STATE_WAIT;
      when others =>
    end case;
  end if;
end process spi_state_state_machine;
  
spi_command_state_machine:  process (clk, rst_n)
begin
  if rst_n = '0' then

    command_signal <= (others => '0');
    address_signal <= (others => '0');
    data_signal <= (others => '0');
    mosi_data_valid_spi <= '0';
    mosi_data_spi <= (others => '0');
    mosi_data_ack_spi_follower <= '0';
    master_slave_data_ack_out <= '0';
    cs_n_signal_follower <= '1';
     
  elsif rising_edge(clk) then

    mosi_data_valid_spi <= '0';
    master_slave_data_ack_out <= '0';
  
    case cur_spi_state is
    
    when SPI_STATE_WAIT =>
      mosi_data_ack_spi_follower <= '0';
      if (master_slave_data_rdy_in = '1') then
        command_signal <= command_in;
        address_signal <= address_in;
        data_signal <= master_slave_data_in;
      end if;
      
    when SPI_STATE_PAYLOAD   =>  
      if (mosi_data_ack_spi_follower /= mosi_data_ack_spi) then
        mosi_data_ack_spi_follower <= mosi_data_ack_spi;
        
        case data_select is 
          when "00" =>
            mosi_data_spi <= data_signal;
            
          when "01" =>
            mosi_data_spi <= address_signal & data_signal;
            
          when "11" =>
            mosi_data_spi <= command_signal & address_signal & data_signal;
          
          when "10" =>
            mosi_data_spi <= command_signal & data_signal;
			 when others =>
        end case;
        
        mosi_data_valid_spi <= '1';
      else
          mosi_data_valid_spi <= '0';
      end if;

      when SPI_STATE_COMMAND_DONE   =>      
        if (cs_n_signal_follower /= cs_n_signal) then
          cs_n_signal_follower <= cs_n_signal;
        end if; 
        
      when SPI_STATE_COMMAND_DONE_SIGNAL   =>      
        
      end case ;
  end if ;
end process spi_command_state_machine ;


spi_state_output:  process (cur_spi_state)
begin

command_busy_out <= '1';
command_done <= '0';
  
case cur_spi_state is

  when SPI_STATE_WAIT =>
    command_busy_out <= '0';
  when SPI_STATE_PAYLOAD =>
  when SPI_STATE_COMMAND_DONE => 
  when SPI_STATE_COMMAND_DONE_SIGNAL =>
    command_done <= '1';

 
end case;

end process spi_state_output ;


slave_master_data_out_handler : process(clk,rst_n)
begin
if rst_n = '0' then
  miso_byte_ack_count <= to_unsigned(0,miso_byte_ack_count'length);
  slave_master_data_ack_out_en <= '0';
  slave_master_data_ack_out <= '0';
elsif rising_edge(clk) then

    if (cur_spi_state = SPI_STATE_WAIT) then
    miso_byte_ack_count <= to_unsigned(0,miso_byte_ack_count'length);
    slave_master_data_ack_out_en <= '0';
    elsif ( miso_data_valid_spi = '1') then
    miso_byte_ack_count <= miso_byte_ack_count + 1;
    end if;


  if(command_used_g = '1' and address_used_g = '1') then
    if ( miso_byte_ack_count = to_unsigned(command_width_bits_g + address_width_bits_g,miso_byte_ack_count'length)) then
      slave_master_data_ack_out_en <= '1';
    end if;
  elsif(command_used_g = '1' and address_used_g = '0') then
   if ( miso_byte_ack_count = to_unsigned(command_width_bits_g,miso_byte_ack_count'length)) then
      slave_master_data_ack_out_en <= '1';
    end if;
  end if;

  if(command_used_g = '0' and address_used_g = '0') then
    slave_master_data_ack_out_en <= '1';
  end if;
  
  if (slave_master_data_ack_out_en = '1') then
  slave_master_data_ack_out <= miso_data_valid_spi; 
  end if;
  
end if;
end process slave_master_data_out_handler;


end Behavioral;

