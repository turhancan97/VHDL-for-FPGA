----------------------------------------------------------------------------------
-- Company:         Izmir Katip Celebi University
-- Name:            Turhan Can Kargýn
-- Create Date:     April 2020 
-- Design Name:     4-bit Operation Register
-- Module Name:     four_bit_operation_register
-- Project Name:    Design a 4-bit operation register (OPR)
-- Target Devices:  Basys2 Spartan 3E FPGA  Trainer Board

-- Description: 

-- Design a 4-bit operation register (OPR):

-- * when its "Load" input is activated, it stores the data given from 4-bit input of "OperandInput".
-- * it gives its content to the 4-bit output of "OperandOutput" directly.
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

entity four_bit_operation_register is
port(
OperandInput  : in std_logic_vector(3 downto 0);
clk           : in std_logic;
clr           : in std_logic;
load          : in std_logic;
OperandOutput : inout std_logic_vector(3 downto 0)
);
end four_bit_operation_register;

architecture Behavioral of four_bit_operation_register is
begin
 process(clk,clr)
 begin 
  if clr = '1' then
     OperandOutput <= "0000";
  elsif clk'event and clk = '1' then
     if load = '1' then
	     OperandOutput(3 downto 0) <= OperandInput(3 downto 0);
		end if;
     end if;	  
 end process;
end Behavioral;

