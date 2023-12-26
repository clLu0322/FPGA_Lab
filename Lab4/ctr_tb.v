`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:47:47 03/27/2023
// Design Name:   ctr
// Module Name:   C:/lab/mar27/ctr_tb.v
// Project Name:  mar27
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ctr
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ctr_tb;

	// Inputs
	reg rst, clk;

	// Outputs


	// Instantiate the Unit Under Test (UUT)
	ctr uut (
	   .rst(rst),
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
      rst = 1;
		#100;
      rst =0;  
		// Add stimulus here

	end
	always #5 clk = ~clk;	
endmodule

