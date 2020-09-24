----------------------------------------------------------------------------------
-- Company: Izmir Katip Celebi University
-- Name: Turhan Can Kargýn
-- Create Date:    April 2020 
-- Module Name:    question1_top_module
-- Project Name:   Design an 8-bit register (PC)
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity question1_top_module is
PORT (
led : out std_logic_vector (7 downto 0);
btn : in std_logic_vector (2 downto 0)
);
end question1_top_module;

architecture Behavioral of question1_top_module is
component eight_bit_register is
port(
load      : in std_logic;
clr       : in std_logic;
increment : in std_logic;
PC_output : out std_logic_vector(7 downto 0)
);
end component;
begin
C1 : eight_bit_register 
port map (load => btn(0), clr => btn(1), increment => btn(2), PC_output => led (7 downto 0)
);
end Behavioral;