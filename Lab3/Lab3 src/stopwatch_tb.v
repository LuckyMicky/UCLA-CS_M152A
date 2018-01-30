`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:43:04 05/16/2017
// Design Name:   stopwatch
// Module Name:   C:/Users/152/Downloads/Lab3/Lab3-AAJ/stopwatch_tb.v
// Project Name:  Lab3-AAJ
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: stopwatch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module stopwatch_tb;

	// Inputs
	reg clk;
	reg reset;

	// Outputs
	wire oneHz;
	wire twoHz;
	wire fastHz;
	wire betweenHz;

	// Instantiate the Unit Under Test (UUT)
	stopwatch uut (
		.clk(clk), 
		.reset(reset), 
		.oneHz(oneHz), 
		.twoHz(twoHz), 
		.fastHz(fastHz), 
		.betweenHz(betweenHz)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		reset = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		clk = ~clk; 

	end
      
endmodule

