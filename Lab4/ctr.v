`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:26:59 03/27/2023 
// Design Name: 
// Module Name:    ctr 
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
module ctr(rst ,clk);
input rst, clk; 	 
reg T;
reg [1:0]out1, out2;

		
always@(posedge clk or posedge rst)begin
    if(rst)begin
	 T <= 0;
	 out1 <= 2'b00;
	 out2 <= 2'b00;
    end
	 
    if(T == 0)begin
	   out1 <= out1 +1'b1; end
	 if(out1 == 2'b11)begin
	   out1 <= 2'b00;
		T <= 1;end
	 
	 if(T == 1)begin
	   out2 <= out2 +1'b1; end
	 if(out2 == 2'b11)begin
	   out2 <= 2'b00;
		T <= 0;end

end

endmodule
