
library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity spi_abstract is
 generic (
      cpol_cpha : std_logic_vector(1 downto 0) := "00";
      data_width: natural := 8
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
end spi_abstract;

architecture Behavioral of spi_abstract is

	type		spi_state	is 
  (
    SPI_WAIT,
    SPI_CS,
    SPI_SHIFT,
    SPI_CSN_DELAY,
    SPI_CSN
    );

  signal cur_spi_state  : spi_state;
  signal  read_shift    : std_logic_vector(data_width-1 downto 0);
  signal sclk_counter   : std_logic := '0'; 
  signal sclk_cpol_cpha_oop : std_logic := '0';
  signal sclk_cpol_cpha_ip : std_logic := '0';
  signal  send_shift          :std_logic_vector(data_width-1 downto 0);
  signal  send_shift_next     :std_logic_vector(data_width-1 downto 0);
  signal  mosi_data_valid_i_follower  : std_logic;
  signal  data_read  : std_logic;
  signal  data_read_follower  : std_logic;
  signal  new_data  : std_logic;
  signal	cs_n_signal			:std_logic;	
  signal	mosi_signal			:std_logic;	
  signal  rd_en : std_logic;
  signal  wr_en : std_logic;
  signal  clk_off  : std_logic;
  signal  sclk_en : std_logic;
  signal  reload : std_logic;
  signal  bits_sent : unsigned(data_width-1 downto 0);
  
begin
			
	mosi <= mosi_signal;					
	cs_n <= cs_n_signal;			

next_state : process(clk_off,rst_n)
begin
  if rst_n = '0' then
    cur_spi_state <= SPI_WAIT;
    miso_data_valid_o <= '0';
    data_read <= '0';
    reload <= '0';          
    miso_data_o <= (others => '0');
    bits_sent <= (others => '0');
  elsif rising_edge(clk_off) then  
    miso_data_valid_o <= '0';
    if (data_read_follower = '1' and  data_read ='1') then
      data_read <= '0';
    end if;
    case cur_spi_state is            
      when SPI_WAIT =>
        if (new_data = '1') then 
          cur_spi_state <= SPI_CS;
          data_read <= '1';
          reload <= '1';
        end if;   
      when SPI_CS =>
        reload <= '0';
      if (reload = '0') then
            cur_spi_state <= SPI_SHIFT;
      end if;
      when SPI_SHIFT =>
      reload <= '0';
      bits_sent <= bits_sent + 1;
        if (bits_sent = data_width-2 and new_data = '1') then
          reload <= '1';        
        elsif (bits_sent = data_width-1 and new_data = '1') then 
          cur_spi_state <= SPI_SHIFT;
          data_read <= '1';
          miso_data_valid_o <= '1';
          miso_data_o <= read_shift;
          bits_sent <= to_unsigned(0,bits_sent'length);
        elsif (bits_sent = data_width-1 and new_data = '0') then
          miso_data_valid_o <= '1';
          miso_data_o <= read_shift;
          cur_spi_state <= SPI_CSN_DELAY;
          bits_sent <= to_unsigned(0,bits_sent'length);
        else
          cur_spi_state <= SPI_SHIFT;
        end if;      
      when SPI_CSN_DELAY =>
        cur_spi_state <= SPI_CSN;            
      when SPI_CSN =>
        reload <= '0';
        cur_spi_state <= SPI_WAIT;
      end case;
    end if;   
	end process;
  

output_logic : process(rst_n,cur_spi_state,send_shift)
begin
if rst_n = '0' then
  rd_en <= '0';
  wr_en <= '0';
  cs_n_signal <= '1';
  sclk_en <= '0';
  mosi_signal <= '0';  
  else   
    case cur_spi_state is      
      when SPI_WAIT =>
        cs_n_signal <= '1';
        sclk_en <= '0'; 
        rd_en <= '0';
        wr_en <= '0';
        mosi_signal <= '0';      
      when SPI_CS =>
        sclk_en <= '0';
        cs_n_signal <= '0';
        rd_en <= '0';
        wr_en <= '0';
        mosi_signal <= '0';
      when SPI_SHIFT =>
        mosi_signal <= send_shift(data_width-1);
        rd_en <= '1';
        wr_en <= '1';
        cs_n_signal <= '0';
        sclk_en <= '1';     
      when SPI_CSN_DELAY =>
        mosi_signal <= '0';
        rd_en <= '0';
        wr_en <= '0';
        cs_n_signal <= '0';
        sclk_en <= '0';       
      when SPI_CSN =>
        mosi_signal <= '0';
        rd_en <= '0';
        wr_en <= '0';
        cs_n_signal <= '1';
        sclk_en <= '0';         
		end case;
  end if;    
end process;
  

rcv_MISO:	process(clk_off,rst_n)
begin
  if (rst_n = '0') then
    read_shift <=  (others => '0');
  elsif rising_edge(clk_off) then
       if(rd_en = '1') then
        read_shift(data_width-1 downto 0) <= read_shift(data_width-2 downto 0) & miso;
       end if;
  end if;
end process;


send_MOSI:	process(clk_off,rst_n)
begin
  if (rst_n = '0') then
     send_shift <= (others => '0');
  elsif rising_edge(clk_off) then
    if (reload = '1') then
      send_shift <= send_shift_next;
    else
        if (wr_en = '1') then
              send_shift(data_width-1 downto 0) <= send_shift(data_width-2 downto 0) & '0';
        end if;
    end if;
  end if;
end process;
  

mosi_data_valid_i_process:	process(clk_off,rst_n)
begin
  if (rst_n = '0') then
 
 
  data_read_follower <= '0';
  mosi_data_valid_i_follower  <= '0';
  new_data  <= '0';
  mosi_data_ack_o <= '1';
  send_shift_next <= (others => '0');
 
  elsif clk'event and clk = '1' then
   
    if (mosi_data_valid_i_follower /= mosi_data_valid_i) then
        mosi_data_valid_i_follower <= mosi_data_valid_i;
      if (mosi_data_valid_i = '1') then
        send_shift_next <= mosi_data_i;
        new_data <= '1';
        mosi_data_ack_o <= '0';
      end if;
    elsif (data_read_follower /= data_read) then
      data_read_follower <= data_read;
      if (data_read = '1') then
      new_data <= '0';
      mosi_data_ack_o <= '1';
      end if;

    end if;
  end if;
end process;
  
  
clk_off <= sclk_counter;

clock_process: process(clk)
begin
  if rising_edge(clk) then 
      sclk_counter <= not sclk_counter;
  end if;
end process;  

sclk_ip_process: process(clk)
begin 
  if rising_edge(clk) and sclk_en = '1' then 
    sclk_cpol_cpha_ip <= not sclk_cpol_cpha_ip;
  end if;
end process;

sclk_oop_process: process(clk)
begin 
  if falling_edge(clk) and sclk_en = '1' then 
      sclk_cpol_cpha_oop <= not sclk_cpol_cpha_oop;
  end if;
end process;


nioop_clk: if (cpol_cpha = "00") generate
  sclk <= sclk_cpol_cpha_oop and sclk_en;
end generate;

niip_clk: if (cpol_cpha = "01") generate
  sclk <= not sclk_cpol_cpha_ip and sclk_en;
end generate;

iip_clk: if (cpol_cpha = "11") generate
  sclk <= sclk_cpol_cpha_ip when sclk_en = '1' else '1';
end generate;

ioop_clk: if (cpol_cpha = "10") generate
  sclk <= not sclk_cpol_cpha_oop when sclk_en = '1' else '1';
end generate;



end Behavioral;