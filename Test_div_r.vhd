--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:55:54 12/07/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/p2/p1/Test_div_r.vhd
-- Project Name:  p1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: div1_r
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
 
ENTITY Test_div_r IS
END Test_div_r;
 
ARCHITECTURE behavior OF Test_div_r IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT div1_r
    PORT(
         clock : IN  std_logic;
         d : IN  std_logic_vector(3 downto 0);
         m : IN  std_logic_vector(3 downto 0);
         q : OUT  std_logic_vector(3 downto 0);
         r : OUT  std_logic_vector(3 downto 0);
         reset : IN  std_logic;
         enable : IN  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clock : std_logic := '0';
   signal d : std_logic_vector(3 downto 0) := (others => '0');
   signal m : std_logic_vector(3 downto 0) := (others => '0');
   signal reset : std_logic := '0';
   signal enable : std_logic := '0';

 	--Outputs
   signal q : std_logic_vector(3 downto 0);
   signal r : std_logic_vector(3 downto 0);

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: div1_r PORT MAP (
          clock => clock,
          d => d,
          m => m,
          q => q,
          r => r,
          reset => reset,
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
		reset<='1';
		enable<='0';
      wait for 10 ns;
		reset<='0';
		enable<='1';
		m<="1110";
		d<="0010";

      wait for 40 ns ;
		m<="1100";
		d<="0010";
		wait for 40 ns ;
		assert false report "ok" severity failure ;
      -- insert stimulus here 

      wait;
   end process;

END;
