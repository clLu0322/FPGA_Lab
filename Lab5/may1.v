`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:26:44 05/01/2023 
// Design Name: 
// Module Name:    may1 
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
module may1(
    input clk,
	 input rst,
    input [3:0] DIP,
    input [3:0] PB,
    output reg[3:0] LED
    );
	 
	 reg [2:0]err_state;
	 reg [3:0]crr_state;
	 reg [3:0]DIPREG = 4'b0;
	 wire o_clk;
	 clk_1#(27000000)
clk1(.clk(clk),.rst(rst),.o_clk(o_clk));
	 always@(posedge o_clk or posedge rst)begin
	 
	 if(rst)
	 begin
	   LED <= 4'b0000;
		err_state <= 3'b0;
		crr_state <= 3'b0;
	 end
	 
	 else 
	 begin
	 
	   case(DIP)
		   4'b1001:begin
			   
				if (crr_state > 4'b1000)begin
				 crr_state <= 4'b1111;
				 end else begin  
				 crr_state <= crr_state + 1; end
				case(crr_state)
				  4'b0000: LED <= 4'b0000;
				  4'b0001: LED <= 4'b0001;
				  4'b0010: LED <= 4'b0010;
				  4'b0011: LED <= 4'b0100;
				  4'b0100: LED <= 4'b1000;
				  4'b0101: LED <= 4'b0100;
				  4'b0110: LED <= 4'b0010;
				  4'b0111: LED <= 4'b0001;
				  4'b1000: LED <= 4'b0000;
				  default: LED <= PB;
				            
				endcase
			end
			default: begin
			    DIPREG <= DIP;
				 err_state <= err_state + 1;  
				 case(err_state)
				 
				   3'b000: LED <= 4'b0000;
				   3'b001: LED <= 4'b1111;
					3'b010: LED <= 4'b0000;
					3'b011: LED <= 4'b1111;
					3'b100: LED <= 4'b0000;
					3'b101: LED <= 4'b1111;
					3'b110: LED <= 4'b0000;
					default: err_state <= err_state - 1;
			    endcase
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
	
	
	
	  
