--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   17:33:47 11/12/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/p1/test_div.vhd
-- Project Name:  p1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: div1
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_div IS
END test_div;
 
ARCHITECTURE behavior OF test_div IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT div1
    PORT(
         clock : IN  std_logic;
         d : IN  std_logic_vector(31 downto 0);
         m : IN  std_logic_vector(31 downto 0);
         q : OUT  std_logic_vector(31 downto 0);
         r : OUT  std_logic_vector(31 downto 0);
         enable : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clock : std_logic := '0';
   signal d : std_logic_vector(31 downto 0) := (others => '0');
   signal m : std_logic_vector(31 downto 0) := (others => '0');
   signal enable : std_logic := '0';

 	--Outputs
   signal q : std_logic_vector(31 downto 0);
   signal r : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: div1 PORT MAP (
          clock => clock,
          d => d,
          m => m,
          q => q,
          r => r,
          enable => enable
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      
		d<="00000000000000000000000000000110";
		m<="00000000000000000000000000011000";
		enable<='1';
      -- insert stimulus here 
		wait for 320 ns ;
      assert false report "ok" severity failure ;
   end process;

END;
