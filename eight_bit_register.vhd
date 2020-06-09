----------------------------------------------------------------------------------
-- Company:         Izmir Katip Celebi University
-- Name:            Turhan Can Kargýn
-- Create Date:     April 2020 
-- Design Name:     8-bit register
-- Module Name:     eight_bit_register 
-- Project Name:    Design an 8-bit register (PC)
-- Target Devices:  Basys2 Spartan 3E FPGA  Trainer Board

-- Description:     Design an 8-bit register (PC):

-- * when its "Increment" input is activated, it adds 1 to its content.
-- * when its "Load” input is activated, it stores the data given from 8-bit input of "Address".
-- * it gives its content to the 8-bit output of "PcOutput" directly.
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity eight_bit_register is
port(
Address   : in std_logic_vector(7 downto 0);
load      : in std_logic;
clr       : in std_logic;
clk       : in std_logic;
increment : in std_logic;
PC_output : inout std_logic_vector(7 downto 0)
);
end eight_bit_register;

architecture Behavioral of eight_bit_register is
begin
 process(clk,clr)
 begin
  if clr = '1' then
    PC_output <= "00000000";
  elsif clk'event and clk = '1' then
     if load = '1' then
	     PC_output <= Address;
		end if;
		if increment = '1' then
		   PC_output <= PC_output + 1;
		end if;
	 end if;
 end process ;

end Behavioral;
