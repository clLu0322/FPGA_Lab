`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:18:33 06/05/2023 
// Design Name: 
// Module Name:    june5 
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
module june5(
    input clk,
	 input rst,
    input pb0,
    output reg[2:0] LED,
	 output reg LED3
    );
reg [3:0]ctr;
wire o_clk;

	 clk_1#(13500000)
clk1(.clk(clk),.rst(rst),.o_clk(o_clk));
always@(posedge o_clk or posedge rst)begin
  if(rst)
  begin
    LED <= 3'b0;
	 ctr <= 0;
  end
  else 
  begin
  
  if(ctr < 11)
  ctr <= ctr + 1;
  else
  ctr <= 0;
  
  case(ctr)
  4'h0: LED <= 3'b001;
  4'h4: LED <= 3'b010;
  4'h5: LED <= 3'b100;
  endcase
  end
end
  
always@(posedge clk or posedge rst)
begin
if(rst)
LED3 <= 0;
else begin
if(LED == 3'b100)
  if(pb0 ==1)
   LED3 <= 1;
  else
   LED3 <= 0;
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