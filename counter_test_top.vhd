----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:48:07 12/06/2022 
-- Design Name: 
-- Module Name:    counter_test_top - Behavioral 
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

entity counter_test_top is
    Port ( reset: in std_logic;
				clock : in std_logic;
				status : out std_logic;
				enable : in std_logic;
           output : out  STD_LOGIC_VECTOR (5 downto 0));
end counter_test_top;

architecture Behavioral of counter_test_top is
	component counter_module is 
		Port ( clock : in  STD_LOGIC;
           reset : in  STD_LOGIC;
		  
           output_counter : out  STD_LOGIC_VECTOR (5 downto 0));
	end component;
	signal reset_c , reset_r , enable_r: std_logic;
	signal output_counter : std_logic_vector(5 downto 0);
	
	signal flag : std_logic;
begin
		reset_r <= reset_c or reset;
		
		counter_m : counter_module port map(clock=>clock,reset=>reset_r, output_counter=>output_counter);
		output<=output_counter;
		process(clock)
		begin 
			if rising_edge(clock) then
				
			
			if(output_counter="000100") then 
				reset_c<='1';
				status<='1';
				
			else
				reset_c<='0';
				status<='0';
				
				
			end if;
			end if ;
		end process;

end Behavioral;

