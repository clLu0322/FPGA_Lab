`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:31:59 05/15/2023 
// Design Name: 
// Module Name:    may15 
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
module may15(
    
    input [3:0] dip,
    input clk,
    input rst,
    output reg [7:0] out0,
	 output reg [7:0] out1,
	 output reg [7:0] out2,
	 output reg [7:0] out3,
	 output reg [3:0] led
	 
    );
	 
	 reg [8:0]ker1;
	 reg [8:0]ker2;
	 reg [8:0]ker3;
	 reg [8:0]ker4;
	 reg [8:0]ker;
	 wire o_clk;
	 clk_1#(27000000)
clk1(.clk(clk),.rst(rst),.o_clk(o_clk));
	 	 
always@(posedge o_clk or posedge rst)begin

if(rst)begin
	ker1 <= 9'b111111111;
	ker2 <= 9'b111000111;
	ker3 <= 9'b111010000;
	ker4 <= 9'b000011001;
end
	
else begin
	case(dip)
	4'b0001: ker <= ker1;
	4'b0010: ker <= ker2;
	4'b0100: ker <= ker3;
	4'b1000: ker <= ker4;
	endcase
	
 out0 <= (1*ker[0])+(2*ker[1])+(3*ker[2])+(5*ker[3])+(6*ker[4])+(7*ker[5])
	      +(9*ker[6])+(10*ker[7])+(11*ker[8]);
 out1 <= (2*ker[0])+(3*ker[1])+(4*ker[2])+(6*ker[3])+(7*ker[4])+(8*ker[5])
	      +(10*ker[6])+(11*ker[7])+(12*ker[8]);
 out2 <= (5*ker[0])+(6*ker[1])+(7*ker[2])+(9*ker[3])+(10*ker[4])+(11*ker[5])
	      +(13*ker[6])+(14*ker[7])+(15*ker[8]);
 out3 <= (6*ker[0])+(7*ker[1])+(8*ker[2])+(10*ker[3])+(11*ker[4])+(12*ker[5])
	      +(14*ker[6])+(15*ker[7])+(16*ker[8]);
	
	   if(out0 >= 40) 
		 led[0] <= 1; 
		else
		 led[0] <= 0;
		 
		if(out1 >= 40) 
		 led[1] <= 1; 
		else
		 led[1] <= 0;
		 
		if(out2 >= 40) 
		 led[2] <= 1; 
		else
		 led[2] <= 0;
		 
		if(out3 >= 40) 
		 led[3] <= 1; 
		else
		 led[3] <= 0;
		 
		 
	

end	
end
endmodule
module clk_1(
   input clk, rst,
	output reg o_clk
	);
	
	parameter N = 4;
	reg [25:0]cnt;
	always@(posedge clk or posedge rst)begin
	  if(rst)cnt <= 0;
	  else if(cnt == (N-1)) cnt <= 0;
	  else cnt <= cnt +1'b1;
	end
	always@(posedge clk or posedge rst)begin
	  if(rst) o_clk <= 0;
	  else if(cnt < (N>>1)) o_clk <= 1'b1;
	  else o_clk <= 1'b0;
	end
endmodule
