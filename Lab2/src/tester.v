`timescale 1ns / 100ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   21:40:30 10/21/2014
// Design Name:   fpcvt
// Module Name:   C:/Users/libo/Desktop/152exp/fpcvt/tb.v
// Project Name:  fpcvt
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: fpcvt
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////
`define MAX_MAG 12'b011111000000
`define MAX_MAG2 12'b100001000000
module tbS;

   // Inputs
   reg [11:0] D;

   // Outputs
   wire       S;
   wire [2:0] E;
   wire [3:0] F;

   // testbench variables
   reg        clk; // testbench clock
   integer    nErr; // number of errors
   integer    i;
	
	integer out;
   
   always #25 clk=~clk;
	
	wire [11:0] temp;
	
	
   // Instantiate the Unit Under Test (UUT)
   FPCVT uut (.D(D[11:0]), 
              .S(S), 
              .E(E[2:0]), 
              .F(F[3:0]));

   initial begin
      // Initialize Inputs
      D = 0;
      clk = 0;
      nErr = 0;
		
		out = $fopen("output.txt", "w");
      
      // Wait 100 ns for global reset to finish
      #100;
		
      for (i=0;i<4096;i=i+1)
		  begin
			  tskSetInput(i);
			  tskVerOutput(fnCvt(i));
			  //$display("testing %d", temp);
		  end

      #1000 $display("%d ... finishing, number of errors = %d",
                     $stime, nErr);
      
      $finish;
   end
	
   task tskSetInput;
      input [11:0] din;
      begin
         @ (negedge clk) D = din;
      end
   endtask // tskSetInput

   task tskVerOutput;
      input [7:0] expO;
      reg [7:0]   actO;
      begin
         //expO = {expS,expE[2:0],expF[3:0]};
         @ (posedge clk);
         actO = {S,E[2:0],F[3:0]};
         if (expO!=actO)
           begin
              $display ("%d ... Unexpected for input %012b, expecting %08b, was %08b",
                        $stime, D, expO, actO);
				  $fwrite (out, "%d ... Unexpected for input %012b, expecting %08b, was %08b\n",
                        $stime, D, expO, actO);
              nErr = nErr + 1;
           end
      end
   endtask // tskVerOutput


   
   function [7:0] fnCvt;
      input [11:0] din;
      reg          sign;
      reg [2:0]    ex;
      reg [4:0]    sg;
      reg [11:0]   mag;
      reg [4:0]    tmp;
      begin
         sign = din[11];
         mag = sign ? (~din + 1) : din;
         if (mag >= `MAX_MAG)   // special case #1: exp/sg overflow
           begin
              ex = 3'b111;
              sg = 4'b1111;
           end
         else
           begin
              case ('d0)
                mag[11:4]:  ex = 0;
                mag[11:5]:  ex = 1;
                mag[11:6]:  ex = 2;
                mag[11:7]:  ex = 3;
                mag[11:8]:  ex = 4;
                mag[11:9]:  ex = 5;
                mag[11:10]: ex = 6;
                default:    ex = 7;
              endcase
              if (ex==0)        // specail case #2: don't need to round
                begin
                   sg = {1'b0, mag[3:0]};
                end
              else 
                begin
                   tmp[4:0] = mag>>(ex-1);
                   sg[4:0]  = tmp[4:1] + tmp[0];
                   if (sg[4]) // specail case #3: sg overflow
                     begin
                        ex[2:0] = ex[2:0] + 1;
                        sg[4:0] = {1'b0, sg[4:1]};
                     end
                end
           end
         fnCvt = {sign, ex[2:0], sg[3:0]};
      end
   endfunction //
   
endmodule
