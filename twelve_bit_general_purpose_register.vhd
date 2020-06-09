----------------------------------------------------------------------------------
-- Company:         Izmir Katip Celebi University
-- Name:            Turhan Can Kargýn
-- Create Date:     April 2020 
-- Design Name:     12-bit general-purpose register
-- Module Name:     twelve_bit_general_purpose_register 
-- Project Name:    Design a 12-bit General Purpose Register (GPR):
-- Target Devices:  Basys2 Spartan 3E FPGA  Trainer Board

-- Description: 

-- Design a 12-bit general-purpose register (GPR):

-- * when its "Load1" input is activated, it stores the data given from 8-bit input of "DataPC" to its bits of 7 downto 0.
-- * when its "Load2" input is activated, it stores the data given from 12-bit bi-directional input of "DataMEM".
-- * when its "Load3" input is activated, it stores the data given from 12-bit input of "DataFromALU".
-- * it gives its content (from bits 7 to 0) to the 8-bit output of "AddressOutput" directly.
-- * it gives its content (from bits 11 to 8) to the 4-bit output of "OperandOutput" directly.
-- * it gives its content to the 12-bit output of "DataToALU" directly.
-- * when its content is 0, it gives 1 to the output of "Z"; otherwise, it gives 0 to the output of "Z".
-- * when its "Increment" input is activated, it adds 1 to its content.
----------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_arith.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
use IEEE.NUMERIC_STD.ALL;

entity twelve_bit_general_purpose_register is
port(
DataPC        : in std_logic_vector(7 downto 0);
DataMEM       : in std_logic_vector(11 downto 0);
DataFromALU   : in std_logic_vector(11 downto 0);
load1         : in std_logic;
load2         : in std_logic;
load3         : in std_logic;
increment     : in std_logic;
clk           : in std_logic;
clr           : in std_logic;
AddressOutput : out std_logic_vector(7 downto 0);
OperandOutput : inout std_logic_vector(3 downto 0);
DataToALU     : inout std_logic_vector(11 downto 0);
z             : out std_logic
);
end twelve_bit_general_purpose_register;

architecture Behavioral of twelve_bit_general_purpose_register is
signal alu: std_logic := '1';
begin
 process(clk,clr)
 begin 
  if clr = '1' then
     AddressOutput <= "00000000";
	  OperandOutput <= "0000";
	  DataToALU <= "000000000000";
	  z <= '1';
  elsif clk'event and clk = '1' then
        if load1 = '1' then
           AddressOutput <= DataPC;
        elsif load2 = '1' then
              OperandOutput(3 downto 0) <= DataMEM(11 downto 8);
        elsif load3 = '1' then
              DataToALU <= DataFromALU;	
			elsif DataFromALU <= "111111111111" then
				z <= '0';
				end if;
				
          if increment = '1' then 
            OperandOutput <= OperandOutput + 1;
            DataToALU	<= DataToALU + 1;
          end if;
  end if;
end process;  

end Behavioral;
