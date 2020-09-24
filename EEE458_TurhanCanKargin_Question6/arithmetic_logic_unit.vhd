----------------------------------------------------------------------------------
-- Company:         Izmir Katip Celebi University
-- Name:            Turhan Can Kargýn
-- Create Date:     April 2020 
-- Design Name:     Simple Arithmetic Logic Unit
-- Module Name:     arithmetic_logic_unit
-- Project Name:    Design a simple arithmetic logic unit (ALU):
-- Target Devices:  Basys2 Spartan 3E FPGA  Trainer Board

-- Description: 

-- Design a simple arithmetic logic unit (ALU):

-- * it has a 12-bit register inside named "ACC".
-- * it has a 1-bit flag inside named "F".
-- * when its "Clear" input is activated, it stores 0 into the "ACC".
-- * when its "Complement" input is activated, it stores the complement of actual value of "ACC" into the "ACC".
-- * when its "Increment" input is activated, it adds 1 to the actual value of "ACC" and stores this new data into the "ACC".
-- * when its "Add" input is activated, it adds the value of 12-bit "DataInput" to the value of "ACC" and stores 
-- the result into the "ACC" again. if a carry is occurred in this addition, then "F" becomes 1 else it becomes 0.
-- * when its "ClearF" input is activated, it stores 0 into the "F".
-- * when its "ComplementF" input is activated, it stores the complement of "F" into the "F" again.
-- * when its "ROR" input is activated, then it rotates right the content of "ACC" through "F". for example, 
-- if F=0 and ACC=010101010101, this generates F=1 (because the right-most bit of ACC is 1) and ACC=001010101010 
-- (the left-most bit is transferred from F).
-- * when its "ROL" input is activated, then it rotates left the content of "ACC" through "F". for example, 
-- if F=0 and ACC=010101010101, this generates F=0 (because the left-most bit of ACC is 0) and ACC=10101010100 
-- (the right-most bit is transferred from F).
-- * it gives its content of "ACC" to the 12-bit output of "DataOutput" directly.
-- * it gives its content of "F" to the 1-bit output of "Flag" directly.
----------------------------------------------------------------------------------


library ieee;
use ieee.std_logic_1164.all;
use IEEE.std_logic_1164.all;
use IEEE.std_logic_textio.all;
use IEEE.std_logic_arith.all;
use IEEE.numeric_bit.all;
use IEEE.numeric_std.all;
use IEEE.std_logic_signed.all;
use IEEE.std_logic_unsigned.all;
use IEEE.math_real.all;
use IEEE.math_complex.all;

entity arithmetic_logic_unit is
port(
    CLK       :in  std_logic;                    
    Clr       :in  std_logic;                     
	 Flag      :out  bit;
	 Carry     :out std_logic;
    A         :in  std_logic_vector(11 downto 0);
    B         :in  std_logic_vector(11 downto 0);
	 Complement:in  std_logic;
    increment :in  std_logic;
	 Add       :in  std_logic;
	 ClearF    :in  std_logic;
	 ComplementF :in  std_logic;
	 RORr       :in  std_logic;
	 ROLl       :in  std_logic;
	 Val : in std_logic;
	 ACC: inout bit_vector(11 downto 0);
    DataOutput :inout bit_vector(11 downto 0));
end arithmetic_logic_unit;

architecture behavioral of arithmetic_logic_unit is
signal OPCODE :  std_logic_vector(7 downto 0);
signal F: bit:='1';
signal temp: std_logic_vector(11 downto 0):="101100110011";
signal Test: std_logic_vector(11 downto 0):="111111111111";
signal temp2: std_logic_vector(11 downto 0):="000000000000";
signal carry2: std_logic_vector(12 downto 0);
		  	
begin
   OPCODE(0) <= Clr;
	OPCODE(1) <= Complement;
	OPCODE(2) <= increment;
	OPCODE(3) <= Add;
	OPCODE(4) <= ClearF;
	OPCODE(5) <= ComplementF;
	OPCODE(6) <= RORr;
	OPCODE(7) <= ROLl;
    process(clk)
    begin
        if rising_edge(clk) then
            if Val = '1' then
                ACC <= to_bitvector(temp);
            else
              case OPCODE is
                    when "00000001" =>
                        ACC <= (others => '0');  
                    when "00000010" => 
                        ACC <= not(ACC);
                    when "00000100" => 
						      temp2 <= to_stdlogicvector(ACC);
                        temp2 <= temp2 + 1; 
								ACC <= to_bitvector(temp2);
                    when "00001000" => 
								carry2 <= Test + 1;
								temp2 <= carry2 (11 downto 0);
								ACC <= to_bitvector(temp2);
                    when "00010000" => 
                        F <= '0';              
                    when "00100000" => 
                        F <= not(F); 
                    when "01000000" => 
                        ACC <= ACC ror 1;
								ACC(11) <= F;						
                    when "10000000" => 
                        ACC <= ACC rol 1;
								ACC(0) <= F; 
                    when others =>
                        ACC <= (others => '0');
                end case;
            end if;
         end if;
     end process;
	  Flag <= F;
	  Carry <= carry2(12);
	  DataOutput <= ACC;
 end behavioral;
