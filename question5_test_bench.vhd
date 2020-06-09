--------------------------------------------------------------------------------
-- Module Name:   question5_test_bench.
-- Project Name:  EEE458_TurhanCanKargin_Question5
--------------------------------------------------------------------------------

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY question5_test_bench IS
END question5_test_bench;
 
ARCHITECTURE behavior OF question5_test_bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT twelve_bit_general_purpose_register
    PORT(
         DataPC : IN  std_logic_vector(7 downto 0);
         DataMEM : IN  std_logic_vector(11 downto 0);
         DataFromALU : IN  std_logic_vector(11 downto 0);
         load1 : IN  std_logic;
         load2 : IN  std_logic;
         load3 : IN  std_logic;
         increment : IN  std_logic;
         clk : IN  std_logic;
         clr : IN  std_logic;
         AddressOutput : OUT  std_logic_vector(7 downto 0);
         OperandOutput : INOUT  std_logic_vector(3 downto 0);
         DataToALU : INOUT  std_logic_vector(11 downto 0);
         z : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal DataPC : std_logic_vector(7 downto 0) := "11110000";
   signal DataMEM : std_logic_vector(11 downto 0) := "110011001100";
   signal DataFromALU : std_logic_vector(11 downto 0) := "101010101010";
   signal load1 : std_logic := '0';
   signal load2 : std_logic := '0';
   signal load3 : std_logic := '0';
   signal increment : std_logic := '0';
   signal clk : std_logic := '0';
   signal clr : std_logic := '0';

	--BiDirs
   signal OperandOutput : std_logic_vector(3 downto 0);
   signal DataToALU : std_logic_vector(11 downto 0);

 	--Outputs
   signal AddressOutput : std_logic_vector(7 downto 0);
   signal z : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: twelve_bit_general_purpose_register PORT MAP (
          DataPC => DataPC,
          DataMEM => DataMEM,
          DataFromALU => DataFromALU,
          load1 => load1,
          load2 => load2,
          load3 => load3,
          increment => increment,
          clk => clk,
          clr => clr,
          AddressOutput => AddressOutput,
          OperandOutput => OperandOutput,
          DataToALU => DataToALU,
          z => z
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
      load1 <= '1';
      wait for 100 ns;
      load1 <= '0';
      load2 <= '1';
      wait for 100 ns;
      load2 <= '0';
      load3 <= '1';	
      wait for 100 ns;
      load3 <= '0';
      wait for 100 ns;		
      clr <= '1';
		DataFromALU <= "000000000000";
		wait for 100 ns;
		clr <= '0';
		DataFromALU <= "111111111111";
		--wait for 100 ns;
		--clr <= '1';
		wait for 100 ns;
		clr <= '0';
		increment <= '1';	

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
