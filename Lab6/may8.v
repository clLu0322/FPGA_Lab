`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:27:21 05/08/2023 
// Design Name: 
// Module Name:    may8 
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
module may8(
    input clk,
    input rst,
    input [1:0] sensor,
    output [3:0] LED
    );

    reg [3:0]LED;
    reg [2:0]op_state;
    reg [2:0]cl_state;
	 wire o_clk;
	 clk_1#(27000000)
clk1(.clk(clk),.rst(rst),.o_clk(o_clk));

always@(posedge o_clk or posedge rst)begin

   if(rst)
	begin
	  LED[3:0] <= 4'b0;
	  op_state <= 3'b0;
	  cl_state <= 3'b0;
	end
	else begin
	
	if(sensor[0] == 1) begin
	  
	  if (op_state < 3'b111)begin
	  op_state <= op_state + 1;end
	  else begin
	  op_state <= op_state;end
	  
	  case(op_state)
	  
	  3'b001: LED <= 4'b0001;
	  3'b010: LED <= 4'b0011;
	  3'b011: LED <= 4'b0111;
	  3'b100: LED <= 4'b1111;
	  default: LED <= LED;
	  
	  endcase
	  end
	  
	else if(sensor[1] == 1) begin
	
	  if (cl_state < 3'b111)begin
	  cl_state <= cl_state + 1;end
	  else begin
	  cl_state <= cl_state;end
	  
	  case(cl_state)
	  
	  3'b001: LED <= 4'b0111;
	  3'b010: LED <= 4'b0011;
	  3'b011: LED <= 4'b0001;
	  3'b100: LED <= 4'b0000;
	  default: LED <= LED;  
	  endcase
	  end
	  
	  
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

