--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:56:36 12/04/2022
-- Design Name:   
-- Module Name:   D:/vhdl_github_2/vhdl_github_2/p2/p1/Test_p1-1.vhd
-- Project Name:  p1
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: processor
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
 
ENTITY Test_p1_1 IS
END Test_p1_1;
 
ARCHITECTURE behavior OF Test_p1_1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT processor
    PORT(
         clock : IN  std_logic;
         alu_in_m : IN  std_logic;
         reg_reset : IN  std_logic;
         pc_reset : IN  std_logic;
         pc_enable : IN  std_logic;
         pc_write_signal : IN  std_logic;
         alu_second_result : OUT  std_logic_vector(31 downto 0);
         alu_immediate_signal : OUT  std_logic_vector(31 downto 0);
         alu_out_m : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clock : std_logic := '0';
   signal alu_in_m : std_logic := '0';
   signal reg_reset : std_logic := '0';
   signal pc_reset : std_logic := '0';
   signal pc_enable : std_logic := '0';
   signal pc_write_signal : std_logic := '0';

 	--Outputs
   signal alu_second_result : std_logic_vector(31 downto 0);
   signal alu_immediate_signal : std_logic_vector(31 downto 0);
   signal alu_out_m : std_logic;

   -- Clock period definitions
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: processor PORT MAP (
          clock => clock,
          alu_in_m => alu_in_m,
          reg_reset => reg_reset,
          pc_reset => pc_reset,
          pc_enable => pc_enable,
          pc_write_signal => pc_write_signal,
          alu_second_result => alu_second_result,
          alu_immediate_signal => alu_immediate_signal,
          alu_out_m => alu_out_m
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
		pc_reset <='1';
		pc_enable <='0';
		
		alu_in_m <='0';
		reg_reset <= '0';
		wait for 10 ns ;
		pc_enable <='1';
		pc_reset <='0';
		
		alu_in_m <='0';
		reg_reset <= '0';
		pc_write_signal <='0';
      wait for 10 ns ;
		pc_write_signal <='1';
		pc_enable <='1';
		pc_reset <='0';
		
		alu_in_m <='0';
		reg_reset <= '0';
		
		wait for 10 ns;
		pc_write_signal <='1';
		wait for 10 ns;
		assert false report "ok" severity failure ;
      -- insert stimulus here 

      wait;
   end process;

END;
