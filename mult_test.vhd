--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   03:55:21 11/25/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/p1/mult_test.vhd
-- Project Name:  p1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MUlT
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
 
ENTITY mult_test IS
END mult_test;
 
ARCHITECTURE behavior OF mult_test IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MUlT
    PORT(
         M : IN  std_logic_vector(31 downto 0);
         Q : IN  std_logic_vector(31 downto 0);
         clk : IN  std_logic;
         reset : IN  std_logic;
         enable : IN  std_logic;
         R : OUT  std_logic_vector(31 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal M : std_logic_vector(31 downto 0) := (others => '0');
   signal Q : std_logic_vector(31 downto 0) := (others => '0');
   signal clk : std_logic := '0';
   signal reset : std_logic := '0';
   signal enable : std_logic := '0';

 	--Outputs
   signal R : std_logic_vector(31 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MUlT PORT MAP (
          M => M,
          Q => Q,
          clk => clk,
          reset => reset,
          enable => enable,
          R => R
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      M<="00000000000000000000000000001110";
		Q<="00000000000000000000000000000111";
		reset<='1';
		enable <='0';
		wait for 10 ns ;
		reset <='0';
		enable <='1';

      wait for 10 ns ;

      -- insert stimulus here 
		assert false report "ok" severity failure ;
      wait;
   end process;

END;
