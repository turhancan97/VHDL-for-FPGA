----------------------------------------------------------------------------------
-- Company: Izmir Katip Celebi University
-- Engineer: Turhan Can Kargýn
-- 
-- Create Date:  09.06.2020
-- Design Name:  Final Exam
-- Module Name:  Chess Clock
-- Project Name: Chess Clock
-- Description:
-- Design an FPGA-based circuit using VHDL to satisfy following rules:
-- * There is one LED. Normally, it gives no light.
-- * There are three buttons: Player1, Player2, and StartStop.
-- * There are three switches to encode the time: 000: 1 minute, 001: 3 minutes, 010: 5 minutes,
-- 011: 10 minutes, 100: 15 minutes, 101: 30 minutes, 110: 60 minutes, 111: 90 minutes.
-- * There are two switches to encode the additional time: 00: 0 seconds, 01: 2 seconds, 10: 3 seconds, 11: 5 seconds.
-- * There are two displays where 4 digits for each. Each display shows the remaining 
-- time in minutes (2 digits) and seconds (2 digits) for the corresponding player.
-- * When the button of StartStop is pressed, the device will start if it is stopped 
-- (and both timers will stop), or the device will stop if it is started.
-- * When the device is started as the first time, the time of the Player1 will start to decrease.
-- * When the button of Player1 is pressed, the time of the Player1 is stopped but the time of the Player2 will start to decrease.
-- * When the button of Player2 is pressed, the time of the Player2 is stopped but the time of the Player1 will start to decrease.
-- * If one of the timers reaches the zero, then buttons of Player1 and Player2 will not work anymore. 
-- In addition, the LED will give light.
-- * When the button of Player1 is pressed, the timer of the Player1 will increase by the pre-configured additional time.
-- * When the button of Player2 is pressed, similarly, the timer of the Player2 will increase by the pre-configured additional time.
-- * Use the system clock as 50 MHz.
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.std_logic_unsigned.all;
use IEEE.numeric_std.all;


entity Final_Question is
 Port (
			 minute_p1_s,minute_p2_s,second_p1_s,second_p2_s : out integer;
			 led : out std_logic;
			 clk,player1,player2,startstop: in std_logic;
			 timeselector : in std_logic_vector(2 downto 0);
			 timeadd : in std_logic_vector(1 downto 0));
end Final_Question;

architecture Behavioral of Final_Question is
signal Faster : std_logic;
signal state: std_logic_vector(7 downto 0):= "00000000";
signal minute_p1,minute_p2,second_p1,second_p2 :  integer;
signal limit,adding,counter_p2,counter_p1: integer:= 0;

