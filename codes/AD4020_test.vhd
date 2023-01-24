
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

 
ENTITY AD4020_test IS
END AD4020_test;
 
ARCHITECTURE behavior OF AD4020_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FE_AD4020
    PORT(
         sys_clk : IN  std_logic;
         sys_reset_n : IN  std_logic;
         spi_clk : IN  std_logic;
         AD4020_data_out : OUT  std_logic_vector(19 downto 0);
         AD4020_valid_out : OUT  std_logic;
         AD4020_MISO_in : IN  std_logic;
         AD4020_MOSI_out : OUT  std_logic;
         AD4020_SCLK_out : OUT  std_logic;
         AD4020_CONV_out : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal sys_clk : std_logic := '0';
   signal sys_reset_n : std_logic := '1';
   signal spi_clk : std_logic := '0';
   signal AD4020_MISO_in : std_logic := '1';

 	--Outputs
   signal AD4020_data_out : std_logic_vector(19 downto 0);
   signal AD4020_valid_out : std_logic;
   signal AD4020_MOSI_out : std_logic;
   signal AD4020_SCLK_out : std_logic;
   signal AD4020_CONV_out : std_logic;

   -- Clock period definitions
   constant sys_clk_period : time := 10 ns;
   constant spi_clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: FE_AD4020 PORT MAP (
          sys_clk => sys_clk,
          sys_reset_n => sys_reset_n,
          spi_clk => spi_clk,
          AD4020_data_out => AD4020_data_out,
          AD4020_valid_out => AD4020_valid_out,
          AD4020_MISO_in => AD4020_MISO_in,
          AD4020_MOSI_out => AD4020_MOSI_out,
          AD4020_SCLK_out => AD4020_SCLK_out,
          AD4020_CONV_out => AD4020_CONV_out
        );

   -- Clock process definitions
   sys_clk_process :process
   begin
		sys_clk <= '0';
		wait for sys_clk_period/2;
		sys_clk <= '1';
		wait for sys_clk_period/2;
   end process;
 
   spi_clk_process :process
   begin
		spi_clk <= '0';
		wait for spi_clk_period/2;
		spi_clk <= '1';
		wait for spi_clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 375 ns;	
      AD4020_MISO_in <= '0';
		wait for 10 ns;
		AD4020_MISO_in <= '1';
		wait for 10 ns;
		AD4020_MISO_in <= '0';
		wait for 10 ns;
		AD4020_MISO_in <= '1';
		wait for 10 ns;
		AD4020_MISO_in <= '0';
		wait for 10 ns;
		AD4020_MISO_in <= '1';
		wait for 10 ns;
		AD4020_MISO_in <= '0';
		wait for 10 ns;
		AD4020_MISO_in <= '0';
		wait for 10 ns;
		AD4020_MISO_in <= '1';
		wait for 10 ns;
		AD4020_MISO_in <= '1';
		wait for 10 ns;
		AD4020_MISO_in <= '0';
		wait for 10 ns;
		AD4020_MISO_in <= '1';
		wait for 10 ns;
		AD4020_MISO_in <= '1';
		wait for 10 ns;
		AD4020_MISO_in <= '1';
		wait for 10 ns;
		AD4020_MISO_in <= '0';
		wait for 10 ns;
		AD4020_MISO_in <= '1';
		wait for 10 ns;
		AD4020_MISO_in <= '1';
		wait for 10 ns;
		AD4020_MISO_in <= '1';
		wait for 10 ns;
		AD4020_MISO_in <= '0';
		wait for 10 ns;
		AD4020_MISO_in <= '1';
      wait for sys_clk_period*10;


      wait;
   end process;

END;
