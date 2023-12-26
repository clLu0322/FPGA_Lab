////////////////////////////////////////////////////////////////////////////////
// Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
////////////////////////////////////////////////////////////////////////////////
//   ____  ____
//  /   /\/   /
// /___/  \  /    Vendor: Xilinx
// \   \   \/     Version: P.20131013
//  \   \         Application: netgen
//  /   /         Filename: apr10_synthesis.v
// /___/   /\     Timestamp: Mon Apr 10 11:53:30 2023
// \   \  /  \ 
//  \___\/\___\
//             
// Command	: -intstyle ise -insert_glbl true -w -dir netgen/synthesis -ofmt verilog -sim apr10.ngc apr10_synthesis.v 
// Device	: xc6slx16-3-csg324
// Input file	: apr10.ngc
// Output file	: C:\lab\apr10\netgen\synthesis\apr10_synthesis.v
// # of Modules	: 1
// Design Name	: apr10
// Xilinx        : C:\Xilinx\14.7\ISE_DS\ISE\
//             
// Purpose:    
//     This verilog netlist is a verification model and uses simulation 
//     primitives which may not represent the true implementation of the 
//     device, however the netlist is functionally correct and should not 
//     be modified. This file cannot be synthesized and should only be used 
//     with supported simulation tools.
//             
// Reference:  
//     Command Line Tools User Guide, Chapter 23 and Synthesis and Simulation Design Guide, Chapter 6
//             
////////////////////////////////////////////////////////////////////////////////

`timescale 1 ns/1 ps

module apr10 (
  clk, Data, rst, counter, r, P
);
  input clk;
  input Data;
  input rst;
  output counter;
  output r;
  input [3 : 0] P;
  wire P_0_IBUF_0;
  wire P_1_IBUF_1;
  wire P_2_IBUF_2;
  wire P_3_IBUF_3;
  wire clk_BUFGP_4;
  wire Data_IBUF_5;
  wire rst_IBUF_6;
  wire r_OBUF_10;
  wire counter_OBUF_11;
  wire \P[0]_Data_equal_3_o_inv_0 ;
  wire _n0037_inv1;
  wire counter_rstpot_23;
  wire [2 : 0] comp;
  FDR   comp_0 (
    .C(clk_BUFGP_4),
    .D(Data_IBUF_5),
    .R(rst_IBUF_6),
    .Q(comp[0])
  );
  FDR   comp_1 (
    .C(clk_BUFGP_4),
    .D(comp[0]),
    .R(rst_IBUF_6),
    .Q(comp[1])
  );
  FDR   comp_2 (
    .C(clk_BUFGP_4),
    .D(comp[1]),
    .R(rst_IBUF_6),
    .Q(comp[2])
  );
  FDR   r_4 (
    .C(clk_BUFGP_4),
    .D(_n0037_inv1),
    .R(\P[0]_Data_equal_3_o_inv_0 ),
    .Q(r_OBUF_10)
  );
  LUT6 #(
    .INIT ( 64'h8040201008040201 ))
  _n0037_inv11 (
    .I0(P_3_IBUF_3),
    .I1(P_1_IBUF_1),
    .I2(P_2_IBUF_2),
    .I3(comp[2]),
    .I4(comp[0]),
    .I5(comp[1]),
    .O(_n0037_inv1)
  );
  IBUF   P_3_IBUF (
    .I(P[3]),
    .O(P_3_IBUF_3)
  );
  IBUF   P_2_IBUF (
    .I(P[2]),
    .O(P_2_IBUF_2)
  );
  IBUF   P_1_IBUF (
    .I(P[1]),
    .O(P_1_IBUF_1)
  );
  IBUF   P_0_IBUF (
    .I(P[0]),
    .O(P_0_IBUF_0)
  );
  IBUF   Data_IBUF (
    .I(Data),
    .O(Data_IBUF_5)
  );
  IBUF   rst_IBUF (
    .I(rst),
    .O(rst_IBUF_6)
  );
  OBUF   counter_OBUF (
    .I(counter_OBUF_11),
    .O(counter)
  );
  OBUF   r_OBUF (
    .I(r_OBUF_10),
    .O(r)
  );
  FDR   counter_14 (
    .C(clk_BUFGP_4),
    .D(counter_rstpot_23),
    .R(rst_IBUF_6),
    .Q(counter_OBUF_11)
  );
  LUT4 #(
    .INIT ( 16'h69AA ))
  counter_rstpot (
    .I0(counter_OBUF_11),
    .I1(Data_IBUF_5),
    .I2(P_0_IBUF_0),
    .I3(_n0037_inv1),
    .O(counter_rstpot_23)
  );
  LUT3 #(
    .INIT ( 8'hF6 ))
  \P[0]_Data_equal_3_o_inv11  (
    .I0(P_0_IBUF_0),
    .I1(Data_IBUF_5),
    .I2(rst_IBUF_6),
    .O(\P[0]_Data_equal_3_o_inv_0 )
  );
  BUFGP   clk_BUFGP (
    .I(clk),
    .O(clk_BUFGP_4)
  );
endmodule


`ifndef GLBL
`define GLBL

`timescale  1 ps / 1 ps

module glbl ();

    parameter ROC_WIDTH = 100000;
    parameter TOC_WIDTH = 0;

//--------   STARTUP Globals --------------
    wire GSR;
    wire GTS;
    wire GWE;
    wire PRLD;
    tri1 p_up_tmp;
    tri (weak1, strong0) PLL_LOCKG = p_up_tmp;

    wire PROGB_GLBL;
    wire CCLKO_GLBL;

    reg GSR_int;
    reg GTS_int;
    reg PRLD_int;

//--------   JTAG Globals --------------
    wire JTAG_TDO_GLBL;
    wire JTAG_TCK_GLBL;
    wire JTAG_TDI_GLBL;
    wire JTAG_TMS_GLBL;
    wire JTAG_TRST_GLBL;

    reg JTAG_CAPTURE_GLBL;
    reg JTAG_RESET_GLBL;
    reg JTAG_SHIFT_GLBL;
    reg JTAG_UPDATE_GLBL;
    reg JTAG_RUNTEST_GLBL;

    reg JTAG_SEL1_GLBL = 0;
    reg JTAG_SEL2_GLBL = 0 ;
    reg JTAG_SEL3_GLBL = 0;
    reg JTAG_SEL4_GLBL = 0;

    reg JTAG_USER_TDO1_GLBL = 1'bz;
    reg JTAG_USER_TDO2_GLBL = 1'bz;
    reg JTAG_USER_TDO3_GLBL = 1'bz;
    reg JTAG_USER_TDO4_GLBL = 1'bz;

    assign (weak1, weak0) GSR = GSR_int;
    assign (weak1, weak0) GTS = GTS_int;
    assign (weak1, weak0) PRLD = PRLD_int;

    initial begin
	GSR_int = 1'b1;
	PRLD_int = 1'b1;
	#(ROC_WIDTH)
	GSR_int = 1'b0;
	PRLD_int = 1'b0;
    end

    initial begin
	GTS_int = 1'b1;
	#(TOC_WIDTH)
	GTS_int = 1'b0;
    end

endmodule

`endif

