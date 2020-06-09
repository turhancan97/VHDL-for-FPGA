----------------------------------------------------------------------------------
-- Company:         Izmir Katip Celebi University
-- Name:            Turhan Can Kargýn
-- Create Date:     April 2020 
-- Design Name:     8-bit Memory Address Register
-- Module Name:     eight_bit_memory_address_register
-- Project Name:    Design an 8-bit memory address register (MAR):
-- Target Devices:  Basys2 Spartan 3E FPGA  Trainer Board

-- Description: 

-- Design an 8-bit memory address register (MAR):
-- * when its "Load1" input is activated, it stores the data given from 8-bit input of "Data1".
-- * when its "Load2" input is activated, it stores the data given from 8-bit input of "Data2".
-- * it gives its content to the 8-bit output of "AddressOutput" directly.
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

entity eight_bit_memory_address_register is
port(
data1           : in std_logic_vector(7 downto 0);
data2           : in std_logic_vector(7 downto 0);
load1           : in std_logic;
load2           : in std_logic;
clr             : in std_logic;
clk             : in std_logic;
AddressOutput   : inout std_logic_vector(7 downto 0)
);
end eight_bit_memory_address_register;

architecture Behavioral of eight_bit_memory_address_register is

begin
process(clk,clr)
 begin
  if clr = '1' then
    AddressOutput <= "00000000";
  elsif clk'event and clk = '1' then
      if load1 = '1' then       
	      AddressOutput <= data1;
		elsif load2 = '1' then   
		   AddressOutput <= data2;
		end if;
	 end if;
 end process ;

end Behavioral;
