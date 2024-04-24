// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module k2c_affine_matmul_1 (
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
        A_address0,
        A_ce0,
        A_q0,
        B_0_address0,
        B_0_ce0,
        B_0_q0,
        B_1_address0,
        B_1_ce0,
        B_1_q0,
        B_2_address0,
        B_2_ce0,
        B_2_q0,
        B_3_address0,
        B_3_ce0,
        B_3_q0,
        d_address0,
        d_ce0,
        d_q0,
        outrows,
        outcols,
        innerdim
);

parameter    ap_ST_fsm_state1 = 12'd1;
parameter    ap_ST_fsm_state2 = 12'd2;
parameter    ap_ST_fsm_state3 = 12'd4;
parameter    ap_ST_fsm_state4 = 12'd8;
parameter    ap_ST_fsm_state5 = 12'd16;
parameter    ap_ST_fsm_state6 = 12'd32;
parameter    ap_ST_fsm_pp0_stage0 = 12'd64;
parameter    ap_ST_fsm_pp0_stage1 = 12'd128;
parameter    ap_ST_fsm_pp0_stage2 = 12'd256;
parameter    ap_ST_fsm_pp0_stage3 = 12'd512;
parameter    ap_ST_fsm_pp0_stage4 = 12'd1024;
parameter    ap_ST_fsm_state17 = 12'd2048;

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
output  [14:0] A_address0;
output   A_ce0;
input  [31:0] A_q0;
output  [12:0] B_0_address0;
output   B_0_ce0;
input  [31:0] B_0_q0;
output  [12:0] B_1_address0;
output   B_1_ce0;
input  [31:0] B_1_q0;
output  [12:0] B_2_address0;
output   B_2_ce0;
input  [31:0] B_2_q0;
output  [12:0] B_3_address0;
output   B_3_ce0;
input  [31:0] B_3_q0;
output  [14:0] d_address0;
output   d_ce0;
input  [31:0] d_q0;
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
reg A_ce0;
reg B_0_ce0;
reg B_1_ce0;
reg B_2_ce0;
reg B_3_ce0;
reg d_ce0;

