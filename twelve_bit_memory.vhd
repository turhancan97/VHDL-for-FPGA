----------------------------------------------------------------------------------
-- Company:         Izmir Katip Celebi University
-- Name:            Turhan Can Kargın
-- Create Date:     April 2020 
-- Design Name:     256-item 12-bit memory
-- Module Name:     twelve_bit_memory
-- Project Name:    256-item 12-bit memory (M):
-- Target Devices:  Basys2 Spartan 3E FPGA Trainer Board

-- Description: 

-- 256-item 12-bit memory (M):

-- * it can store 256 different 12-bit data inside.
-- * it accepts an 8-bit input of "MemoryAddress".
-- * its 12-bit "MemoryData" is bidirectional. it can give outputs and inputs as you wish.
-- * when its "Read" input is activated, it gives the corresponding memory data item to its 12-bit bi-directional output 
-- of "MemoryData". for example, if the "MemoryAdress" is 15, then the 16th 12-bit data from the memory 
-- will be transferred to the output of "MemoryData".
-- * when its "Write" input is activated, it stores its 12-bit bi-directional input of "MemoryData" 
-- into the corresponding memory data item. for example, if the "MemoryAdress" is 15, then the input of 
-- "MemoryData" will be transferred to the 16th 12-bit data from the memory item.
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;


entity twelve_bit_memory is
port(
MemoryData        : inout std_logic_vector(11 downto 0);
MemoryAddress     : inout std_logic_vector(7 downto 0):="00000000";
clk               : in std_logic;
a        			: inout std_logic_vector(11 downto 0);
read_in        	: in std_logic;
write_in     	   : in std_logic
);
end twelve_bit_memory;

architecture Behavioral of twelve_bit_memory is

type memory_array_type is array (0 to 255) of std_logic_vector(11 downto 0);
signal memory_array : memory_array_type := ("111100001111","110011001100","001100110011","101010101010","111111111111","100110011001","000111000111", others => "000000000000");
begin
 process (clk, read_in, write_in)
 variable temp_var : integer;
 begin
  if clk'event and clk = '1' then
     if read_in = '1' then
	       MemoryAddress <= MemoryAddress + 1;
	       temp_var := conv_integer(MemoryAddress);
			 MemoryData <= memory_array(temp_var);
			
	  elsif write_in = '1' then
	      temp_var := conv_integer(MemoryAddress);
	      a <= memory_array(temp_var);
			MemoryAddress <= MemoryAddress + 1;
	      temp_var := CONV_INTEGER(MemoryAddress);
			memory_array(temp_var) <= a;
         MemoryData <= memory_array(temp_var);			
	  end if;
   end if;
 end process;	
end Behavioral;