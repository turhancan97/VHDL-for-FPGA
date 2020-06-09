--------------------------------------------------------------------------------
-- Module Name:   question3_test_bench.
-- Project Name:  EEE458_TurhanCanKargin_Question3
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;

 
ENTITY question3_test_bench IS
END question3_test_bench;
 
ARCHITECTURE behavior OF question3_test_bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT twelve_bit_memory
    PORT(
         MemoryData : INOUT  std_logic_vector(11 downto 0);
         MemoryAddress : INOUT  std_logic_vector(7 downto 0);
         clk : IN  std_logic;
         a : INOUT  std_logic_vector(11 downto 0);
         read_in : IN  std_logic;
         write_in : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal read_in : std_logic := '0';
   signal write_in : std_logic := '0';

	--BiDirs
   signal MemoryData : std_logic_vector(11 downto 0);
   signal MemoryAddress : std_logic_vector(7 downto 0);
   signal a : std_logic_vector(11 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: twelve_bit_memory PORT MAP (
          MemoryData => MemoryData,
          MemoryAddress => MemoryAddress,
          clk => clk,
          a => a,
          read_in => read_in,
          write_in => write_in
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
      read_in <= '1';
      wait for 50 ns;
		read_in <= '0';
      write_in <= '1';
      wait for 50 ns;
      write_in <= '0';

      wait for clk_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