begin
Faster<='1';
-- We see only numbers
minute_p1_s<=minute_p1;
minute_p2_s<=minute_p2;
second_p1_s<=second_p1;
second_p2_s<=second_p2;
process( clk) begin--50mhz!!
    if rising_edge(clk) then
        if(Faster='0') then
            limit<=50000000;
        else
            limit<=50000;--1sn=1ms 
        end if;
        if(timeadd="00") then
            adding<=0;
        elsif(timeadd="01") then      
            adding<=2;    
        elsif(timeadd="10") then      
            adding<=3; 
        elsif(timeadd="11") then      
            adding<=5;   
        end if;                      
        case(state) is
        when  "00000000" =>--first time starting..
            led<='0';
				
            if(startstop='1') then
                state<="00000001";
                counter_p1<=0;
                counter_p2<=0;
					 
                if(timeselector="000") then
                    minute_p1<=1;
                    minute_p2<=1;
                    
                    second_p1<=0;
                    second_p2<=0;
						  
                elsif(timeselector="001") then
                    minute_p1<=3;
                    minute_p2<=3;
                    
                    second_p1<=0;
                    second_p2<=0;
						  
                elsif(timeselector="010") then
                    minute_p1<=5;
                    minute_p2<=5;
                    
                    second_p1<=0;
                    second_p2<=0; 
						  
                elsif(timeselector="011") then
                    minute_p1<=10;
                    minute_p2<=10;
                    
                    second_p1<=0;
                    second_p2<=0; 
						  
                elsif(timeselector="100") then
                    minute_p1<=15;
                    minute_p2<=15;
                    
                    second_p1<=0;
                    second_p2<=0; 
						  
                elsif(timeselector="101") then
                    minute_p1<=30;
                    minute_p2<=30;
                    
                    second_p1<=0;
                    second_p2<=0; 
						  
                elsif(timeselector="110") then
                    minute_p1<=60;
                    minute_p2<=60;
                    
                    second_p1<=0;
                    second_p2<=0; 
						  
                elsif(timeselector="111") then
                    minute_p1<=90;
                    minute_p2<=90;
                    
                    second_p1<=0;
                    second_p2<=0;
						  
                end if;
            end if;
				
        when "00000001" =>--player1 decreasing
            
            if(player1='1') then--stop p1, go p2
                state<="00000100";
					 
            elsif(counter_p1<limit) then--1sn
                counter_p1<=counter_p1+1;
					 
            else
                counter_p1<=0;
                state<=state+"00000001";
					 
            end if;
            
        when "00000010" =>--
            state<=state+"00000001";
            if(second_p1=0 ) then
                minute_p1<=minute_p1-1;
                second_p1<=59;
					 
            else
                second_p1<=second_p1-1;
					 
            end if;
   
        when "00000011" =>--
            if(minute_p1=0 and second_p1=0) then--time finihsed
                led<='1';
                state<="00000111";
                counter_p1<=0;
                second_p1<=second_p1+adding;
					 
            else
                 state<="00000001";--p1 turn
					  
             end if;   

        when "00000100" =>--player1 decreasing
            if(player2='1') then--stop p1, go p2
                state<="00000001";
					 
            elsif(counter_p2<limit) then--1sn
                counter_p2<=counter_p2+1;
					 
            else
                counter_p2<=0;
                state<=state+"00000001";
					 
            end if;
            
        when "00000101" =>--
            state<=state+"00000001";
            if(second_p2=0 ) then
                minute_p2<=minute_p2-1;
                second_p2<=59;
					 
            else
                second_p2<=second_p2-1;
					 
            end if;
   
        when "00000110" =>--
            if(minute_p2=0 and second_p2=0) then--time finihsed
                led<='1';
                state<="00001001";
                counter_p2<=0;
					 
                second_p2<=second_p2+adding;
            else
                 state<="00000100";--p2 turn
					  
             end if;   

       when "00000111" =>--player1 decreasing
            counter_p2<=0;
				
            if(player1='1') then--stop p1, go p2
                state<=state+"00000001";
                second_p1<=second_p1+adding;
					 
            elsif(counter_p1<limit) then--1sn
                counter_p1<=counter_p1+1;
					 
            else
                counter_p1<=0;
                if(minute_p1=0) then
                    if(second_p1>0) then
                        second_p1<=second_p1-1;
                    else
                        second_p1<=0;
                    end if;
                else
                    if(second_p1=0) then
                        second_p1<=59;
                        minute_p1<=minute_p1-1;
                    else
                        second_p1<=second_p1-1;
                     end if;
                 end if;
                
                counter_p1<=0;
                
            end if;

        when "00001000" =>--
            state<=state+"00000001";
				
            if(second_p1>60 ) then
                minute_p1<=minute_p1+1;
                second_p1<=second_p1-60;
					 
            end if;
        when "00001001" =>--
            counter_p1<=0;
				
            if(player2='1') then--stop p1, go p2
                state<=state+"00000001";
                second_p2<=second_p2+adding;
					 
            elsif(counter_p2<limit) then--1sn
                counter_p2<=counter_p2+1;
					 
            else
                counter_p2<=0;
                if(minute_p2=0) then
                    if(second_p2>0) then
                        second_p2<=second_p2-1;
								
                    else
                        second_p2<=0;
								
                    end if;
                else
                    if(second_p2=0) then
                        second_p2<=59;
                        minute_p2<=minute_p2-1;
								
                    else
                        second_p2<=second_p2-1;
								
                     end if;
                 end if;
                    
                
                counter_p1<=0;
                
            end if;
            
        when "00001010" =>--
            state<="00000111";
            if(second_p2>60 ) then
                minute_p2<=minute_p2+1;
                second_p2<=second_p2-60;
					 
            end if;        
           when others =>

          end case;  
end if;
end process;
end Behavioral;
