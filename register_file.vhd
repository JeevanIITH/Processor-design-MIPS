----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    08:05:47 10/04/2022 
-- Design Name: 
-- Module Name:    register_file - Behavioral 
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
use ieee.std_logic_textio.all;
use std.textio.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity register_file is
    generic(INIT_FILE : string := "register.txt");
    Port ( reg_a : out  STD_LOGIC_VECTOR (31 downto 0);
           reg_b : out  STD_LOGIC_VECTOR (31 downto 0);
           reg_w : in  STD_LOGIC_VECTOR (31 downto 0);
           enable_write : in  STD_LOGIC;
           sel_reg_a : in  STD_LOGIC_VECTOR (4 downto 0);
           sel_reg_b : in  STD_LOGIC_VECTOR (4 downto 0);
           sel_reg_w : in  STD_LOGIC_VECTOR (4 downto 0);
           clk : in  STD_LOGIC;
           reset : in  STD_LOGIC);
end register_file;



architecture Behavioral of register_file is 
	type registerFile is array(0 to 31) of std_logic_vector(31 downto 0);

  ------------------------------------
  -- function to initialize memory content
      function init_memory_wfile(mif_file_name : in string) return registerFile is
      file mif_file : text open read_mode is mif_file_name;
      variable mif_line : line;
      variable temp_bv : bit_vector(31 downto 0);
      variable temp_mem : registerFile;
      begin
      for i in registerFile'range loop
          readline(mif_file, mif_line);
          read(mif_line, temp_bv);
          temp_mem(i) := to_stdlogicvector(temp_bv);
      end loop;
      return temp_mem;
      end function;
-------------------------------------

   signal registers : registerFile :=init_memory_wfile(INIT_FILE);
	

begin
	  
	regFile : process ( clk  ) is  --, sel_reg_a , sel_reg_b , reg_w 
	begin
		--registers(0)<="00000000000000000000000000001110";
		--registers(1)<="00000000000000000000000000000111";
    --registers(8)<="00000000000000000000000000000101";
    --registers(9)<="00000000000000000000000000110010";
    if rising_edge(clk) then
		
      
      reg_a <= registers(to_integer(unsigned(sel_reg_a)));
      reg_b <= registers(to_integer(unsigned(sel_reg_b)));
      
      if enable_write = '1' then
          --if reset='0' then
            registers(to_integer(unsigned(sel_reg_w))) <= reg_w;  -- Write
          --else 
            --registers(to_integer(unsigned(sel_reg_w))) <= "00000000000000000000000000000000";  
          --end if;
		  
--        
		  
      end if;
    end if;
	end process;


end Behavioral;

