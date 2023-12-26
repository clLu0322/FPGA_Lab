`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:22:14 03/25/2023
// Design Name:   ex3
// Module Name:   C:/Users/User/Desktop/fpga/ex3/ex3_tb.v
// Project Name:  ex3
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ex3
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ex3_tb;

	// Inputs
	reg clk;
	reg [4:0] input1;
	reg [4:0] input2;
	reg [4:0] input3;
	reg [4:0] input4;

	// Outputs
	wire [4:0] output1;
	wire maxPoolingDone;
	
	reg [4:0] array_image [0:15];
	integer i = 0;
   reg [4:0] ans [0:3];

	// Instantiate the Unit Under Test (UUT)
	ex3 uut (
		.clk(clk), 
		.input1(input1), 
		.input2(input2), 
		.input3(input3), 
		.input4(input4), 
		.output1(output1), 
		.maxPoolingDone(maxPoolingDone)
	);

	initial begin
		// Initialize Inputs
		input1 <= 0;
		input2 <= 0;
		input3 <= 0;
		input4 <= 0;
		array_image[0] <= 'd2;
		array_image[1] <= 'd0;
		array_image[2] <= 'd1;
		array_image[3] <= 'd2;
		array_image[4] <= 'd6;
		array_image[5] <= 'd3;
		array_image[6] <= 'd7;
		array_image[7] <= 'd8;
		array_image[8] <= 'd4;
		array_image[9] <= 'd3;
		array_image[10] <= 'd0;
		array_image[11] <= 'd1;
		array_image[12] <= 'd1;
		array_image[13] <= 'd2;
		array_image[14] <= 'd5;
		array_image[15] <= 'd2;
	
		//enable <= 0;
		clk <= 0;
	
		 @(posedge clk); 
			i=0;
			input1 <= array_image[i];
			input2 <= array_image[i+1];
			input3 <= array_image[i+4];
			input4 <= array_image[i+5];
		   @(posedge clk); 	
			@(posedge clk); ans[0]<=output1;
			i=2;
		
			input1 <= array_image[i];
			input2 <= array_image[i+1];
			input3 <= array_image[i+4];
			input4 <= array_image[i+5];
			@(posedge clk); 
		   @(posedge clk); 	ans[1]<=output1;
			
			i=8;
		
			input1 <= array_image[i];
			input2 <= array_image[i+1];
			input3 <= array_image[i+4];
			input4 <= array_image[i+5];
			@(posedge clk); 
			@(posedge clk); ans[2]<=output1;
		
			i=10;
		
			input1 <= array_image[i];
			input2 <= array_image[i+1];
			input3 <= array_image[i+4];
			input4 <= array_image[i+5];
			@(posedge clk); 
		  @(posedge clk); 	ans[3]<=output1;
   

       
		
	end
	
	always #5 clk = ~clk;	
      
endmodule

