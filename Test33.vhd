--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:26:40 12/06/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/p2/p1/Test33.vhd
-- Project Name:  p1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: counter_test_top
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
 
ENTITY Test33 IS
END Test33;
 
ARCHITECTURE behavior OF Test33 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT counter_test_top
    PORT(
         reset : IN  std_logic;
         clock : IN  std_logic;
         status : OUT  std_logic;
         enable : IN  std_logic;
         output : OUT  std_logic_vector(5 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal reset : std_logic := '0';
   signal clock : std_logic := '0';
   signal enable : std_logic := '0';

 	--Outputs
   signal status : std_logic;
   signal output : std_logic_vector(5 downto 0);

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: counter_test_top PORT MAP (
          reset => reset,
          clock => clock,
          status => status,
          enable => enable,
          output => output
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
      
		reset<='1';
		wait for 10 ns;
		reset<='0';
		wait for 80 ns ;
      

      -- insert stimulus here 
		assert false report "ok" severity failure ;
      wait;
   end process;

END;
