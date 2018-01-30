`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:21:53 04/25/2017 
// Design Name: 
// Module Name:    FPCVT 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module FPCVT(
    input  [11:0] D,
    output S,
    output reg [2:0] E,
    output reg [3:0] F
    );

 
	 
assign S = D[11];

integer count = 0;
integer i;
integer j;
integer breaker = 0;


reg [11:0] tempD = 12'b0;
always @*
begin
	if(D[11]==1)
	begin
	 tempD = (~D + 1'b1);
	end
	else
	begin
	 tempD = D;
	end
	
	
	for(i=11; i>-1; i=i-1)
	begin

		if(tempD[i] != 1 && breaker == 0)
		begin
			if(count < 8)
			begin
				count = count + 1;
				E = 8-count;
			end
			else
			begin
				
				count = 8;
				breaker = 1;
			end
		end
		else
		begin
			breaker = 1;
		end

	end
	
	//$display(count);
	if(count < 8)
	begin
		for(j = 0; j < 4; j = j+1)
		begin
		F[3-j] = tempD[12-(count+j+1)];

		end
	end
	else
	begin
		//$display("hi");
		//$display(tempD[3:0]);
		F[3] = tempD[3];
		F[2] = tempD[2];
		F[1] = tempD[1];
		F[0] = tempD[0];
		
		//$display(F);
	end
	
	
		if(count < 8)
		begin
			$display(F);
//			$display(tempD);
			$display(tempD[12-(count+j+1)]);
			$display(E);
			if(F == 4'b1111 && tempD[12-(count+j+1)] == 1)
			begin
				if(E== 7)
				begin
					F = 4'b1111;
					E = 3'b111;
				end
				else
				begin
					F = 4'b1000;
					E = E + 1;
				end
			end
			else
			begin
				F = F + tempD[12-(count+j+1)];
			end
		end

		
	//$display(D);
	//$display(12'b011111111111);
	//$display(12'b100000000000);
	
	
	if(tempD >= 12'b011111111111)
	begin
		$display("Hi");
		E = 3'b111;
		F = 4'b1111;
	end
	
	count = 0;
	breaker = 0;
end

endmodule
