`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:22:45 04/10/2023 
// Design Name: 
// Module Name:    apr10 
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
module apr10(clk, Data, P, counter, r, rst);

input clk, rst, Data;
input [3:0]P;
output reg r;
output reg [2:0]counter;	 
reg [3:0]comp;


always@(posedge clk or posedge rst)begin
    
	 if(rst == 1 )begin
		 counter = 3'b000 ;
		 r = 0;
		 comp = 4'b0000; end 	
  else begin		 
	 
	 comp[3] = comp [2];
	 comp[2] = comp [1];
	 comp[1] = comp [0];
	 comp[0] = Data; 

	 if (P[0] == comp[0])begin
	   if (P[1] == comp[1])begin
		  if (P[2] == comp[2])begin
		    if (P[3] == comp[3])begin
	           r = 1;
	           counter = counter + 1; 
        end else begin
			 r <= 0; end
       end else begin
		  r <= 0; end
     end else begin
      r <= 0; end  		
 end else begin
   r <= 0; end 	
	
	end
		 
end

endmodule
