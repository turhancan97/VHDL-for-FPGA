----------------------------------------------------------------------------------
-- Company:  Izmir Katip Celebi University
-- Engineer: Turhan Can Kargýn
----------------------------------------------------------------------------------


library ieee;
use ieee.std_logic_1164.all;


entity testbench is
end testbench;

architecture Simulation of testbench is
				 signal clk, led : std_logic;  -- inputs 
				 signal player1, player2,startstop : std_logic;  -- outputs
				 signal timeselector :  std_logic_vector(2 downto 0);
				 signal timeadd :  std_logic_vector(1 downto 0);
				 signal minute_p1,minute_p2,second_p1,second_p2 :  integer;
				 constant T : time := 20 ns; 
				 component Final_Question is
     Port (
				  minute_p1_s,minute_p2_s,second_p1_s,second_p2_s : out integer;
				  led : out std_logic;
				  clk,player1,player2,startstop: in std_logic;
				 timeselector : in std_logic_vector(2 downto 0);
				 timeadd : in std_logic_vector(1 downto 0));
    end component;
begin
    
    Port_Map : Final_Question port map (led => led, clk => clk, player1 => player1, player2 => player2, startstop => startstop, timeselector => timeselector, timeadd => timeadd,minute_p1_s =>minute_p1, minute_p2_s =>minute_p2, second_p1_s =>second_p1, second_p2_s =>second_p2);
    
    process 
    begin
        clk <= '0';
        wait for T/2;
        clk <= '1';
        wait for T/2;
    end process;

    tb1 : process
        constant ms: time := 1 ms;
        constant period: time := 20 ns;
        begin
            timeselector<="000";
            timeadd<="11";
            startstop<='0';
            player1<='0';
            player2<='0';
            wait for period*10;
            startstop<='1';

            wait for period*10;
            startstop<='0';
                        
            wait for ms*10;
                player1<='1';
            wait for period;
                player1<='0';

            wait for ms*47;
                player2<='1';
            wait for period;
                player2<='0'; 

            wait for ms*23;
                player1<='1';
            wait for period;
                player1<='0';  

            wait for ms*22;
                player2<='1';
            wait for period;
                player2<='0'; 

            wait for ms*200;
                player1<='1';
            wait for period;
                player1<='0';
				wait for ms*100;	 
            assert FALSE Report "SImulation Finished" severity FAILURE;                                         
            wait; 
        end process;    
end Simulation ;