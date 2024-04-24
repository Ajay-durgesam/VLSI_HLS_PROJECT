// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module k2c_matmul_2 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        C_address0,
        C_ce0,
        C_we0,
        C_d0,
        C_q0,
        B_address0,
        B_ce0,
        B_q0,
        B_address1,
        B_ce1,
        B_q1,
        B_offset,
        outrows,
        outcols,
        innerdim
);

parameter    ap_ST_fsm_state1 = 13'd1;
parameter    ap_ST_fsm_state2 = 13'd2;
parameter    ap_ST_fsm_state3 = 13'd4;
parameter    ap_ST_fsm_state4 = 13'd8;
parameter    ap_ST_fsm_state5 = 13'd16;
parameter    ap_ST_fsm_state6 = 13'd32;
parameter    ap_ST_fsm_pp0_stage0 = 13'd64;
parameter    ap_ST_fsm_pp0_stage1 = 13'd128;
parameter    ap_ST_fsm_pp0_stage2 = 13'd256;
parameter    ap_ST_fsm_pp0_stage3 = 13'd512;
parameter    ap_ST_fsm_pp0_stage4 = 13'd1024;
parameter    ap_ST_fsm_pp0_stage5 = 13'd2048;
parameter    ap_ST_fsm_state19 = 13'd4096;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [14:0] C_address0;
output   C_ce0;
output   C_we0;
output  [31:0] C_d0;
input  [31:0] C_q0;
output  [6:0] B_address0;
output   B_ce0;
input  [31:0] B_q0;
output  [6:0] B_address1;
output   B_ce1;
input  [31:0] B_q1;
input  [63:0] B_offset;
input  [63:0] outrows;
input  [63:0] outcols;
input  [63:0] innerdim;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[14:0] C_address0;
reg C_ce0;
reg C_we0;
reg[31:0] C_d0;
reg B_ce0;
reg B_ce1;

