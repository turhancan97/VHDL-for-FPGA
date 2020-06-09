--------------------------------------------------------------------------------
-- Module Name:   question2_test_bench.
-- Project Name:  EEE458_TurhanCanKargin_Question2
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY question2_test_bench IS
END question2_test_bench;
 
ARCHITECTURE behavior OF question2_test_bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT eight_bit_memory_address_register
    PORT(
         data1 : IN  std_logic_vector(7 downto 0);
         data2 : IN  std_logic_vector(7 downto 0);
         load1 : IN  std_logic;
         load2 : IN  std_logic;
         clr : IN  std_logic;
         clk : IN  std_logic;
         AddressOutput : INOUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal data1 : std_logic_vector(7 downto 0) := "10101010" ;
   signal data2 : std_logic_vector(7 downto 0) := "01010101" ;
   signal load1 : std_logic := '0';
   signal load2 : std_logic := '0';
   signal clr : std_logic := '0';
   signal clk : std_logic := '0';

	--BiDirs
   signal AddressOutput : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: eight_bit_memory_address_register PORT MAP (
          data1 => data1,
          data2 => data2,
          load1 => load1,
          load2 => load2,
          clr => clr,
          clk => clk,
          AddressOutput => AddressOutput
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

  -- Stimulus process
   stim_proc: process
   begin		
	wait for 100 ns;
   load1 <= '1';
	wait for 100 ns;
	load1 <= '0';
	load2 <= '1';
	wait for 100 ns;
	load2 <= '0';
	wait for 100 ns;
	clr <= '1';
   end process;

END;
