// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module k2c_affine_matmul (
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
        A_address0,
        A_ce0,
        A_q0,
        B_address0,
        B_ce0,
        B_q0,
        d_address0,
        d_ce0,
        d_q0,
        outrows,
        outcols,
        innerdim
);

parameter    ap_ST_fsm_state1 = 20'd1;
parameter    ap_ST_fsm_state2 = 20'd2;
parameter    ap_ST_fsm_state3 = 20'd4;
parameter    ap_ST_fsm_state4 = 20'd8;
parameter    ap_ST_fsm_state5 = 20'd16;
parameter    ap_ST_fsm_state6 = 20'd32;
parameter    ap_ST_fsm_pp0_stage0 = 20'd64;
parameter    ap_ST_fsm_pp0_stage1 = 20'd128;
parameter    ap_ST_fsm_pp0_stage2 = 20'd256;
parameter    ap_ST_fsm_pp0_stage3 = 20'd512;
parameter    ap_ST_fsm_pp0_stage4 = 20'd1024;
parameter    ap_ST_fsm_pp0_stage5 = 20'd2048;
parameter    ap_ST_fsm_state17 = 20'd4096;
parameter    ap_ST_fsm_state18 = 20'd8192;
parameter    ap_ST_fsm_state19 = 20'd16384;
parameter    ap_ST_fsm_state20 = 20'd32768;
parameter    ap_ST_fsm_state21 = 20'd65536;
parameter    ap_ST_fsm_state22 = 20'd131072;
parameter    ap_ST_fsm_state23 = 20'd262144;
parameter    ap_ST_fsm_state24 = 20'd524288;

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
output  [14:0] A_address0;
output   A_ce0;
input  [31:0] A_q0;
output  [14:0] B_address0;
output   B_ce0;
input  [31:0] B_q0;
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
reg B_ce0;
reg d_ce0;