(* fsm_encoding = "none" *) reg   [11:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [31:0] sum1_reg_223;
reg   [63:0] k_reg_234;
reg   [63:0] phi_mul_reg_245;
wire    ap_CS_fsm_state2;
wire   [63:0] grp_fu_265_p2;
reg   [63:0] tmp_reg_470;
wire   [14:0] p_1_fu_281_p2;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond3_fu_276_p2;
wire  signed [15:0] tmp_69_fu_299_p1;
reg  signed [15:0] tmp_69_reg_493;
wire    ap_CS_fsm_state4;
wire  signed [15:0] tmp_70_fu_302_p1;
reg  signed [15:0] tmp_70_reg_498;
wire   [127:0] grp_fu_293_p2;
reg   [127:0] bound_reg_503;
wire   [127:0] indvar_flatten_next_fu_310_p2;
reg   [127:0] indvar_flatten_next_reg_511;
wire    ap_CS_fsm_state5;
wire   [0:0] exitcond1_fu_316_p2;
reg   [0:0] exitcond1_reg_516;
wire   [0:0] exitcond_flatten_fu_305_p2;
wire   [63:0] j_cast_mid2_v_fu_327_p3;
reg   [63:0] j_cast_mid2_v_reg_521;
wire   [15:0] tmp_71_fu_336_p1;
reg   [15:0] tmp_71_reg_527;
wire   [63:0] i_mid2_fu_340_p3;
reg   [63:0] i_mid2_reg_537;
wire    ap_CS_fsm_state6;
wire  signed [15:0] outrowidx_fu_439_p2;
reg  signed [15:0] outrowidx_reg_542;
wire  signed [15:0] inneridx_fu_444_p2;
reg  signed [15:0] inneridx_reg_547;
wire   [0:0] exitcond_fu_351_p2;
reg   [0:0] exitcond_reg_557;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state7_pp0_stage0_iter0;
wire    ap_block_state12_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] exitcond_reg_557_pp0_iter1_reg;
wire   [63:0] k_2_fu_356_p2;
reg   [63:0] k_2_reg_561;
reg    ap_enable_reg_pp0_iter0;
wire   [63:0] next_mul_fu_376_p2;
reg   [63:0] next_mul_reg_571;
wire   [1:0] tmp_74_fu_386_p1;
reg   [1:0] tmp_74_reg_576;
reg   [31:0] A_load_reg_601;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state8_pp0_stage1_iter0;
wire    ap_block_state13_pp0_stage1_iter1;
wire    ap_block_pp0_stage1_11001;
wire   [31:0] tmp_31_fu_411_p6;
reg   [31:0] tmp_31_reg_606;
wire   [31:0] grp_fu_261_p2;
reg   [31:0] tmp_11_reg_611;
wire    ap_CS_fsm_pp0_stage4;
wire    ap_block_state11_pp0_stage4_iter0;
wire    ap_block_state16_pp0_stage4_iter1;
wire    ap_block_pp0_stage4_11001;
wire   [31:0] grp_fu_256_p2;
reg    ap_enable_reg_pp0_iter1;
wire   [63:0] i_53_fu_434_p2;
wire    ap_CS_fsm_state17;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state7;
wire    ap_block_pp0_stage4_subdone;
reg   [14:0] p_reg_178;
reg   [127:0] indvar_flatten_reg_189;
reg   [63:0] j_reg_200;
reg   [63:0] i_reg_211;
reg   [63:0] ap_phi_mux_k_phi_fu_238_p4;
wire    ap_block_pp0_stage0;
reg   [63:0] ap_phi_mux_phi_mul_phi_fu_249_p4;
wire   [63:0] p_cast_fu_271_p1;
wire   [63:0] sum7_cast_fu_371_p1;
wire   [63:0] newIndex_cast_fu_400_p1;
wire   [63:0] sum4_cast_fu_429_p1;
wire    ap_CS_fsm_pp0_stage2;
wire    ap_block_pp0_stage2;
wire  signed [63:0] cast_fu_287_p0;
wire  signed [63:0] cast2_fu_290_p0;
wire   [63:0] grp_fu_293_p0;
wire   [63:0] grp_fu_293_p1;
wire  signed [63:0] tmp_69_fu_299_p0;
wire  signed [63:0] exitcond1_fu_316_p1;
wire   [63:0] j_s_fu_321_p2;
wire   [15:0] tmp_73_fu_362_p1;
(* use_dsp48 = "no" *) wire   [15:0] sum7_fu_366_p2;
wire  signed [63:0] next_mul_fu_376_p0;
wire   [63:0] sum2_fu_381_p2;
wire   [13:0] newIndex_fu_390_p4;
wire    ap_block_pp0_stage1;
wire   [63:0] tmp_31_fu_411_p5;
(* use_dsp48 = "no" *) wire   [15:0] sum4_fu_425_p2;
wire  signed [15:0] tmp_72_fu_347_p1;
reg   [11:0] ap_NS_fsm;
wire    ap_block_pp0_stage1_subdone;
wire    ap_block_state9_pp0_stage2_iter0;
wire    ap_block_state14_pp0_stage2_iter1;
wire    ap_block_pp0_stage2_subdone;
wire    ap_block_state10_pp0_stage3_iter0;
wire    ap_block_state15_pp0_stage3_iter1;
wire    ap_block_pp0_stage3_subdone;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [127:0] grp_fu_293_p00;
wire   [127:0] grp_fu_293_p10;

// power-on initialization
initial begin
#0 ap_CS_fsm = 12'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
end