(* fsm_encoding = "none" *) reg   [12:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [191:0] indvar_flatten1_reg_131;
reg   [63:0] k_reg_143;
reg   [127:0] indvar_flatten_reg_154;
reg   [63:0] i_reg_165;
reg   [63:0] j_reg_176;
wire    ap_CS_fsm_state2;
wire   [63:0] grp_fu_197_p2;
reg   [63:0] tmp_reg_492;
wire   [14:0] a10_fu_213_p2;
wire    ap_CS_fsm_state3;
wire   [8:0] tmp_9_fu_219_p1;
reg   [8:0] tmp_9_reg_505;
wire   [0:0] exitcond3_fu_208_p2;
wire   [127:0] grp_fu_228_p2;
reg   [127:0] bound_reg_520;
wire    ap_CS_fsm_state4;
wire  signed [8:0] tmp_8_fu_234_p1;
reg  signed [8:0] tmp_8_reg_526;
wire    ap_CS_fsm_state5;
wire  signed [8:0] tmp_6_fu_249_p1;
reg  signed [8:0] tmp_6_reg_542;
wire    ap_CS_fsm_state6;
wire  signed [15:0] tmp_7_fu_252_p1;
reg  signed [15:0] tmp_7_reg_547;
wire   [191:0] grp_fu_243_p2;
reg   [191:0] bound5_reg_553;
wire   [0:0] exitcond_mid_fu_255_p2;
reg   [0:0] exitcond_mid_reg_558;
wire  signed [15:0] tmp_12_fu_268_p1;
reg  signed [15:0] tmp_12_reg_563;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state7_pp0_stage0_iter0;
wire    ap_block_state13_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
wire  signed [8:0] grp_fu_438_p3;
reg  signed [8:0] sum_reg_568;
reg    ap_enable_reg_pp0_iter0;
wire   [0:0] exitcond_flatten1_fu_272_p2;
reg   [0:0] exitcond_flatten1_reg_573;
reg   [0:0] exitcond_flatten1_reg_573_pp0_iter1_reg;
wire   [0:0] exitcond_flatten_fu_277_p2;
reg   [0:0] exitcond_flatten_reg_577;
wire   [63:0] i_mid_fu_282_p3;
reg   [63:0] i_mid_reg_584;
wire   [8:0] tmp_13_fu_296_p1;
reg   [8:0] tmp_13_reg_590;
wire  signed [8:0] k_cast_mid2_fu_300_p3;
reg  signed [8:0] k_cast_mid2_reg_595;
wire   [0:0] exitcond_mid1_fu_313_p3;
reg   [0:0] exitcond_mid1_reg_601;
wire   [63:0] k_mid2_fu_320_p3;
reg   [63:0] k_mid2_reg_608;
wire   [63:0] j_mid2_fu_334_p3;
reg   [63:0] j_mid2_reg_613;
wire   [8:0] tmp_17_fu_342_p1;
reg   [8:0] tmp_17_reg_619;
wire   [127:0] indvar_flatten_op_fu_346_p2;
reg   [127:0] indvar_flatten_op_reg_624;
wire  signed [8:0] tmp_14_fu_357_p1;
reg  signed [8:0] tmp_14_reg_629;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state8_pp0_stage1_iter0;
wire    ap_block_state14_pp0_stage1_iter1;
wire    ap_block_pp0_stage1_11001;
wire  signed [15:0] tmp_15_fu_361_p1;
reg  signed [15:0] tmp_15_reg_634;
wire   [63:0] i_mid2_fu_365_p3;
reg   [63:0] i_mid2_reg_639;
(* use_dsp48 = "no" *) wire   [8:0] sum3_fu_371_p2;
reg   [8:0] sum3_reg_644;
wire    ap_CS_fsm_pp0_stage2;
wire    ap_block_state9_pp0_stage2_iter0;
wire    ap_block_state15_pp0_stage2_iter1;
wire    ap_block_pp0_stage2_11001;
wire  signed [15:0] outrowidx_fu_457_p2;
reg  signed [15:0] outrowidx_reg_659;
wire    ap_CS_fsm_pp0_stage3;
wire    ap_block_state10_pp0_stage3_iter0;
wire    ap_block_state16_pp0_stage3_iter1;
wire    ap_block_pp0_stage3_11001;
wire   [191:0] indvar_flatten_next1_fu_395_p2;
reg   [191:0] indvar_flatten_next1_reg_664;
reg   [31:0] B_load_1_reg_669;
reg   [31:0] B_load_reg_674;
wire  signed [15:0] outrowidx_mid1_fu_461_p2;
reg  signed [15:0] outrowidx_mid1_reg_679;
wire    ap_CS_fsm_pp0_stage4;
wire    ap_block_state11_pp0_stage4_iter0;
wire    ap_block_state17_pp0_stage4_iter1;
wire    ap_block_pp0_stage4_11001;
reg   [14:0] C_addr_1_reg_684;
wire    ap_CS_fsm_pp0_stage5;
wire    ap_block_state12_pp0_stage5_iter0;
wire    ap_block_state18_pp0_stage5_iter1;
wire    ap_block_pp0_stage5_11001;
wire   [63:0] j_1_fu_427_p2;
reg   [63:0] j_1_reg_689;
wire   [127:0] indvar_flatten_next_fu_432_p3;
reg   [127:0] indvar_flatten_next_reg_694;
wire   [31:0] grp_fu_193_p2;
reg   [31:0] tmp_3_reg_699;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage3_subdone;
reg    ap_condition_pp0_exit_iter0_state10;
wire    ap_block_pp0_stage5_subdone;
reg   [14:0] a_reg_120;
reg   [191:0] ap_phi_mux_indvar_flatten1_phi_fu_135_p4;
wire    ap_block_pp0_stage0;
reg   [63:0] ap_phi_mux_k_phi_fu_147_p4;
reg   [127:0] ap_phi_mux_indvar_flatten_phi_fu_158_p4;
reg   [63:0] ap_phi_mux_i_phi_fu_169_p4;
reg   [63:0] ap_phi_mux_j_phi_fu_180_p4;
wire   [63:0] a_cast_fu_203_p1;
wire   [63:0] sum_cast_mid2_fu_386_p1;
wire    ap_block_pp0_stage2;
wire   [63:0] sum3_cast_fu_391_p1;
wire   [63:0] sum2_cast_fu_422_p1;
wire    ap_block_pp0_stage5;
wire   [31:0] grp_fu_187_p2;
wire    ap_block_pp0_stage1;
wire    ap_block_pp0_stage4;
wire  signed [63:0] cast_fu_222_p0;
wire  signed [63:0] cast2_fu_225_p0;
wire   [63:0] grp_fu_228_p0;
wire   [63:0] grp_fu_228_p1;
wire   [127:0] grp_fu_243_p0;
wire   [63:0] grp_fu_243_p1;
wire  signed [63:0] tmp_6_fu_249_p0;
wire  signed [63:0] tmp_7_fu_252_p0;
wire  signed [63:0] exitcond_mid_fu_255_p0;
wire   [63:0] k_s_fu_290_p2;
wire   [8:0] tmp_10_fu_260_p1;
wire  signed [63:0] exitcond_fu_308_p1;
wire   [0:0] exitcond_fu_308_p2;
wire   [0:0] tmp_2_fu_328_p2;
wire   [63:0] i_3_fu_352_p2;
wire  signed [8:0] grp_fu_445_p3;
wire  signed [8:0] grp_fu_451_p3;
wire   [8:0] sum_cast_mid221_v_fu_375_p3;
wire   [8:0] sum_cast_mid2_v_fu_380_p3;
wire    ap_block_pp0_stage3;
wire   [15:0] outrowidx_mid_fu_401_p3;
wire   [15:0] tmp_16_fu_413_p1;
wire   [15:0] outrowidx_mid2_fu_407_p3;
wire   [15:0] sum2_fu_416_p2;
wire  signed [8:0] grp_fu_438_p0;
wire    ap_CS_fsm_state19;
reg   [12:0] ap_NS_fsm;
wire    ap_block_pp0_stage0_subdone;
wire    ap_block_pp0_stage1_subdone;
wire    ap_block_pp0_stage2_subdone;
wire    ap_block_pp0_stage4_subdone;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [127:0] grp_fu_228_p00;
wire   [127:0] grp_fu_228_p10;
wire   [191:0] grp_fu_243_p00;
wire   [191:0] grp_fu_243_p10;

// power-on initialization
initial begin
#0 ap_CS_fsm = 13'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
end

WebModel_fadd_32ncud #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
WebModel_fadd_32ncud_U126(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(C_q0),
    .din1(tmp_3_reg_699),
    .ce(1'b1),
    .dout(grp_fu_187_p2)
);

WebModel_fmul_32ndEe #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
WebModel_fmul_32ndEe_U127(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(B_load_1_reg_669),
    .din1(B_load_reg_674),
    .ce(1'b1),
    .dout(grp_fu_193_p2)
);

WebModel_mul_64s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
WebModel_mul_64s_bkb_U128(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(outcols),
    .din1(outrows),
    .ce(1'b1),
    .dout(grp_fu_197_p2)
);

WebModel_mul_64nseOg #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 128 ))
WebModel_mul_64nseOg_U129(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_228_p0),
    .din1(grp_fu_228_p1),
    .ce(1'b1),
    .dout(grp_fu_228_p2)
);

WebModel_mul_128nfYi #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 128 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 192 ))
WebModel_mul_128nfYi_U130(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_243_p0),
    .din1(grp_fu_243_p1),
    .ce(1'b1),
    .dout(grp_fu_243_p2)
);

WebModel_mac_mularcU #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 9 ),
    .din1_WIDTH( 9 ),
    .din2_WIDTH( 9 ),
    .dout_WIDTH( 9 ))
WebModel_mac_mularcU_U131(
    .din0(grp_fu_438_p0),
    .din1(tmp_8_reg_526),
    .din2(tmp_10_fu_260_p1),
    .dout(grp_fu_438_p3)
);

WebModel_mac_mularcU #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 9 ),
    .din1_WIDTH( 9 ),
    .din2_WIDTH( 9 ),
    .dout_WIDTH( 9 ))
WebModel_mac_mularcU_U132(
    .din0(k_cast_mid2_reg_595),
    .din1(tmp_6_reg_542),
    .din2(tmp_9_reg_505),
    .dout(grp_fu_445_p3)
);

WebModel_mac_mulasc4 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 9 ),
    .din1_WIDTH( 9 ),
    .din2_WIDTH( 9 ),
    .dout_WIDTH( 9 ))
