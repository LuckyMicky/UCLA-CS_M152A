`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:22:48 04/25/2017
// Design Name:   FPCVT
// Module Name:   C:/Users/152/Documents/Lab2-AAJ/FPCVT_TB.v
// Project Name:  Lab2-AAJ
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FPCVT
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module FPCVT_TB;

	// Inputs
	reg [11:0] D = 12'b0;

	// Outputs
	wire S;
	wire [2:0] E;
	wire [3:0] F;

	// Instantiate the Unit Under Test (UUT)
	FPCVT uut (
		.D(D), 
		.S(S), 
		.E(E), 
		.F(F)
	);
	
	initial begin
		// Initialize Inputs
		//D = 12'b0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		//D = 12'b000111110110;
		//D = 12'b111001011010;
		D = 12'b100000011110; // 011111100010
	end
      
endmodule

