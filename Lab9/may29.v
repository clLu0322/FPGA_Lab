`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:22:32 05/29/2023 
// Design Name: 
// Module Name:    may29 
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
module may29(
    input clk,
    input rst,
    input [3:0] dip,
    input pb0,
    output reg[3:0] LED
    );
  reg [15:0] R;
  reg [3:0]ctr;
  reg pb;
	 wire o_clk;
	 clk_1#(27000000)
clk1(.clk(clk),.rst(rst),.o_clk(o_clk));  
  always@(posedge o_clk or posedge rst)
  begin
    if(rst)
	 begin
	   R <= 0;
		ctr <= 0;
		pb <= 0;
	 end
	 else 
	 begin
	   if(pb0 == 1)
		pb <= 1;
		
		if(pb ==1) begin
		ctr <= ctr +1;
	
		case(ctr)
		 4'h0: R[0] <= 1;
		 4'h1: R[1] <= 1;
		 4'h2: R[2] <= 1;
		 4'h3: R[3] <= 1;
		 4'h4: R[4] <= 1;
		 4'h5: R[5] <= 1;
		 4'h6: R[6] <= 1;
		 4'h7: R[7] <= 1;
		 4'h8: R[8] <= 1;
		 4'h9: R[9] <= 1;
		 4'ha: R[10] <= 1;
		 4'hb: R[11] <= 1;
		 4'hc: R[12] <= 1;
		 4'hd: R[13] <= 1;
		 4'he: R[14] <= 1;
		 4'hf: R[15] <= 1;
		endcase
		end
		


		case(dip)
		 4'h8: 
		 begin 
		 LED[0] <= R[0];
		 LED[1] <= R[1];
		 LED[2] <= R[8];
		 LED[3] <= R[9];
		 end
		 4'h7: 
		 begin 
		 LED[0] <= R[0];
		 LED[1] <= R[1];
		 LED[2] <= R[7];
		 LED[3] <= R[8];
		 end
		 4'h6: 
		 begin 
		 LED[0] <= R[0];
		 LED[1] <= R[1];
		 LED[2] <= R[6];
		 LED[3] <= R[7];
		 end
		 4'h5: 
		 begin 
		 LED[0] <= R[0];
		 LED[1] <= R[1];
		 LED[2] <= R[5];
		 LED[3] <= R[6];
		 end
		 4'h4: 
		 begin
		 LED[0] <= R[0];
		 LED[1] <= R[1];		 
		 LED[2] <= R[4];
		 LED[3] <= R[5];
		 end
		 4'h3: 
		 begin 
		 LED[0] <= R[0];
		 LED[1] <= R[1];
		 LED[2] <= R[3];
		 LED[3] <= R[4];
		 end
		 4'h2: 
		 begin
		 LED[0] <= R[0];
		 LED[1] <= R[1];		 
		 LED[2] <= R[2];
		 LED[3] <= R[3];
		 end
		 endcase
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
