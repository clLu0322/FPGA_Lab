`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:05:06 05/22/2023 
// Design Name: 
// Module Name:    may22 
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
module may22(
    input clk,
    input rst,
    input x,
    input y,
    input z,
    output reg[3:0] LED
    );
reg [3:0]w;

always@(posedge clk or posedge rst)begin

if(rst)
begin
  w <= 0;
end
else begin
  w <= (2*x + 2*y + 6*z);
  if(w > 6)
     LED <= 4'b1111;
  else if(w > 4)
     LED <= 4'b0111;
  else if(w > 2)
     LED <= 4'b0011;
  else 
     LED <= 4'b0001;
end
end

endmodule
