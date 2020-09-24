----------------------------------------------------------------------------------
-- Company:        Izmir Katip Celebi University
-- Name:           Turhan Can Kargýn
-- Create Date:    April 2020 
-- Module Name:    question2_top_module
-- Project Name:   Design an 8-bit memory address register (MAR)
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity question2_top_module is
PORT (
led : out std_logic_vector (7 downto 0);
btn : in std_logic_vector (2 downto 0)
);
end question2_top_module;

architecture Behavioral of question2_top_module is
component eight_bit_memory_address_register is
port(
load1           : in std_logic;
load2           : in std_logic;
clr             : in std_logic;
AddressOutput   : out std_logic_vector(7 downto 0)
);
end component;
begin
C1 : eight_bit_memory_address_register 
port map (clr => btn(0), load1 => btn(1), load2 => btn(2), AddressOutput => led (7 downto 0)
);
end Behavioral;
