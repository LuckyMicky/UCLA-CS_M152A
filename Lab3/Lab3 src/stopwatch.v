`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    12:35:11 05/04/2017 
// Design Name: 
// Module Name:    stopwatch 
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
module debouncer(
	input button,
	input clk,
	output buttonstate
	);
	
	reg temp_buttonstate = 0;
	reg[15:0] debouncer_threshold;
	always @ (posedge clk)
	begin
		if(button)
		begin
			debouncer_threshold = debouncer_threshold + 1'b1;
			if(debouncer_threshold >= 15'b111111111111111)
			begin
				debouncer_threshold = 16'b0;
				temp_buttonstate = 1;
			end
		end
		else
		begin
			debouncer_threshold = 16'b0;
			temp_buttonstate = 0;
		end
	end
	
	assign buttonstate = temp_buttonstate;
endmodule 


module stopwatch(
    input clk,   
	 input reset,
	 input pause,
    output reg oneHz,
	 output reg twoHz,
	 output reg fastHz,
	 output reg betweenHz
    );

reg [25:0] a = 26'b0;
reg [25:0] b = 26'b0;
reg [25:0] c = 26'b0;
reg [25:0] d = 26'b0;

reg pauseState;
always @ (posedge clk)
begin
	if(pause)
	begin
		pauseState = ~pauseState;
	end
end
always @ (posedge clk or posedge reset)
begin
	if (reset) begin
		a = 26'b0;
		b = 26'b0;
		c = 26'b0;
		d = 26'b0;
	end

	else 
	begin
		if(pauseState == 1)
		begin
			c = c + 1'b1;
			if (c > 'd50000)
			begin
				c = 26'b0;
				fastHz = ~fastHz;
			end
			oneHz = oneHz;
			twoHz = twoHz;
			betweenHz = betweenHz;
		end
		else
		begin
			a = a + 1'b1;
			b = b + 1'b1;
			c = c + 1'b1;
			d = d + 1'b1;
			
			if (a > 'd50000000)
			begin
				a = 26'b0;
				oneHz = ~oneHz;
			end
			
			if (b > 'd25000000)
			begin
				b = 26'b0;
				twoHz = ~twoHz;
			end
			
			if (c > 'd50000)
			begin
				c = 26'b0;
				fastHz = ~fastHz;
			end
			
			if (d > 'd12500000)
			begin
				d = 26'b0;
				betweenHz = ~betweenHz;
			end
		end
	end
end
endmodule

module timer(
	input reset,
	input wire oneHz,
	input sel,
	input adj,
	output minutes1,
	output minutes2,
	output seconds1,
	output seconds2
	
);



 reg [3:0] minutes1 = 4'b0;
 reg [3:0] minutes2 = 4'b0;
 reg [3:0] seconds1 = 4'b0;
 reg [3:0] seconds2 = 4'b0;


always @ (posedge oneHz or posedge reset)
	begin
		if (reset) begin

			minutes1 = 0;
			minutes2 = 0;
			seconds1 = 0;
			seconds2 = 0;
		end
		
		else
		
		
		begin
			if (adj == 1) // We're feeding in 2Hz clock rn
			begin
				if(sel == 1) 	// Adjusting seconds
				begin
					if(seconds1 >= 5 && seconds2 == 8)
					begin
						seconds1 = 0;
						seconds2 = 0;
					end
					else if(seconds1 >= 5 && seconds2 == 9)
					begin
						seconds1 = 0;
						seconds2 = 1;
					end
					else if(seconds1 < 5 && seconds2 == 8)
					begin
						seconds1 = seconds1 + 1;
						seconds2 = 0;
					end
					else if (seconds1 < 5 && seconds2 == 9)
					begin
						seconds1 = seconds1 + 1;
						seconds2 = 1;
					end
					else
					begin
						seconds2 = seconds2 + 2;
					end
				end
				else				// Adjusting minutes
				begin
					if(minutes1 >= 5 && minutes2 == 8)
					begin
						minutes1 = 0;
						minutes2 = 0;
					end
					else if (minutes1 >= 5 && minutes2 == 9)
					begin
						minutes1 = 0;
						minutes2 = 1;
					end
					else if (minutes1 < 5 && minutes2 == 8)
					begin
						minutes1 = minutes1 + 1;
						minutes2 = 0;
					end
					else if (minutes1 < 5 && minutes2 == 9)
					begin
						minutes1 = minutes1 + 1;
						minutes2 = 1;
					end
					else
					begin
						minutes2 = minutes2 + 2;
					end
				end

			end
			else
		
		
			begin
				/*
				seconds <= seconds + 1;
				
				if(seconds > 59)
				begin
					seconds <= 0;
					minutes <= minutes + 1;
				end
				minutes1 <= minutes/10;
				minutes2 <= minutes%10;
				seconds1 <= seconds/10;
				seconds2 <= seconds%10;
				*/
				
				if(seconds1 == 5 && seconds2 == 9)
				begin
					seconds1 = 0;
					seconds2 = 0;
					if(minutes1 == 5 && minutes2 == 9)
					begin
						minutes1 = 0;
						minutes2 = 0;
					end
					else
					begin
						if(minutes1!= 5 && minutes2 == 9)
						begin
							minutes1 = minutes1+1;
							minutes2 = 0;
						end
						else
						begin
							minutes2 = minutes2+1;
						end
					end
				end
				else if(seconds1 != 5 && seconds2 ==9)
				begin
					seconds1 = seconds1 + 1;
					seconds2 = 0;
				end
				else
				begin
					seconds2 = seconds2 + 1;
				end
					
			end
		end

	end

endmodule

module clock_selector(oneHz, twoHz, adj, clock);
	input oneHz;
	input twoHz;
	input adj;
	
	output clock;
	reg temp_clock; 
	
	always @*
	begin
		if (adj == 1)
		begin
			temp_clock = twoHz;
		end
		else
		begin
			temp_clock = oneHz;
		end
	end
	
	assign clock = temp_clock;
endmodule

module display(clk, reset, adj, sel, pause, seg, an);

	input clk;
	input reset;
	input adj;
	input sel;
	input pause;
	
	output reg [7:0] seg;
	output reg [3:0] an;
	
	wire[3:0]  minutes1;
	wire[3:0]  minutes2;
	wire[3:0]  seconds1;
	wire[3:0]  seconds2;

	wire oneHz;
	wire twoHz;
	wire fastHz;
	wire betweenHz;

	wire clock;

	integer count;
	
	integer value; 
	    
	wire pauseSignal;
	

	debouncer pauseDebouncer(
		.button(pause),
		.clk(clk),
		.buttonstate(pauseSignal)
	);

	stopwatch s(
		.clk(clk),
		.reset(reset),
		.pause(pauseSignal),
		.oneHz(oneHz),
		.twoHz(twoHz),
		.fastHz(fastHz),
		.betweenHz(betweenHz)
		);
		
		// TODO DO WE HAVE TO WAIT HERE?!
		
	clock_selector cs (
		.oneHz(oneHz),
		.twoHz(twoHz),
		.adj(adj),
		.clock(clock)
	
	);
	timer t (
		.oneHz(clock),   
		.reset(reset),
		.sel(sel),
		.adj(adj),
		.minutes1(minutes1),
		.minutes2(minutes2),
		.seconds1(seconds1),
		.seconds2(seconds2)
	);


	always@(posedge fastHz)
	begin
	//TODO CYCLE THROUGH FOUR TIMES AND EACH TIME DISPLAY MINUTES1/MINUTES2...
		count = count+1;
		if(count%4 == 0)
		begin
			an = 4'b0111;
			value = minutes1;
			if(betweenHz == 0 && sel == 0 && adj == 1)
			begin
				value = 10;
			end
		end
		else if(count%4 == 1)
		begin
			an = 4'b1011;
			value = minutes2;
			if(betweenHz == 0 && sel == 0 && adj == 1)
			begin
				value = 10;
			end
		end
		else if(count%4 == 2)
		begin
			an = 4'b1101;
			value = seconds1;
			if(betweenHz == 0 && sel == 1 && adj == 1)
			begin
				value = 10;
			end			
		end
		else if(count%4 == 3)
		begin
			an = 4'b1110;
			value = seconds2;
			
			if(betweenHz == 0 && sel == 1 && adj == 1)
			begin
				value = 10;
			end
		end
		case(value)
			 0: seg = 8'b11000000;
			 1: seg = 8'b11111001;
			 2: seg = 8'b10100100; 
			 3: seg = 8'b10110000;
			 4: seg = 8'b10011001;
			 5: seg = 8'b10010010;
			 6: seg = 8'b10000010;
			 7: seg = 8'b11111000;
			 8: seg = 8'b10000000;
			 9: seg = 8'b10010000;
			 default: seg = 8'b11111111;
		endcase
	end



endmodule
