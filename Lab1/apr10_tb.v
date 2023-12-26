`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:41:39 04/10/2023
// Design Name:   apr10
// Module Name:   C:/lab/apr10/apr10_tb.v
// Project Name:  apr10
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: apr10
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module apr10_tb;

	// Inputs
	reg clk;
	reg [31:0] D;
	reg [3:0] P;
	reg rst;

	// Outputs
	wire counter;
	wire r;

	// Instantiate the Unit Under Test (UUT)
	apr10 uut (
		.clk(clk), 
		.D(D), 
		.P(P), 
		.counter(counter), 
		.r(r), 
		.rst(rst)
	);

	initial begin
		// Initialize Inputs
		clk = 0;
		D = 32'b1110_1101_1110_1010_1101_1100_1111_0110;
		P = 4'b0110;
		
		
		rst = 1;
		#100;
		rst = 0;
        
	end
		  always #5 clk = ~clk;
      
endmodule