WebModel_mac_mulasc4_U133(
    .din0(tmp_14_reg_629),
    .din1(tmp_8_reg_526),
    .din2(k_cast_mid2_reg_595),
    .dout(grp_fu_451_p3)
);

WebModel_mul_mul_ibs #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
WebModel_mul_mul_ibs_U134(
    .din0(tmp_12_reg_563),
    .din1(tmp_7_reg_547),
    .dout(outrowidx_fu_457_p2)
);

WebModel_mul_mul_ibs #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
WebModel_mul_mul_ibs_U135(
    .din0(tmp_15_reg_634),
    .din1(tmp_7_reg_547),
    .dout(outrowidx_mid1_fu_461_p2)
);

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_CS_fsm <= ap_ST_fsm_state1;
    end else begin
        ap_CS_fsm <= ap_NS_fsm;
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter0 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage3_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state10) & (1'b1 == ap_CS_fsm_pp0_stage3))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if ((1'b1 == ap_CS_fsm_state6)) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if (((1'b0 == ap_block_pp0_stage5_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state10) & (1'b1 == ap_CS_fsm_pp0_stage5))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state10);
        end else if (((1'b0 == ap_block_pp0_stage5_subdone) & (1'b1 == ap_CS_fsm_pp0_stage5))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if ((1'b1 == ap_CS_fsm_state6)) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_208_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        a_reg_120 <= a10_fu_213_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        a_reg_120 <= 15'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_reg_573 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_reg_165 <= i_mid2_reg_639;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        i_reg_165 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_reg_573 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        indvar_flatten1_reg_131 <= indvar_flatten_next1_reg_664;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        indvar_flatten1_reg_131 <= 192'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_reg_573 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        indvar_flatten_reg_154 <= indvar_flatten_next_reg_694;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        indvar_flatten_reg_154 <= 128'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_reg_573 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        j_reg_176 <= j_1_reg_689;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        j_reg_176 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_reg_573 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        k_reg_143 <= k_mid2_reg_608;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        k_reg_143 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter0 == 1'b1) & (exitcond_flatten1_reg_573 == 1'd0))) begin
        B_load_1_reg_669 <= B_q0;
        B_load_reg_674 <= B_q1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage5_11001) & (1'b1 == ap_CS_fsm_pp0_stage5) & (exitcond_flatten1_reg_573 == 1'd0))) begin
        C_addr_1_reg_684 <= sum2_cast_fu_422_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        bound5_reg_553 <= grp_fu_243_p2;
        exitcond_mid_reg_558 <= exitcond_mid_fu_255_p2;
        tmp_6_reg_542 <= tmp_6_fu_249_p1;
        tmp_7_reg_547 <= tmp_7_fu_252_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        bound_reg_520 <= grp_fu_228_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exitcond_flatten1_reg_573 <= exitcond_flatten1_fu_272_p2;
        exitcond_flatten1_reg_573_pp0_iter1_reg <= exitcond_flatten1_reg_573;
        tmp_12_reg_563 <= tmp_12_fu_268_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_fu_272_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exitcond_flatten_reg_577 <= exitcond_flatten_fu_277_p2;
        exitcond_mid1_reg_601 <= exitcond_mid1_fu_313_p3;
        i_mid_reg_584 <= i_mid_fu_282_p3;
        indvar_flatten_op_reg_624 <= indvar_flatten_op_fu_346_p2;
        j_mid2_reg_613 <= j_mid2_fu_334_p3;
        k_cast_mid2_reg_595 <= k_cast_mid2_fu_300_p3;
        tmp_13_reg_590 <= tmp_13_fu_296_p1;
        tmp_17_reg_619 <= tmp_17_fu_342_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b0 == ap_block_pp0_stage1_11001) & (exitcond_flatten1_reg_573 == 1'd0))) begin
        i_mid2_reg_639 <= i_mid2_fu_365_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        indvar_flatten_next1_reg_664 <= indvar_flatten_next1_fu_395_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage5_11001) & (1'b1 == ap_CS_fsm_pp0_stage5) & (ap_enable_reg_pp0_iter0 == 1'b1) & (exitcond_flatten1_reg_573 == 1'd0))) begin
        indvar_flatten_next_reg_694 <= indvar_flatten_next_fu_432_p3;
        j_1_reg_689 <= j_1_fu_427_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_fu_272_p2 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        k_mid2_reg_608 <= k_mid2_fu_320_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_mid1_reg_601 == 1'd1) & (1'b0 == ap_block_pp0_stage4_11001) & (1'b1 == ap_CS_fsm_pp0_stage4) & (exitcond_flatten1_reg_573 == 1'd0))) begin
        outrowidx_mid1_reg_679 <= outrowidx_mid1_fu_461_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (exitcond_mid1_reg_601 == 1'd0) & (exitcond_flatten_reg_577 == 1'd0))) begin
        outrowidx_reg_659 <= outrowidx_fu_457_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001) & (exitcond_flatten1_reg_573 == 1'd0))) begin
        sum3_reg_644 <= sum3_fu_371_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        sum_reg_568 <= grp_fu_438_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_mid1_reg_601 == 1'd1) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001) & (exitcond_flatten1_reg_573 == 1'd0))) begin
        tmp_14_reg_629 <= tmp_14_fu_357_p1;
        tmp_15_reg_634 <= tmp_15_fu_361_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_reg_573 == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_3_reg_699 <= grp_fu_193_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        tmp_8_reg_526 <= tmp_8_fu_234_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_208_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state3))) begin
        tmp_9_reg_505 <= tmp_9_fu_219_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        tmp_reg_492 <= grp_fu_197_p2;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage2_11001) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        B_ce0 = 1'b1;
    end else begin
        B_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage2_11001) & (1'b1 == ap_CS_fsm_pp0_stage2) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
        B_ce1 = 1'b1;
    end else begin
        B_ce1 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_pp0_stage5) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage5)) | ((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0)))) begin
        C_address0 = C_addr_1_reg_684;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        C_address0 = a_cast_fu_203_p1;
    end else begin
        C_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state3) | ((1'b0 == ap_block_pp0_stage5_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage5)) | ((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001)))) begin
        C_ce0 = 1'b1;
    end else begin
        C_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage5) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage5))) begin
        C_d0 = grp_fu_187_p2;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        C_d0 = 32'd0;
    end else begin
        C_d0 = 'bx;
    end
