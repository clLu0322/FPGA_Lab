`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:22:09 03/25/2023 
// Design Name: 
// Module Name:    ex03 
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
module ex3(
    input clk,
	 input [4:0]input1, 
	 input [4:0]input2, 
	 input [4:0]input3, 
	 input [4:0]input4, 
    output reg [4:0]output1,
	 output reg maxPoolingDone
    );


	 
	 always@(posedge clk)begin
		output1 = 5'b0;
		if(output1 < input1)begin
			output1 = input1;
		end if(output1 < input2)begin
			output1 = input2;
		end if(output1 < input3)begin
			output1 = input3;
		end if(output1 < input4)begin
			output1 = input4;
		end
		
	end


endmodule
