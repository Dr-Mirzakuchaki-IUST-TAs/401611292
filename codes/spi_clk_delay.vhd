
library IEEE;
use IEEE.std_logic_1164.all;
use IEEE.numeric_std.all;

entity spi_clk_delay is
    port (
        spi_clk                   : in  std_logic;
        double_spi_clk            : in  std_logic;
        sys_reset                 : in  std_logic;
        sclk_out                  : out std_logic
    );
end entity spi_clk_delay;

architecture Behavioral of spi_clk_delay is

  signal sclk_delay_out       : std_logic := '0';
    
begin
  
  process (spi_clk,double_spi_clk,sys_reset)
  begin
    if falling_edge(double_spi_clk) then 
      sclk_delay_out <= spi_clk;
    end if;
  end process;

  sclk_out <= sclk_delay_out;

end architecture Behavioral; 


   