end

always @ (*) begin
    if ((((exitcond3_fu_208_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)) | ((1'b0 == ap_block_pp0_stage5_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage5) & (exitcond_flatten1_reg_573_pp0_iter1_reg == 1'd0)))) begin
        C_we0 = 1'b1;
    end else begin
        C_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((exitcond_flatten1_reg_573 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state10 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state10 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state19) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
        ap_done = 1'b1;
    end else begin
        ap_done = 1'b0;
    end
end

always @ (*) begin
    if (((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1))) begin
        ap_idle = 1'b1;
    end else begin
        ap_idle = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_reg_573 == 1'd0))) begin
        ap_phi_mux_i_phi_fu_169_p4 = i_mid2_reg_639;
    end else begin
        ap_phi_mux_i_phi_fu_169_p4 = i_reg_165;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_reg_573 == 1'd0))) begin
        ap_phi_mux_indvar_flatten1_phi_fu_135_p4 = indvar_flatten_next1_reg_664;
    end else begin
        ap_phi_mux_indvar_flatten1_phi_fu_135_p4 = indvar_flatten1_reg_131;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_reg_573 == 1'd0))) begin
        ap_phi_mux_indvar_flatten_phi_fu_158_p4 = indvar_flatten_next_reg_694;
    end else begin
        ap_phi_mux_indvar_flatten_phi_fu_158_p4 = indvar_flatten_reg_154;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_reg_573 == 1'd0))) begin
        ap_phi_mux_j_phi_fu_180_p4 = j_1_reg_689;
    end else begin
        ap_phi_mux_j_phi_fu_180_p4 = j_reg_176;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_flatten1_reg_573 == 1'd0))) begin
        ap_phi_mux_k_phi_fu_147_p4 = k_mid2_reg_608;
    end else begin
        ap_phi_mux_k_phi_fu_147_p4 = k_reg_143;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            if (((exitcond3_fu_208_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            ap_NS_fsm = ap_ST_fsm_state6;
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_pp0_stage1 : begin
            if ((1'b0 == ap_block_pp0_stage1_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end
        end
        ap_ST_fsm_pp0_stage2 : begin
            if ((1'b0 == ap_block_pp0_stage2_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage2;
            end
        end
        ap_ST_fsm_pp0_stage3 : begin
            if ((~((exitcond_flatten1_reg_573 == 1'd1) & (1'b0 == ap_block_pp0_stage3_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1)) & (1'b0 == ap_block_pp0_stage3_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            end else if (((exitcond_flatten1_reg_573 == 1'd1) & (1'b0 == ap_block_pp0_stage3_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end
        end
        ap_ST_fsm_pp0_stage4 : begin
            if ((1'b0 == ap_block_pp0_stage4_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            end
        end
        ap_ST_fsm_pp0_stage5 : begin
            if ((~((1'b0 == ap_block_pp0_stage5_subdone) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage5) & (ap_enable_reg_pp0_iter0 == 1'b0)) & (1'b0 == ap_block_pp0_stage5_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((1'b0 == ap_block_pp0_stage5_subdone) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage5) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_state19;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            end
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state1;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign B_address0 = sum_cast_mid2_fu_386_p1;

assign B_address1 = sum3_cast_fu_391_p1;

assign a10_fu_213_p2 = (a_reg_120 + 15'd1);

assign a_cast_fu_203_p1 = a_reg_120;

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_pp0_stage2 = ap_CS_fsm[32'd8];

assign ap_CS_fsm_pp0_stage3 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_pp0_stage4 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_pp0_stage5 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage4 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage4_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage4_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage5 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage5_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage5_subdone = ~(1'b1 == 1'b1);

assign ap_block_state10_pp0_stage3_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp0_stage4_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp0_stage5_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state13_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state14_pp0_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state15_pp0_stage2_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state16_pp0_stage3_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state17_pp0_stage4_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state18_pp0_stage5_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage2_iter0 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign cast2_fu_225_p0 = outcols;

assign cast_fu_222_p0 = outrows;

assign exitcond3_fu_208_p2 = ((a_cast_fu_203_p1 == tmp_reg_492) ? 1'b1 : 1'b0);

assign exitcond_flatten1_fu_272_p2 = ((ap_phi_mux_indvar_flatten1_phi_fu_135_p4 == bound5_reg_553) ? 1'b1 : 1'b0);

assign exitcond_flatten_fu_277_p2 = ((ap_phi_mux_indvar_flatten_phi_fu_158_p4 == bound_reg_520) ? 1'b1 : 1'b0);

assign exitcond_fu_308_p1 = outcols;

assign exitcond_fu_308_p2 = ((ap_phi_mux_j_phi_fu_180_p4 == exitcond_fu_308_p1) ? 1'b1 : 1'b0);

assign exitcond_mid1_fu_313_p3 = ((exitcond_flatten_fu_277_p2[0:0] === 1'b1) ? exitcond_mid_reg_558 : exitcond_fu_308_p2);

assign exitcond_mid_fu_255_p0 = outcols;

assign exitcond_mid_fu_255_p2 = ((exitcond_mid_fu_255_p0 == 64'd0) ? 1'b1 : 1'b0);

assign grp_fu_228_p0 = grp_fu_228_p00;

assign grp_fu_228_p00 = $unsigned(cast2_fu_225_p0);

assign grp_fu_228_p1 = grp_fu_228_p10;

assign grp_fu_228_p10 = $unsigned(cast_fu_222_p0);

assign grp_fu_243_p0 = grp_fu_243_p00;

assign grp_fu_243_p00 = bound_reg_520;

assign grp_fu_243_p1 = grp_fu_243_p10;

assign grp_fu_243_p10 = innerdim;

assign grp_fu_438_p0 = ap_phi_mux_i_phi_fu_169_p4[8:0];

assign i_3_fu_352_p2 = (64'd1 + i_mid_reg_584);

assign i_mid2_fu_365_p3 = ((exitcond_mid1_reg_601[0:0] === 1'b1) ? i_3_fu_352_p2 : i_mid_reg_584);

assign i_mid_fu_282_p3 = ((exitcond_flatten_fu_277_p2[0:0] === 1'b1) ? 64'd0 : ap_phi_mux_i_phi_fu_169_p4);

assign indvar_flatten_next1_fu_395_p2 = (192'd1 + indvar_flatten1_reg_131);

assign indvar_flatten_next_fu_432_p3 = ((exitcond_flatten_reg_577[0:0] === 1'b1) ? 128'd1 : indvar_flatten_op_reg_624);

assign indvar_flatten_op_fu_346_p2 = (128'd1 + ap_phi_mux_indvar_flatten_phi_fu_158_p4);

assign j_1_fu_427_p2 = (64'd1 + j_mid2_reg_613);

assign j_mid2_fu_334_p3 = ((tmp_2_fu_328_p2[0:0] === 1'b1) ? 64'd0 : ap_phi_mux_j_phi_fu_180_p4);

assign k_cast_mid2_fu_300_p3 = ((exitcond_flatten_fu_277_p2[0:0] === 1'b1) ? tmp_13_fu_296_p1 : tmp_10_fu_260_p1);

assign k_mid2_fu_320_p3 = ((exitcond_flatten_fu_277_p2[0:0] === 1'b1) ? k_s_fu_290_p2 : ap_phi_mux_k_phi_fu_147_p4);

assign k_s_fu_290_p2 = (64'd1 + ap_phi_mux_k_phi_fu_147_p4);

assign outrowidx_mid2_fu_407_p3 = ((exitcond_mid1_reg_601[0:0] === 1'b1) ? outrowidx_mid1_reg_679 : outrowidx_mid_fu_401_p3);

assign outrowidx_mid_fu_401_p3 = ((exitcond_flatten_reg_577[0:0] === 1'b1) ? 16'd0 : outrowidx_reg_659);

assign sum2_cast_fu_422_p1 = sum2_fu_416_p2;

assign sum2_fu_416_p2 = (tmp_16_fu_413_p1 + outrowidx_mid2_fu_407_p3);

assign sum3_cast_fu_391_p1 = sum3_reg_644;

assign sum3_fu_371_p2 = ($signed(grp_fu_445_p3) + $signed(tmp_17_reg_619));

assign sum_cast_mid221_v_fu_375_p3 = ((exitcond_flatten_reg_577[0:0] === 1'b1) ? tmp_13_reg_590 : sum_reg_568);

assign sum_cast_mid2_fu_386_p1 = sum_cast_mid2_v_fu_380_p3;

assign sum_cast_mid2_v_fu_380_p3 = ((exitcond_mid1_reg_601[0:0] === 1'b1) ? grp_fu_451_p3 : sum_cast_mid221_v_fu_375_p3);

assign tmp_10_fu_260_p1 = ap_phi_mux_k_phi_fu_147_p4[8:0];

assign tmp_12_fu_268_p1 = ap_phi_mux_i_phi_fu_169_p4[15:0];

assign tmp_13_fu_296_p1 = k_s_fu_290_p2[8:0];

assign tmp_14_fu_357_p1 = i_3_fu_352_p2[8:0];

assign tmp_15_fu_361_p1 = i_3_fu_352_p2[15:0];

assign tmp_16_fu_413_p1 = j_mid2_reg_613[15:0];

assign tmp_17_fu_342_p1 = j_mid2_fu_334_p3[8:0];

assign tmp_2_fu_328_p2 = (exitcond_mid1_fu_313_p3 | exitcond_flatten_fu_277_p2);

assign tmp_6_fu_249_p0 = outcols;

assign tmp_6_fu_249_p1 = tmp_6_fu_249_p0[8:0];

assign tmp_7_fu_252_p0 = outcols;

assign tmp_7_fu_252_p1 = tmp_7_fu_252_p0[15:0];

assign tmp_8_fu_234_p1 = innerdim[8:0];

assign tmp_9_fu_219_p1 = B_offset[8:0];

endmodule //k2c_matmul_2