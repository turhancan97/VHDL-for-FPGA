----------------------------------------------------------------------------------
-- Company:        Izmir Katip Celebi University
-- Name:           Turhan Can Kargýn
-- Create Date:    April 2020 
-- Module Name:    question4_top_module
-- Project Name:   Design a 4-bit operation register (OPR):
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity question4_top_module is
PORT (
led : out std_logic_vector (3 downto 0);
btn : in std_logic_vector (1 downto 0)
);
end question4_top_module;

architecture Behavioral of question4_top_module is
component four_bit_operation_register is
port(
--OperandInput  : in std_logic_vector(3 downto 0);
--clk           : in std_logic;
clr           : in std_logic;
load          : in std_logic;
OperandOutput : out std_logic_vector(3 downto 0)
);
end component;
begin
C1 : four_bit_operation_register 
port map (clr => btn(0), load => btn(1), OperandOutput => led (3 downto 0)
);
end Behavioral;