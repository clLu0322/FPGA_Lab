`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:35:29 04/10/2023
// Design Name:   apr10
// Module Name:   C:/lab/apr10/tb.v
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

module tb;

	// Inputs
	reg clk;
	reg Data;
	reg [3:0] P;
	reg rst;

	// Outputs
	wire [2:0]counter;
	wire r;

	// Instantiate the Unit Under Test (UUT)
	apr10 uut (
		.clk(clk), 
		.Data(Data), 
		.P(P), 
		.counter(counter), 
		.r(r), 
		.rst(rst)
	);
	
	reg [31:0]input_data;
	reg data_cnt;

	initial begin
		// Initialize Inputs
		clk = 0;
		Data = 0;
		P = 4'b0110;
		rst = 1;
		input_data = 32'b1110_1101_1110_1010_1101_1100_1111_0110;
		data_cnt=0;
		
		
		#100;
		
		rst = 0;
      end
		
		always #100 clk =~clk;
		
		always@(posedge clk) begin
		if(data_cnt==30)begin $finish; end
		
		else if (data_cnt<30)begin
		    Data = input_data[31:27];
			 input_data = input_data << 1;
			 data_cnt = data_cnt+1;
		end
		
		else begin
		    input_data = input_data;
			 data_cnt = data_cnt;
		end
		end
			 
      
endmodule

