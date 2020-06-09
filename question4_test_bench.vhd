--------------------------------------------------------------------------------
-- Module Name:   question4_test_bench.
-- Project Name:  EEE458_TurhanCanKargin_Question4
--------------------------------------------------------------------------------

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY question4_test_bench IS
END question4_test_bench;
 
ARCHITECTURE behavior OF question4_test_bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT four_bit_operation_register
    PORT(
         OperandInput : IN  std_logic_vector(3 downto 0);
         clk : IN  std_logic;
         clr : IN  std_logic;
         load : IN  std_logic;
         OperandOutput : INOUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal OperandInput : std_logic_vector(3 downto 0) := "1001";
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';
   signal load : std_logic := '0';

	--BiDirs
   signal OperandOutput : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: four_bit_operation_register PORT MAP (
          OperandInput => OperandInput,
          clk => clk,
          clr => clr,
          load => load,
          OperandOutput => OperandOutput
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
      wait for 100 ns;
      load <= '1';
      wait for 100 ns;
      load <= '0';
      wait for 100 ns;
      clr <= '1';
      wait for 100 ns;
      clr <= '0';
      load <= '1';		
      wait for clk_period*10;
      -- insert stimulus here 
      wait;
   end process;
END;
