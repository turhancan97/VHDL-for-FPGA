--------------------------------------------------------------------------------
-- Module Name:   question1_test_bench.
-- Project Name:  EEE458_TurhanCanKargin_Question1
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY question1_test_bench IS
END question1_test_bench;
 
ARCHITECTURE behavior OF question1_test_bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT eight_bit_register
    PORT(
         Address : IN  std_logic_vector(7 downto 0);
         load : IN  std_logic;
         clr : IN  std_logic;
         clk : IN  std_logic;
         increment : IN  std_logic;
         PC_output : INOUT  std_logic_vector(7 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal Address : std_logic_vector(7 downto 0) := "10101010";
   signal load : std_logic := '0';
   signal clr : std_logic := '0';
   signal clk : std_logic := '0';
   signal increment : std_logic := '0';

	--BiDirs
   signal PC_output : std_logic_vector(7 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: eight_bit_register PORT MAP (
          Address => Address,
          load => load,
          clr => clr,
          clk => clk,
          increment => increment,
          PC_output => PC_output
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
      -- hold reset state for 100 ns.
		clr <= '1';
      wait for 100 ns;	
      clr <= '0';
		load <= '1';
		wait for 100 ns;
		increment <= '1';
		wait for 300 ns;
		increment <= '0';
		clr <= '1';
		wait for 100 ns;
		clr <= '0';
		increment <= '1';
		wait for 400 ns;
      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
