----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:24:55 12/05/2022 
-- Design Name: 
-- Module Name:    counter_module - Behavioral 
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
use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity counter_module is
    Port ( clock : in  STD_LOGIC;
           reset : in  STD_LOGIC;
		   
           output_counter : out  STD_LOGIC_VECTOR (5 downto 0));
end counter_module;

architecture Behavioral of counter_module is
	signal counter_register : std_logic_vector(5 downto 0 ) ;
begin
	process(clock , reset )
		begin 
			if(reset='1') then 
				counter_register <="000000";
			elsif ( rising_edge(clock) and reset='0' )  then 
				counter_register <= counter_register + 1;
			end if;
			--if reset='0' then
				
			--end if ;
		end process;
		output_counter <= counter_register ;
		
	
end Behavioral;

