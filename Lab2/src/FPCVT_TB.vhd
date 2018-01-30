--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:35:20 04/25/2017
-- Design Name:   
-- Module Name:   C:/Users/152/Documents/Lab2-AAJ/FPCVT_TB.vhd
-- Project Name:  Lab2-AAJ
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: FPCVT
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
 
ENTITY FPCVT_TB IS
END FPCVT_TB;
 
ARCHITECTURE behavior OF FPCVT_TB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT FPCVT
    PORT(
         D : IN  std_logic_vector(11 downto 0);
         S : OUT  std_logic;
         E : OUT  std_logic_vector(2 downto 0);
         F : OUT  std_logic_vector(3 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal D : std_logic_vector(11 downto 0) := (others => '0');

 	--Outputs
   signal S : std_logic;
   signal E : std_logic_vector(2 downto 0);
   signal F : std_logic_vector(3 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   --constant <clock>_period : time := 10 ns;
 
 		 	reg[11:0] bit422 <= 12'b000110100110;
	reg[11:0] bitneg422 <= 12'b111001011010;

	
 
BEGIN

	-- Instantiate the Unit Under Test (UUT)
   uut: FPCVT PORT MAP (
          D => D,
          S => S,
          E => E,
          F => F
        );

   -- Clock process definitions
  -- <clock>_process :process
   --begin
		--<clock> <= '0';
		--wait for <clock>_period/2;
		--<clock> <= '1';
		--wait for <clock>_period/2;
   --end process;
 

   -- Stimulus process
   stim_proc: process
   begin	

      -- hold reset state for 100 ns.
      --wait for 100 ns;	

      --wait for <clock>_period*10;

      -- insert stimulus here 
		FPCVT(bit422, S, E, F);
		--wait for 10000 ns;
		FPCVT(bitneg422, S, E, F);
      --wait;
   end process;

END;
