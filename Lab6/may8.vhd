----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    10:26:42 05/08/2023 
-- Design Name: 
-- Module Name:    may8 - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity may8 is
    Port ( clk : in  STD_LOGIC;
           rst : in  STD_LOGIC;
           sensor : in  STD_LOGIC_VECTOR (1 downto 0);
           LED : out  STD_LOGIC_VECTOR (3 downto 0));
end may8;

architecture Behavioral of may8 is

begin


end Behavioral;

