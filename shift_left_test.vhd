--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:45:25 12/04/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/p2/p1/shift_left_test.vhd
-- Project Name:  p1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: shift_left_module
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
 
ENTITY shift_left_test IS
END shift_left_test;
 
ARCHITECTURE behavior OF shift_left_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT shift_left_module
    PORT(
         a : IN  std_logic_vector(31 downto 0);
         clock : IN  std_logic;
         shamt : IN  std_logic_vector(4 downto 0);
         r : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal a : std_logic_vector(31 downto 0) := (others => '0');
   signal clock : std_logic := '0';
   signal shamt : std_logic_vector(4 downto 0) := (others => '0');

 	--Outputs
   signal r : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: shift_left_module PORT MAP (
          a => a,
          clock => clock,
          shamt => shamt,
          r => r
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
      wait for 10 ns;	
		a<="00000000000000000000000000000110";
		shamt<="00110";
		
      wait for 10 ns;
		assert false report "ok" severity failure ;
      -- insert stimulus here 

      wait;
   end process;

END;