(* fsm_encoding = "none" *) reg   [19:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [63:0] k_reg_169;
reg   [31:0] reg_190;
wire    ap_CS_fsm_pp0_stage5;
reg    ap_enable_reg_pp0_iter0;
wire    ap_block_state12_pp0_stage5_iter0;
wire    ap_block_pp0_stage5_11001;
reg   [0:0] exitcond_reg_440;
wire    ap_CS_fsm_state18;
wire    ap_CS_fsm_state2;
wire   [63:0] grp_fu_195_p2;
reg   [63:0] tmp_reg_356;
wire   [14:0] p_1_fu_211_p2;
wire    ap_CS_fsm_state3;
wire   [0:0] exitcond3_fu_206_p2;
wire  signed [15:0] tmp_65_fu_229_p1;
reg  signed [15:0] tmp_65_reg_379;
wire    ap_CS_fsm_state4;
wire  signed [15:0] tmp_66_fu_232_p1;
reg  signed [15:0] tmp_66_reg_385;
wire   [127:0] grp_fu_223_p2;
reg   [127:0] bound_reg_390;
wire   [127:0] indvar_flatten_next_fu_240_p2;
reg   [127:0] indvar_flatten_next_reg_398;
wire    ap_CS_fsm_state5;
wire   [0:0] exitcond1_fu_246_p2;
reg   [0:0] exitcond1_reg_403;
wire   [0:0] exitcond_flatten_fu_235_p2;
wire   [63:0] outrowidx_mid2_v_v_fu_257_p3;
reg   [63:0] outrowidx_mid2_v_v_reg_408;
wire  signed [15:0] tmp_67_fu_265_p1;
reg  signed [15:0] tmp_67_reg_413;
wire   [63:0] j_mid2_fu_269_p3;
reg   [63:0] j_mid2_reg_419;
wire    ap_CS_fsm_state6;
wire  signed [15:0] inneridx_mid2_fu_325_p2;
reg  signed [15:0] inneridx_mid2_reg_425;
wire   [15:0] tmp_68_fu_276_p1;
reg   [15:0] tmp_68_reg_430;
reg   [14:0] C_addr_4_reg_435;
wire   [0:0] exitcond_fu_284_p2;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state7_pp0_stage0_iter0;
wire    ap_block_state13_pp0_stage0_iter1;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] exitcond_reg_440_pp0_iter1_reg;
wire   [63:0] k_1_fu_289_p2;
reg   [63:0] k_1_reg_444;
reg   [31:0] A_load_reg_459;
wire    ap_CS_fsm_pp0_stage1;
wire    ap_block_state8_pp0_stage1_iter0;
wire    ap_block_state14_pp0_stage1_iter1;
wire    ap_block_pp0_stage1_11001;
reg   [31:0] B_load_reg_464;
wire   [31:0] grp_fu_186_p2;
reg   [31:0] tmp_6_reg_469;
wire    ap_CS_fsm_pp0_stage4;
wire    ap_block_state11_pp0_stage4_iter0;
wire    ap_block_pp0_stage4_11001;
wire    ap_CS_fsm_state17;
wire   [63:0] j_8_fu_313_p2;
reg   [63:0] j_8_reg_479;
reg   [31:0] d_load_reg_484;
wire   [31:0] grp_fu_180_p2;
reg   [31:0] tmp_s_reg_489;
wire    ap_CS_fsm_state23;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state7;
reg    ap_enable_reg_pp0_iter1;
wire    ap_block_pp0_stage5_subdone;
wire    ap_block_state10_pp0_stage3_iter0;
wire    ap_block_state16_pp0_stage3_iter1;
wire    ap_block_pp0_stage3_subdone;
wire    ap_CS_fsm_pp0_stage3;
reg   [14:0] p_reg_124;
reg   [127:0] indvar_flatten_reg_135;
wire    ap_CS_fsm_state24;
reg   [63:0] i_reg_146;
reg   [63:0] j_reg_157;
reg   [63:0] ap_phi_mux_k_phi_fu_173_p4;
wire    ap_block_pp0_stage0;
wire   [63:0] p_cast_fu_201_p1;
wire   [63:0] sum2_cast_fu_280_p1;
wire   [63:0] sum5_cast_fu_304_p1;
wire   [63:0] sum8_cast_fu_309_p1;
wire    ap_block_pp0_stage4;
wire    ap_block_pp0_stage3_11001;
wire    ap_block_pp0_stage3;
reg   [31:0] grp_fu_180_p0;
reg   [31:0] grp_fu_180_p1;
wire    ap_block_pp0_stage5;
wire    ap_CS_fsm_state19;
wire    ap_CS_fsm_pp0_stage2;
wire    ap_block_pp0_stage2;
wire  signed [63:0] cast_fu_217_p0;
wire  signed [63:0] cast1_fu_220_p0;
wire   [63:0] grp_fu_223_p0;
wire   [63:0] grp_fu_223_p1;
wire  signed [63:0] tmp_65_fu_229_p0;
wire  signed [63:0] exitcond1_fu_246_p1;
wire   [63:0] i_s_fu_251_p2;
wire  signed [15:0] grp_fu_318_p3;
wire  signed [15:0] tmp_69_fu_295_p1;
(* use_dsp48 = "no" *) wire   [15:0] sum5_fu_299_p2;
wire  signed [15:0] grp_fu_329_p3;
wire   [15:0] grp_fu_318_p2;
reg   [19:0] ap_NS_fsm;
wire    ap_block_pp0_stage1_subdone;
wire    ap_block_state9_pp0_stage2_iter0;
wire    ap_block_state15_pp0_stage2_iter1;
wire    ap_block_pp0_stage2_subdone;
wire    ap_block_pp0_stage4_subdone;
reg    ap_idle_pp0;
wire    ap_enable_pp0;
wire   [127:0] grp_fu_223_p00;
wire   [127:0] grp_fu_223_p10;

// power-on initialization
initial begin
#0 ap_CS_fsm = 20'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
end

WebModel_fadd_32ncud #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
WebModel_fadd_32ncud_U53(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_180_p0),
    .din1(grp_fu_180_p1),
    .ce(1'b1),
    .dout(grp_fu_180_p2)
);

