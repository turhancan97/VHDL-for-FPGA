--------------------------------------------------------------------------------
-- Module Name:   question6_test_bench.
-- Project Name:  EEE458_TurhanCanKargin_Question6
--------------------------------------------------------------------------------

LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
ENTITY question6_test_bench IS
END question6_test_bench;
 
ARCHITECTURE behavior OF question6_test_bench IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT arithmetic_logic_unit
    PORT(
         CLK : IN  std_logic;
         Clr : IN  std_logic;
         Flag : OUT  bit;
         Carry : OUT  std_logic;
         A : IN  std_logic_vector(11 downto 0);
         B : IN  std_logic_vector(11 downto 0);
         Complement : IN  std_logic;
         increment : IN  std_logic;
         Add : IN  std_logic;
         ClearF : IN  std_logic;
         ComplementF : IN  std_logic;
         RORr : IN  std_logic;
         ROLl : IN  std_logic;
         Val : IN  std_logic;
         ACC : INOUT  bit_vector(11 downto 0);
         DataOutput : INOUT  bit_vector(11 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal CLK : std_logic := '0';
   signal Clr : std_logic := '0';
   signal A : std_logic_vector(11 downto 0) := (others => '0');
   signal B : std_logic_vector(11 downto 0) := (others => '0');
   signal Complement : std_logic := '0';
   signal increment : std_logic := '0';
   signal Add : std_logic := '0';
   signal ClearF : std_logic := '0';
   signal ComplementF : std_logic := '0';
   signal RORr : std_logic := '0';
   signal ROLl : std_logic := '0';
   signal Val : std_logic := '0';

	--BiDirs
   signal ACC : bit_vector(11 downto 0);
   signal DataOutput : bit_vector(11 downto 0);

 	--Outputs
   signal Flag : bit;
   signal Carry : std_logic;

   -- Clock period definitions
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: arithmetic_logic_unit PORT MAP (
          CLK => CLK,
          Clr => Clr,
          Flag => Flag,
          Carry => Carry,
          A => A,
          B => B,
          Complement => Complement,
          increment => increment,
          Add => Add,
          ClearF => ClearF,
          ComplementF => ComplementF,
          RORr => RORr,
          ROLl => ROLl,
          Val => Val,
          ACC => ACC,
          DataOutput => DataOutput
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      Val <= '1';
		wait for 100 ns;
      Val <= '0';		
		Complement <= '1';
      wait for 100 ns;	
      Complement <= '0';
		ClearF <= '1';
		wait for 100 ns;
		ClearF <= '0';
		ComplementF <= '1';
		wait for 100 ns;
		ComplementF <= '0';
		RORr <= '1';
		wait for 100 ns;
		RORr <= '0';
		ROLl <= '1';
		wait for 100 ns;
		ROLl <= '0';
		increment <= '1';
		wait for 100 ns;
		increment <= '0';
      Clr <= '1';		

      wait for CLK_period*10;

      -- insert stimulus here 

      wait;
   end process;

END;
