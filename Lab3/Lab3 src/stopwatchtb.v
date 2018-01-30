`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:42:14 05/04/2017
// Design Name:   stopwatch
// Module Name:   C:/Users/152/Downloads/Lab3-AAJ/stopwatchtb.v
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

module stopwatchtb;

	// Inputs
	reg clock;
	reg reset;
	reg start;

	// Outputs
	wire minutes;
	wire seconds;

	// Instantiate the Unit Under Test (UUT)
	stopwatch uut (
		.clock(clock), 
		.reset(reset), 
		.start(start), 
		.minutes(minutes), 
		.seconds(seconds)
	);

	initial begin
		// Initialize Inputs
		clock = 0;
		reset = 0;
		start = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