WebModel_fmul_32ndEe #(
    .ID( 1 ),
    .NUM_STAGE( 3 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
WebModel_fmul_32ndEe_U54(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(A_load_reg_459),
    .din1(B_load_reg_464),
    .ce(1'b1),
    .dout(grp_fu_186_p2)
);

WebModel_mul_64s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
WebModel_mul_64s_bkb_U55(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(outcols),
    .din1(outrows),
    .ce(1'b1),
    .dout(grp_fu_195_p2)
);

WebModel_mul_64nseOg #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 128 ))
WebModel_mul_64nseOg_U56(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(grp_fu_223_p0),
    .din1(grp_fu_223_p1),
    .ce(1'b1),
    .dout(grp_fu_223_p2)
);

WebModel_mac_mulag8j #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
WebModel_mac_mulag8j_U57(
    .din0(tmp_67_reg_413),
    .din1(tmp_65_reg_379),
    .din2(grp_fu_318_p2),
    .dout(grp_fu_318_p3)
);

WebModel_mul_mul_ibs #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
WebModel_mul_mul_ibs_U58(
    .din0(tmp_67_reg_413),
    .din1(tmp_66_reg_385),
    .dout(inneridx_mid2_fu_325_p2)
);

WebModel_mac_mulag8j #(
    .ID( 1 ),
    .NUM_STAGE( 1 ),
    .din0_WIDTH( 16 ),
    .din1_WIDTH( 16 ),
    .din2_WIDTH( 16 ),
    .dout_WIDTH( 16 ))
WebModel_mac_mulag8j_U59(
    .din0(tmp_69_fu_295_p1),
    .din1(tmp_65_reg_379),
    .din2(tmp_68_reg_430),
    .dout(grp_fu_329_p3)
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
        if (((1'b1 == ap_condition_pp0_exit_iter0_state7) & (((1'b0 == ap_block_pp0_stage5_subdone) & (1'b1 == ap_CS_fsm_pp0_stage5)) | ((1'b0 == ap_block_pp0_stage3_subdone) & (1'b1 == ap_CS_fsm_pp0_stage3))))) begin
            ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state7);
        end else if ((((1'b0 == ap_block_pp0_stage5_subdone) & (1'b1 == ap_CS_fsm_pp0_stage5)) | ((1'b0 == ap_block_pp0_stage3_subdone) & (1'b1 == ap_CS_fsm_pp0_stage3)))) begin
            ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
        end else if ((1'b1 == ap_CS_fsm_state6)) begin
            ap_enable_reg_pp0_iter1 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state24)) begin
        i_reg_146 <= outrowidx_mid2_v_v_reg_408;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        i_reg_146 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state24)) begin
        indvar_flatten_reg_135 <= indvar_flatten_next_reg_398;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        indvar_flatten_reg_135 <= 128'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state24)) begin
        j_reg_157 <= j_8_reg_479;
    end else if ((1'b1 == ap_CS_fsm_state4)) begin
        j_reg_157 <= 64'd0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        k_reg_169 <= 64'd0;
    end else if (((exitcond_reg_440 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        k_reg_169 <= k_1_reg_444;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond3_fu_206_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
        p_reg_124 <= p_1_fu_211_p2;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        p_reg_124 <= 15'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_reg_440 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage1) & (1'b0 == ap_block_pp0_stage1_11001))) begin
        A_load_reg_459 <= A_q0;
        B_load_reg_464 <= B_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state6)) begin
        C_addr_4_reg_435 <= sum2_cast_fu_280_p1;
        inneridx_mid2_reg_425 <= inneridx_mid2_fu_325_p2;
        j_mid2_reg_419 <= j_mid2_fu_269_p3;
        tmp_68_reg_430 <= tmp_68_fu_276_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state4)) begin
        bound_reg_390 <= grp_fu_223_p2;
        tmp_65_reg_379 <= tmp_65_fu_229_p1;
        tmp_66_reg_385 <= tmp_66_fu_232_p1;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state18)) begin
        d_load_reg_484 <= d_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_235_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state5))) begin
        exitcond1_reg_403 <= exitcond1_fu_246_p2;
        outrowidx_mid2_v_v_reg_408 <= outrowidx_mid2_v_v_fu_257_p3;
        tmp_67_reg_413 <= tmp_67_fu_265_p1;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exitcond_reg_440 <= exitcond_fu_284_p2;
        exitcond_reg_440_pp0_iter1_reg <= exitcond_reg_440;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state5)) begin
        indvar_flatten_next_reg_398 <= indvar_flatten_next_fu_240_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        j_8_reg_479 <= j_8_fu_313_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        k_1_reg_444 <= k_1_fu_289_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state18) | ((exitcond_reg_440 == 1'd0) & (1'b0 == ap_block_pp0_stage5_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage5)))) begin
        reg_190 <= C_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_reg_440 == 1'd0) & (1'b0 == ap_block_pp0_stage4_11001) & (1'b1 == ap_CS_fsm_pp0_stage4))) begin
        tmp_6_reg_469 <= grp_fu_186_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state2)) begin
        tmp_reg_356 <= grp_fu_195_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state23)) begin
        tmp_s_reg_489 <= grp_fu_180_p2;
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
        B_ce0 = 1'b1;
    end else begin
        B_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state24) | (1'b1 == ap_CS_fsm_state17) | ((1'b0 == ap_block_pp0_stage4) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage4)) | ((1'b0 == ap_block_pp0_stage3) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter1 == 1'b1)))) begin
        C_address0 = C_addr_4_reg_435;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        C_address0 = p_cast_fu_201_p1;
    end else begin
        C_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state24) | (1'b1 == ap_CS_fsm_state17) | (1'b1 == ap_CS_fsm_state3) | ((1'b0 == ap_block_pp0_stage4_11001) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage4)) | ((1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter1 == 1'b1)))) begin
        C_ce0 = 1'b1;
    end else begin
        C_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state24)) begin
        C_d0 = tmp_s_reg_489;
    end else if (((1'b0 == ap_block_pp0_stage3) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
        C_d0 = grp_fu_180_p2;
    end else if ((1'b1 == ap_CS_fsm_state3)) begin
        C_d0 = 32'd0;
    end else begin
        C_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state24) | ((exitcond_reg_440_pp0_iter1_reg == 1'd0) & (1'b0 == ap_block_pp0_stage3_11001) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter1 == 1'b1)) | ((exitcond3_fu_206_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3)))) begin
        C_we0 = 1'b1;
    end else begin
        C_we0 = 1'b0;
    end
end

always @ (*) begin
    if ((exitcond_fu_284_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state7 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state7 = 1'b0;
    end
end

always @ (*) begin
    if ((((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)) | ((1'b1 == ap_CS_fsm_state5) & (exitcond_flatten_fu_235_p2 == 1'd1)))) begin
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
    if (((ap_enable_reg_pp0_iter0 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_reg_440 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_k_phi_fu_173_p4 = k_1_reg_444;
    end else begin
        ap_phi_mux_k_phi_fu_173_p4 = k_reg_169;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state5) & (exitcond_flatten_fu_235_p2 == 1'd1))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state17)) begin
        d_ce0 = 1'b1;
    end else begin
        d_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        grp_fu_180_p0 = reg_190;
    end else if (((1'b0 == ap_block_pp0_stage5) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage5))) begin
        grp_fu_180_p0 = C_q0;
    end else begin
        grp_fu_180_p0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state19)) begin
        grp_fu_180_p1 = d_load_reg_484;
    end else if (((1'b0 == ap_block_pp0_stage5) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage5))) begin
        grp_fu_180_p1 = tmp_6_reg_469;
    end else begin
        grp_fu_180_p1 = 'bx;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((ap_start == 1'b1) & (1'b1 == ap_CS_fsm_state1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            ap_NS_fsm = ap_ST_fsm_state3;
        end
        ap_ST_fsm_state3 : begin
            if (((exitcond3_fu_206_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state3))) begin
                ap_NS_fsm = ap_ST_fsm_state3;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state4;
            end
        end
        ap_ST_fsm_state4 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        ap_ST_fsm_state5 : begin
            if (((1'b1 == ap_CS_fsm_state5) & (exitcond_flatten_fu_235_p2 == 1'd1))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state6;
            end
        end
        ap_ST_fsm_state6 : begin
            ap_NS_fsm = ap_ST_fsm_pp0_stage0;
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (exitcond_fu_284_p2 == 1'd1)) & (1'b0 == ap_block_pp0_stage0_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage1;
            end else if (((ap_enable_reg_pp0_iter1 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (exitcond_fu_284_p2 == 1'd1))) begin
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
            if ((~((ap_enable_reg_pp0_iter0 == 1'b0) & (1'b0 == ap_block_pp0_stage3_subdone) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter1 == 1'b1)) & (1'b0 == ap_block_pp0_stage3_subdone))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage4;
            end else if (((ap_enable_reg_pp0_iter0 == 1'b0) & (1'b0 == ap_block_pp0_stage3_subdone) & (1'b1 == ap_CS_fsm_pp0_stage3) & (ap_enable_reg_pp0_iter1 == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state17;
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
            if ((1'b0 == ap_block_pp0_stage5_subdone)) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage5;
            end
        end
        ap_ST_fsm_state17 : begin
            ap_NS_fsm = ap_ST_fsm_state18;
        end
        ap_ST_fsm_state18 : begin
            ap_NS_fsm = ap_ST_fsm_state19;
        end
        ap_ST_fsm_state19 : begin
            ap_NS_fsm = ap_ST_fsm_state20;
        end
        ap_ST_fsm_state20 : begin
            ap_NS_fsm = ap_ST_fsm_state21;
        end
        ap_ST_fsm_state21 : begin
            ap_NS_fsm = ap_ST_fsm_state22;
        end
        ap_ST_fsm_state22 : begin
            ap_NS_fsm = ap_ST_fsm_state23;
        end
        ap_ST_fsm_state23 : begin
            ap_NS_fsm = ap_ST_fsm_state24;
        end
        ap_ST_fsm_state24 : begin
            ap_NS_fsm = ap_ST_fsm_state5;
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign A_address0 = sum5_cast_fu_304_p1;

assign B_address0 = sum8_cast_fu_309_p1;

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_pp0_stage1 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_pp0_stage2 = ap_CS_fsm[32'd8];

assign ap_CS_fsm_pp0_stage3 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_pp0_stage4 = ap_CS_fsm[32'd10];

assign ap_CS_fsm_pp0_stage5 = ap_CS_fsm[32'd11];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd12];

assign ap_CS_fsm_state18 = ap_CS_fsm[32'd13];

assign ap_CS_fsm_state19 = ap_CS_fsm[32'd14];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_CS_fsm_state23 = ap_CS_fsm[32'd18];

assign ap_CS_fsm_state24 = ap_CS_fsm[32'd19];

assign ap_CS_fsm_state3 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state4 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state5 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state6 = ap_CS_fsm[32'd5];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage1_subdone = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage2 = ~(1'b1 == 1'b1);

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

assign ap_block_state7_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage1_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage2_iter0 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign cast1_fu_220_p0 = outcols;

assign cast_fu_217_p0 = outrows;

assign d_address0 = j_mid2_reg_419;

assign exitcond1_fu_246_p1 = outcols;

assign exitcond1_fu_246_p2 = ((j_reg_157 == exitcond1_fu_246_p1) ? 1'b1 : 1'b0);

assign exitcond3_fu_206_p2 = ((p_cast_fu_201_p1 == tmp_reg_356) ? 1'b1 : 1'b0);

assign exitcond_flatten_fu_235_p2 = ((indvar_flatten_reg_135 == bound_reg_390) ? 1'b1 : 1'b0);

assign exitcond_fu_284_p2 = ((ap_phi_mux_k_phi_fu_173_p4 == innerdim) ? 1'b1 : 1'b0);

assign grp_fu_223_p0 = grp_fu_223_p00;

assign grp_fu_223_p00 = $unsigned(cast1_fu_220_p0);

assign grp_fu_223_p1 = grp_fu_223_p10;

assign grp_fu_223_p10 = $unsigned(cast_fu_217_p0);

assign grp_fu_318_p2 = j_mid2_fu_269_p3[15:0];

assign i_s_fu_251_p2 = (64'd1 + i_reg_146);

assign indvar_flatten_next_fu_240_p2 = (indvar_flatten_reg_135 + 128'd1);

assign j_8_fu_313_p2 = (j_mid2_reg_419 + 64'd1);

assign j_mid2_fu_269_p3 = ((exitcond1_reg_403[0:0] === 1'b1) ? 64'd0 : j_reg_157);

assign k_1_fu_289_p2 = (ap_phi_mux_k_phi_fu_173_p4 + 64'd1);

assign outrowidx_mid2_v_v_fu_257_p3 = ((exitcond1_fu_246_p2[0:0] === 1'b1) ? i_s_fu_251_p2 : i_reg_146);

assign p_1_fu_211_p2 = (p_reg_124 + 15'd1);

assign p_cast_fu_201_p1 = p_reg_124;

assign sum2_cast_fu_280_p1 = $unsigned(grp_fu_318_p3);

assign sum5_cast_fu_304_p1 = sum5_fu_299_p2;

assign sum5_fu_299_p2 = ($signed(tmp_69_fu_295_p1) + $signed(inneridx_mid2_reg_425));

assign sum8_cast_fu_309_p1 = $unsigned(grp_fu_329_p3);

assign tmp_65_fu_229_p0 = outcols;

assign tmp_65_fu_229_p1 = tmp_65_fu_229_p0[15:0];

assign tmp_66_fu_232_p1 = innerdim[15:0];

assign tmp_67_fu_265_p1 = outrowidx_mid2_v_v_fu_257_p3[15:0];

assign tmp_68_fu_276_p1 = j_mid2_fu_269_p3[15:0];

assign tmp_69_fu_295_p1 = ap_phi_mux_k_phi_fu_173_p4[15:0];

endmodule //k2c_affine_matmul
