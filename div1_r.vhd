 ----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:18:13 07/04/2022 
-- Design Name: 
-- Module Name:    div1 - Behavioral 
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
----------------------------------------------------------------------------------library IEEE;
library ieee;
use IEEE.STD_LOGIC_1164.ALL;
use ieee.std_logic_unsigned.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity div1_r is

	port (			clock:in std_logic;
						d: in std_logic_vector(3 downto 0);
						m:in std_logic_vector(3 downto 0);
						q:out std_logic_vector(3 downto 0);
						r:out std_logic_vector(3 downto 0);
						reset : in std_logic;
						enable: in std_logic
					);
end div1_r;

architecture Behavioral of div1_r is
	signal reg1:std_logic_vector(3 downto 0);
	signal reg2:std_logic_vector(3 downto 0);
	signal reg_q:std_logic_vector (3 downto 0);
	signal m_s:std_logic_vector (3 downto 0);

begin
	process(clock,m,d,enable,reset )
	
	variable i:integer;
	variable t:std_logic_vector(3 downto 0);
	
	begin
		if(reset='1') then 
			reg1<="0000";
			reg2<="0000";
			reg_q<="0000";
			t:="0000";
			i:=3;
		
		
		elsif ( rising_edge(clock) and enable='1')  then
			
			
			t:=(reg1(2 downto 0) & m(i));
			if ( t >= d ) then
				reg2<=t(3 downto 0)-d(3 downto 0);
				reg_q<=reg_q(2 downto 0) & '1';
				
				i:=i-1;
				q<=reg_q(2 downto 0) & '1';
				r<=t(3 downto 0)-d(3 downto 0);
					
				
			else
				reg2<=t(3 downto 0)-"0000";
				reg_q<=reg_q(2 downto 0) & '0';
				i:=i-1;
				
				
				q<=reg_q(2 downto 0) & '0';
				r<=t(3 downto 0);
				
				
			end if;
			if(i<0) then 
				reg1<="0000";
				reg2<="0000";
				reg_q<="0000";
				t:="0000";
				i:=3;
			end if;
			
		elsif (falling_edge(clock) and enable='1') then
			reg1<=reg2;
		end if;
	end process;


end Behavioral;