WebModel_fadd_32ncud #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
WebModel_fadd_32ncud_U50(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(sum1_reg_223),
    .din1(tmp_11_reg_611),
    .ce(1'b1),
    .dout(grp_fu_256_p2)
);

WebModel_fmul_32ndEe #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
WebModel_fmul_32ndEe_U51(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(A_load_reg_601),
    .din1(tmp_31_reg_606),
    .ce(1'b1),
    .dout(grp_fu_261_p2)
);

WebModel_mul_64s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
WebModel_mul_64s_bkb_U52(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(outcols),
    .din1(outrows),
    .ce(1'b1),
    .dout(grp_fu_265_p2)
);

WebModel_mul_64nseOg #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 128 ))
WebModel_mul_64nseOg_U53(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_293_p0),
    .din1(grp_fu_293_p1),
    .ce(1'b1),
    .dout(grp_fu_293_p2)
);

WebModel_mux_464_kbM #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .din2_WIDTH( 32 ),
    .din3_WIDTH( 32 ),
    .din4_WIDTH( 64 ),
    .dout_WIDTH( 32 ))
WebModel_mux_464_kbM_U54(
    .din0(B_0_q0),
    .din1(B_1_q0),
    .din2(B_2_q0),
    .din3(B_3_q0),
    .din4(tmp_31_fu_411_p5),
    .dout(tmp_31_fu_411_p6)
);

WebModel_mul_mul_mb6 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
WebModel_mul_mul_mb6_U55(
    .din0(tmp_72_fu_347_p1),
    .din1(tmp_69_reg_493),
    .dout(outrowidx_fu_439_p2)
);

WebModel_mul_mul_mb6 #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
WebModel_mul_mul_mb6_U56(
    .din0(tmp_72_fu_347_p1),
    .din1(tmp_70_reg_498),
    .dout(inneridx_fu_444_p2)
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
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state7) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
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
        if (((1'b0 == ap_block_pp0_stage4_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state7) & (1'b1 == ap_CS_fsm_pp0_stage4))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state7);
        end else if (((1'b0 == ap_block_pp0_stage4_subdone) & (1'b1 == ap_CS_fsm_pp0_stage4))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if ((1'b1 == ap_CS_fsm_state6)) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        i_reg_211 <= i_53_fu_434_p2;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        i_reg_211 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        indvar_flatten_reg_189 <= indvar_flatten_next_reg_511;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        indvar_flatten_reg_189 <= 128'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        j_reg_200 <= j_cast_mid2_v_reg_521;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        j_reg_200 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (exitcond_reg_557 == 1'd0))) begin
        k_reg_234 <= k_2_reg_561;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        k_reg_234 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state3) & (exitcond3_fu_276_p2 == 1'd0))) begin
        p_reg_178 <= p_1_fu_281_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        p_reg_178 <= 15'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (exitcond_reg_557 == 1'd0))) begin
        phi_mul_reg_245 <= next_mul_reg_571;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        phi_mul_reg_245 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage4_11001) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage4) & (exitcond_reg_557_pp0_iter1_reg == 1'd0))) begin
        sum1_reg_223 <= grp_fu_256_p2;
    end else if ((1'b1 == ap_CS_fsm_state6)) begin
        sum1_reg_223 <= d_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage1_11001) & (1'b1 == ap_CS_fsm_pp0_stage1) & (exitcond_reg_557 == 1'd0))) begin
        A_load_reg_601 <= A_q0;
        tmp_31_reg_606 <= tmp_31_fu_411_p6;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        bound_reg_503 <= grp_fu_293_p2;
        tmp_69_reg_493 <= tmp_69_fu_299_p1;
        tmp_70_reg_498 <= tmp_70_fu_302_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state5) & (exitcond_flatten_fu_305_p2 == 1'd0))) begin
        exitcond1_reg_516 <= exitcond1_fu_316_p2;
        j_cast_mid2_v_reg_521 <= j_cast_mid2_v_fu_327_p3;
        tmp_71_reg_527 <= tmp_71_fu_336_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exitcond_reg_557 <= exitcond_fu_351_p2;
        exitcond_reg_557_pp0_iter1_reg <= exitcond_reg_557;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        i_mid2_reg_537 <= i_mid2_fu_340_p3;
        inneridx_reg_547 <= inneridx_fu_444_p2;
        outrowidx_reg_542 <= outrowidx_fu_439_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        indvar_flatten_next_reg_511 <= indvar_flatten_next_fu_310_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        k_2_reg_561 <= k_2_fu_356_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (exitcond_fu_351_p2 == 1'd0))) begin
        next_mul_reg_571 <= next_mul_fu_376_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b0 == ap_block_pp0_stage4_11001) & (1'b1 == ap_CS_fsm_pp0_stage4) & (exitcond_reg_557 == 1'd0))) begin
        tmp_11_reg_611 <= grp_fu_261_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001) & (exitcond_fu_351_p2 == 1'd0))) begin
        tmp_74_reg_576 <= tmp_74_fu_386_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        tmp_reg_470 <= grp_fu_265_p2;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        A_ce0 = 1'b1;
    end else begin
        A_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        B_0_ce0 = 1'b1;
    end else begin
        B_0_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        B_1_ce0 = 1'b1;
    end else begin
        B_1_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        B_2_ce0 = 1'b1;
    end else begin
        B_2_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        B_3_ce0 = 1'b1;
    end else begin
        B_3_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        C_address0 = sum4_cast_fu_429_p1;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        C_address0 = p_cast_fu_271_p1;
    end else begin
        C_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state3))) begin
        C_ce0 = 1'b1;
    end else begin
        C_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        C_d0 = sum1_reg_223;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        C_d0 = 32'd0;
    end else begin
        C_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state17) | ((1'b1 == ap_CS_fsm_state3) & (exitcond3_fu_276_p2 == 1'd0)))) begin
        C_we0 = 1'b1;
    end else begin
        C_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((exitcond_fu_351_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state7 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state7 = 1'b0;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state5) & (exitcond_flatten_fu_305_p2 == 1'd1)))) begin
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
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_reg_557 == 1'd0))) begin
        ap_phi_mux_k_phi_fu_238_p4 = k_2_reg_561;
    end else begin
        ap_phi_mux_k_phi_fu_238_p4 = k_reg_234;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (exitcond_reg_557 == 1'd0))) begin
        ap_phi_mux_phi_mul_phi_fu_249_p4 = next_mul_reg_571;
    end else begin
        ap_phi_mux_phi_mul_phi_fu_249_p4 = phi_mul_reg_245;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) & (exitcond_flatten_fu_305_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        d_ce0 = 1'b1;
    end else begin
        d_ce0 = 1'b0;
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
            if (((1'b1 == ap_CS_fsm_state3) & (exitcond3_fu_276_p2 == 1'd0))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (exitcond_flatten_fu_305_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (exitcond_fu_351_p2 == 1'd1)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (exitcond_fu_351_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state17;
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
            if ((1'b0 == ap_block_pp0_stage3_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage3;
            end
        end
        ap_ST_fsm_pp0_stage4 : begin
            if ((~((1'b0 == ap_block_pp0_stage4_subdone) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage4) & (ap_enable_reg_pp0_iter0 == 1'b0)) & (1'b0 == ap_block_pp0_stage4_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if (((1'b0 == ap_block_pp0_stage4_subdone) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage4) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
                ap_NS_fsm = ap_ST_fsm_state17;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            end
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign A_address0 = sum7_cast_fu_371_p1;

assign B_0_address0 = newIndex_cast_fu_400_p1;

assign B_1_address0 = newIndex_cast_fu_400_p1;

assign B_2_address0 = newIndex_cast_fu_400_p1;

assign B_3_address0 = newIndex_cast_fu_400_p1;

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_pp0_stage2 = ap_CS_fsm[32'd8];

assign ap_CS_fsm_pp0_stage4 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd11];

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

assign ap_block_pp0_stage2_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage3_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage4_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage4_subdone = ~(1'b1 == 1'b1);

assign ap_block_state10_pp0_stage3_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state11_pp0_stage4_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state12_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state13_pp0_stage1_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state14_pp0_stage2_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state15_pp0_stage3_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state16_pp0_stage4_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage2_iter0 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign cast2_fu_290_p0 = outrows;

assign cast_fu_287_p0 = outcols;

assign d_address0 = j_cast_mid2_v_fu_327_p3;

assign exitcond1_fu_316_p1 = outrows;

assign exitcond1_fu_316_p2 = ((i_reg_211 == exitcond1_fu_316_p1) ? 1'b1 : 1'b0);

assign exitcond3_fu_276_p2 = ((p_cast_fu_271_p1 == tmp_reg_470) ? 1'b1 : 1'b0);

assign exitcond_flatten_fu_305_p2 = ((indvar_flatten_reg_189 == bound_reg_503) ? 1'b1 : 1'b0);

assign exitcond_fu_351_p2 = ((ap_phi_mux_k_phi_fu_238_p4 == innerdim) ? 1'b1 : 1'b0);

assign grp_fu_293_p0 = grp_fu_293_p00;

assign grp_fu_293_p00 = $unsigned(cast2_fu_290_p0);

assign grp_fu_293_p1 = grp_fu_293_p10;

assign grp_fu_293_p10 = $unsigned(cast_fu_287_p0);

assign i_53_fu_434_p2 = (i_mid2_reg_537 + 64'd1);

assign i_mid2_fu_340_p3 = ((exitcond1_reg_516[0:0] === 1'b1) ? 64'd0 : i_reg_211);

assign indvar_flatten_next_fu_310_p2 = (indvar_flatten_reg_189 + 128'd1);

assign j_cast_mid2_v_fu_327_p3 = ((exitcond1_fu_316_p2[0:0] === 1'b1) ? j_s_fu_321_p2 : j_reg_200);

assign j_s_fu_321_p2 = (64'd1 + j_reg_200);

assign k_2_fu_356_p2 = (ap_phi_mux_k_phi_fu_238_p4 + 64'd1);

assign newIndex_cast_fu_400_p1 = newIndex_fu_390_p4;

assign newIndex_fu_390_p4 = {{sum2_fu_381_p2[15:2]}};

assign next_mul_fu_376_p0 = outcols;

assign next_mul_fu_376_p2 = ($signed(next_mul_fu_376_p0) + $signed(ap_phi_mux_phi_mul_phi_fu_249_p4));

assign p_1_fu_281_p2 = (p_reg_178 + 15'd1);

assign p_cast_fu_271_p1 = p_reg_178;

assign sum2_fu_381_p2 = (j_cast_mid2_v_reg_521 + ap_phi_mux_phi_mul_phi_fu_249_p4);

assign sum4_cast_fu_429_p1 = sum4_fu_425_p2;

assign sum4_fu_425_p2 = ($signed(outrowidx_reg_542) + $signed(tmp_71_reg_527));

assign sum7_cast_fu_371_p1 = sum7_fu_366_p2;

assign sum7_fu_366_p2 = ($signed(inneridx_reg_547) + $signed(tmp_73_fu_362_p1));

assign tmp_31_fu_411_p5 = tmp_74_reg_576;

assign tmp_69_fu_299_p0 = outcols;

assign tmp_69_fu_299_p1 = tmp_69_fu_299_p0[15:0];

assign tmp_70_fu_302_p1 = innerdim[15:0];

assign tmp_71_fu_336_p1 = j_cast_mid2_v_fu_327_p3[15:0];

assign tmp_72_fu_347_p1 = i_mid2_fu_340_p3[15:0];

assign tmp_73_fu_362_p1 = ap_phi_mux_k_phi_fu_238_p4[15:0];

assign tmp_74_fu_386_p1 = sum2_fu_381_p2[1:0];

endmodule //k2c_affine_matmul_1