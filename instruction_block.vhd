----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:38:57 11/10/2022 
-- Design Name: 
-- Module Name:    instruction_block - Behavioral 
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
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity instruction_block is
    Port ( pc : in  STD_LOGIC_VECTOR (4 downto 0);
           instruction : out  STD_LOGIC_VECTOR (31 downto 0));
end instruction_block;

architecture Behavioral of instruction_block is
		type instructionFile is array(0 to 31) of std_logic_vector(31 downto 0);
		signal instruction_memory : instructionFile;
begin
		instruction_memory(0) <="00000000100000010001000000100000";
		instruction_memory(1) <="00000000000000000001100000100000";
		instruction_memory(2) <="00000000010001000011000000111110";
		instruction_memory(3) <="00000000100001000011100000100000";   -- 7 th register 28 
		instruction_memory(4) <="00000000010001010111000000111110";   -- 14 th register  mult operation 
		--instruction_memory(5) <="00000011111001010101000000111111";	  -- div operation
		instruction_memory(5) <="10101100000000000000000000000000";   --store word to memory address 0
		--instruction_memory(7) <="10001100000010110000000000000000";		--load to register 11 from address 0

		process(pc )
		begin 
			instruction <= instruction_memory(to_integer(unsigned(pc)));
		end process;


end Behavioral;

