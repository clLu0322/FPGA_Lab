`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:12:30 06/19/2023 
// Design Name: 
// Module Name:    final 
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
module final(
    input clk,
    input [1:0] pb,
    input dip,
    output reg[3:0] LED
    );


always@(posedge clk )begin
  
  if(dip == 1)
  begin
    
	 case(pb)
    2'b00: LED <= 4'b1111;
	 2'b01: LED <= 4'b1100;
	 2'b11: LED <= 4'b0000;
	 
  endcase
  end
  else
    LED<= 4'b0000;
end  

endmodule
