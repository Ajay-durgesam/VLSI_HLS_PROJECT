// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

`timescale 1 ns / 1 ps 

module k2c_dense_2 (
        ap_clk,
        ap_rst,
        ap_start,
        ap_done,
        ap_idle,
        ap_ready,
        output_array_address0,
        output_array_ce0,
        output_array_we0,
        output_array_d0,
        output_array_q0,
        output_array_address1,
        output_array_ce1,
        output_array_we1,
        output_array_d1,
        input_array_address0,
        input_array_ce0,
        input_array_q0,
        input_ndim_read,
        input_numel_read,
        input_shape_address0,
        input_shape_ce0,
        input_shape_q0,
        kernel_array_address0,
        kernel_array_ce0,
        kernel_array_q0,
        kernel_shape_address0,
        kernel_shape_ce0,
        kernel_shape_q0,
        bias_array_address0,
        bias_array_ce0,
        bias_array_q0
);

parameter    ap_ST_fsm_state1 = 10'd1;
parameter    ap_ST_fsm_state2 = 10'd2;
parameter    ap_ST_fsm_pp0_stage0 = 10'd4;
parameter    ap_ST_fsm_state11 = 10'd8;
parameter    ap_ST_fsm_state12 = 10'd16;
parameter    ap_ST_fsm_state13 = 10'd32;
parameter    ap_ST_fsm_state14 = 10'd64;
parameter    ap_ST_fsm_state15 = 10'd128;
parameter    ap_ST_fsm_state16 = 10'd256;
parameter    ap_ST_fsm_state17 = 10'd512;

input   ap_clk;
input   ap_rst;
input   ap_start;
output   ap_done;
output   ap_idle;
output   ap_ready;
output  [14:0] output_array_address0;
output   output_array_ce0;
output   output_array_we0;
output  [31:0] output_array_d0;
input  [31:0] output_array_q0;
output  [14:0] output_array_address1;
output   output_array_ce1;
output   output_array_we1;
output  [31:0] output_array_d1;
output  [14:0] input_array_address0;
output   input_array_ce0;
input  [31:0] input_array_q0;
input  [63:0] input_ndim_read;
input  [63:0] input_numel_read;
output  [2:0] input_shape_address0;
output   input_shape_ce0;
input  [63:0] input_shape_q0;
output  [14:0] kernel_array_address0;
output   kernel_array_ce0;
input  [31:0] kernel_array_q0;
output  [2:0] kernel_shape_address0;
output   kernel_shape_ce0;
input  [63:0] kernel_shape_q0;
output  [14:0] bias_array_address0;
output   bias_array_ce0;
input  [31:0] bias_array_q0;

reg ap_done;
reg ap_idle;
reg ap_ready;
reg[14:0] output_array_address0;
reg output_array_ce0;
reg output_array_we0;
reg[31:0] output_array_d0;
reg output_array_ce1;
reg output_array_we1;
reg[14:0] input_array_address0;
reg input_array_ce0;
reg[2:0] input_shape_address0;
reg input_shape_ce0;
reg[14:0] kernel_array_address0;
reg kernel_array_ce0;
reg[2:0] kernel_shape_address0;
reg kernel_shape_ce0;
reg[14:0] bias_array_address0;
reg bias_array_ce0;

(* fsm_encoding = "none" *) reg   [9:0] ap_CS_fsm;
wire    ap_CS_fsm_state1;
reg   [6:0] indvar_flatten_reg_143;
reg   [6:0] i_i_reg_154;
reg   [6:0] j_i_reg_165;
wire   [0:0] tmp_fu_225_p2;
reg   [0:0] tmp_reg_337;
wire   [63:0] tmp_1_fu_231_p2;
reg   [63:0] tmp_1_reg_341;
wire   [0:0] icmp_fu_248_p2;
reg   [0:0] icmp_reg_346;
wire   [0:0] exitcond_flatten_fu_254_p2;
reg   [0:0] exitcond_flatten_reg_361;
wire    ap_CS_fsm_pp0_stage0;
wire    ap_block_state3_pp0_stage0_iter0;
wire    ap_block_state4_pp0_stage0_iter1;
wire    ap_block_state5_pp0_stage0_iter2;
wire    ap_block_state6_pp0_stage0_iter3;
wire    ap_block_state7_pp0_stage0_iter4;
wire    ap_block_state8_pp0_stage0_iter5;
wire    ap_block_state9_pp0_stage0_iter6;
wire    ap_block_state10_pp0_stage0_iter7;
wire    ap_block_pp0_stage0_11001;
reg   [0:0] exitcond_flatten_reg_361_pp0_iter1_reg;
reg   [0:0] exitcond_flatten_reg_361_pp0_iter2_reg;
reg   [0:0] exitcond_flatten_reg_361_pp0_iter3_reg;
reg   [0:0] exitcond_flatten_reg_361_pp0_iter4_reg;
reg   [0:0] exitcond_flatten_reg_361_pp0_iter5_reg;
reg   [0:0] exitcond_flatten_reg_361_pp0_iter6_reg;
wire   [6:0] indvar_flatten_next_fu_260_p2;
reg    ap_enable_reg_pp0_iter0;
wire   [6:0] i_i_mid2_fu_286_p3;
reg   [6:0] i_i_mid2_reg_370;
reg   [14:0] output_array_addr_reg_380;
reg   [14:0] output_array_addr_reg_380_pp0_iter1_reg;
reg   [14:0] output_array_addr_reg_380_pp0_iter2_reg;
reg   [14:0] output_array_addr_reg_380_pp0_iter3_reg;
reg   [14:0] output_array_addr_reg_380_pp0_iter4_reg;
reg   [14:0] output_array_addr_reg_380_pp0_iter5_reg;
reg   [14:0] output_array_addr_reg_380_pp0_iter6_reg;
wire   [6:0] j_fu_310_p2;
reg   [31:0] bias_array_load_reg_391;
reg   [31:0] output_array_load_reg_396;
reg    ap_enable_reg_pp0_iter1;
wire   [31:0] grp_fu_221_p2;
reg   [31:0] tmp_4_i_reg_401;
wire  signed [63:0] outrows1_fu_316_p3;
reg   [63:0] outrows1_reg_406;
wire    ap_CS_fsm_state13;
reg   [63:0] outcols_reg_412;
reg   [63:0] innerdim_reg_423;
wire    ap_CS_fsm_state14;
wire   [63:0] grp_fu_323_p2;
reg   [63:0] outsize_reg_428;
wire    ap_CS_fsm_state15;
wire    grp_k2c_affine_matmul_fu_197_ap_idle;
wire    grp_k2c_affine_matmul_fu_197_ap_ready;
wire    grp_k2c_affine_matmul_fu_197_ap_done;
wire    ap_CS_fsm_state2;
wire    grp_k2c_dot_fu_176_ap_idle;
wire    grp_k2c_dot_fu_176_ap_ready;
wire    grp_k2c_dot_fu_176_ap_done;
wire    ap_block_pp0_stage0_subdone;
reg    ap_condition_pp0_exit_iter0_state3;
reg    ap_enable_reg_pp0_iter2;
reg    ap_enable_reg_pp0_iter3;
reg    ap_enable_reg_pp0_iter4;
reg    ap_enable_reg_pp0_iter5;
reg    ap_enable_reg_pp0_iter6;
reg    ap_enable_reg_pp0_iter7;
wire    grp_k2c_dot_fu_176_ap_start;
wire   [14:0] grp_k2c_dot_fu_176_C_array_address0;
wire    grp_k2c_dot_fu_176_C_array_ce0;
wire    grp_k2c_dot_fu_176_C_array_we0;
wire   [31:0] grp_k2c_dot_fu_176_C_array_d0;
wire   [14:0] grp_k2c_dot_fu_176_A_array_address0;
wire    grp_k2c_dot_fu_176_A_array_ce0;
wire   [2:0] grp_k2c_dot_fu_176_A_shape_address0;
wire    grp_k2c_dot_fu_176_A_shape_ce0;
wire   [14:0] grp_k2c_dot_fu_176_B_array_address0;
wire    grp_k2c_dot_fu_176_B_array_ce0;
wire   [2:0] grp_k2c_dot_fu_176_B_shape_address0;
wire    grp_k2c_dot_fu_176_B_shape_ce0;
wire    grp_k2c_affine_matmul_fu_197_ap_start;
wire   [14:0] grp_k2c_affine_matmul_fu_197_C_address0;
wire    grp_k2c_affine_matmul_fu_197_C_ce0;
wire    grp_k2c_affine_matmul_fu_197_C_we0;
wire   [31:0] grp_k2c_affine_matmul_fu_197_C_d0;
wire   [14:0] grp_k2c_affine_matmul_fu_197_A_address0;
wire    grp_k2c_affine_matmul_fu_197_A_ce0;
wire   [14:0] grp_k2c_affine_matmul_fu_197_B_address0;
wire    grp_k2c_affine_matmul_fu_197_B_ce0;
wire   [14:0] grp_k2c_affine_matmul_fu_197_d_address0;
wire    grp_k2c_affine_matmul_fu_197_d_ce0;
wire    grp_k2c_relu_func_fu_213_ap_start;
wire    grp_k2c_relu_func_fu_213_ap_done;
wire    grp_k2c_relu_func_fu_213_ap_idle;
wire    grp_k2c_relu_func_fu_213_ap_ready;
wire   [14:0] grp_k2c_relu_func_fu_213_x_address0;
wire    grp_k2c_relu_func_fu_213_x_ce0;
wire    grp_k2c_relu_func_fu_213_x_we0;
wire   [31:0] grp_k2c_relu_func_fu_213_x_d0;
reg   [63:0] grp_k2c_relu_func_fu_213_size;
reg   [6:0] ap_phi_mux_i_i_phi_fu_158_p4;
wire    ap_block_pp0_stage0;
reg    grp_k2c_dot_fu_176_ap_start_reg;
reg    grp_k2c_affine_matmul_fu_197_ap_start_reg;
reg    grp_k2c_relu_func_fu_213_ap_start_reg;
wire    ap_CS_fsm_state11;
wire    ap_CS_fsm_state16;
wire    ap_CS_fsm_state12;
wire    ap_CS_fsm_state17;
wire   [63:0] j_i_cast1_fu_294_p1;
wire   [63:0] tmp_i_cast_fu_305_p1;
wire   [62:0] tmp_58_fu_238_p4;
wire   [0:0] exitcond_i4_fu_266_p2;
wire   [6:0] i2_fu_280_p2;
wire   [6:0] j_i_mid2_fu_272_p3;
wire   [6:0] tmp_i_fu_299_p2;
reg    grp_fu_323_ce;
reg    ap_block_state17_on_subcall_done;
reg   [9:0] ap_NS_fsm;
reg    ap_idle_pp0;
wire    ap_enable_pp0;

// power-on initialization
initial begin
#0 ap_CS_fsm = 10'd1;
#0 ap_enable_reg_pp0_iter0 = 1'b0;
#0 ap_enable_reg_pp0_iter1 = 1'b0;
#0 ap_enable_reg_pp0_iter2 = 1'b0;
#0 ap_enable_reg_pp0_iter3 = 1'b0;
#0 ap_enable_reg_pp0_iter4 = 1'b0;
#0 ap_enable_reg_pp0_iter5 = 1'b0;
#0 ap_enable_reg_pp0_iter6 = 1'b0;
#0 ap_enable_reg_pp0_iter7 = 1'b0;
#0 grp_k2c_dot_fu_176_ap_start_reg = 1'b0;
#0 grp_k2c_affine_matmul_fu_197_ap_start_reg = 1'b0;
#0 grp_k2c_relu_func_fu_213_ap_start_reg = 1'b0;
end

k2c_dot grp_k2c_dot_fu_176(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_k2c_dot_fu_176_ap_start),
    .ap_done(grp_k2c_dot_fu_176_ap_done),
    .ap_idle(grp_k2c_dot_fu_176_ap_idle),
    .ap_ready(grp_k2c_dot_fu_176_ap_ready),
    .C_array_address0(grp_k2c_dot_fu_176_C_array_address0),
    .C_array_ce0(grp_k2c_dot_fu_176_C_array_ce0),
    .C_array_we0(grp_k2c_dot_fu_176_C_array_we0),
    .C_array_d0(grp_k2c_dot_fu_176_C_array_d0),
    .C_array_q0(output_array_q0),
    .A_array_address0(grp_k2c_dot_fu_176_A_array_address0),
    .A_array_ce0(grp_k2c_dot_fu_176_A_array_ce0),
    .A_array_q0(input_array_q0),
    .A_ndim_read(input_ndim_read),
    .A_numel_read(input_numel_read),
    .A_shape_address0(grp_k2c_dot_fu_176_A_shape_address0),
    .A_shape_ce0(grp_k2c_dot_fu_176_A_shape_ce0),
    .A_shape_q0(input_shape_q0),
    .B_array_address0(grp_k2c_dot_fu_176_B_array_address0),
    .B_array_ce0(grp_k2c_dot_fu_176_B_array_ce0),
    .B_array_q0(kernel_array_q0),
    .B_shape_address0(grp_k2c_dot_fu_176_B_shape_address0),
    .B_shape_ce0(grp_k2c_dot_fu_176_B_shape_ce0),
    .B_shape_q0(kernel_shape_q0),
    .axesA_0_read(tmp_1_reg_341)
);

k2c_affine_matmul grp_k2c_affine_matmul_fu_197(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_k2c_affine_matmul_fu_197_ap_start),
    .ap_done(grp_k2c_affine_matmul_fu_197_ap_done),
    .ap_idle(grp_k2c_affine_matmul_fu_197_ap_idle),
    .ap_ready(grp_k2c_affine_matmul_fu_197_ap_ready),
    .C_address0(grp_k2c_affine_matmul_fu_197_C_address0),
    .C_ce0(grp_k2c_affine_matmul_fu_197_C_ce0),
    .C_we0(grp_k2c_affine_matmul_fu_197_C_we0),
    .C_d0(grp_k2c_affine_matmul_fu_197_C_d0),
    .C_q0(output_array_q0),
    .A_address0(grp_k2c_affine_matmul_fu_197_A_address0),
    .A_ce0(grp_k2c_affine_matmul_fu_197_A_ce0),
    .A_q0(input_array_q0),
    .B_address0(grp_k2c_affine_matmul_fu_197_B_address0),
    .B_ce0(grp_k2c_affine_matmul_fu_197_B_ce0),
    .B_q0(kernel_array_q0),
    .d_address0(grp_k2c_affine_matmul_fu_197_d_address0),
    .d_ce0(grp_k2c_affine_matmul_fu_197_d_ce0),
    .d_q0(bias_array_q0),
    .outrows(outrows1_reg_406),
    .outcols(outcols_reg_412),
    .innerdim(innerdim_reg_423)
);

k2c_relu_func grp_k2c_relu_func_fu_213(
    .ap_clk(ap_clk),
    .ap_rst(ap_rst),
    .ap_start(grp_k2c_relu_func_fu_213_ap_start),
    .ap_done(grp_k2c_relu_func_fu_213_ap_done),
    .ap_idle(grp_k2c_relu_func_fu_213_ap_idle),
    .ap_ready(grp_k2c_relu_func_fu_213_ap_ready),
    .x_address0(grp_k2c_relu_func_fu_213_x_address0),
    .x_ce0(grp_k2c_relu_func_fu_213_x_ce0),
    .x_we0(grp_k2c_relu_func_fu_213_x_we0),
    .x_d0(grp_k2c_relu_func_fu_213_x_d0),
    .x_q0(output_array_q0),
    .size(grp_k2c_relu_func_fu_213_size)
);

WebModel_fadd_32ncud #(
    .ID( 1 ),
    .NUM_STAGE( 5 ),
    .din0_WIDTH( 32 ),
    .din1_WIDTH( 32 ),
    .dout_WIDTH( 32 ))
WebModel_fadd_32ncud_U67(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(output_array_load_reg_396),
    .din1(bias_array_load_reg_391),
    .ce(1'b1),
    .dout(grp_fu_221_p2)
);

WebModel_mul_64s_bkb #(
    .ID( 1 ),
    .NUM_STAGE( 2 ),
    .din0_WIDTH( 64 ),
    .din1_WIDTH( 64 ),
    .dout_WIDTH( 64 ))
WebModel_mul_64s_bkb_U68(
    .clk(ap_clk),
    .reset(ap_rst),
    .din0(outcols_reg_412),
    .din1(outrows1_reg_406),
    .ce(grp_fu_323_ce),
    .dout(grp_fu_323_p2)
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
        if (((1'b0 == ap_block_pp0_stage0_subdone) & (1'b1 == ap_condition_pp0_exit_iter0_state3) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
            ap_enable_reg_pp0_iter0 <= 1'b0;
        end else if (((grp_k2c_dot_fu_176_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter0 <= 1'b1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter1 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            if ((1'b1 == ap_condition_pp0_exit_iter0_state3)) begin
                ap_enable_reg_pp0_iter1 <= (1'b1 ^ ap_condition_pp0_exit_iter0_state3);
            end else if ((1'b1 == 1'b1)) begin
                ap_enable_reg_pp0_iter1 <= ap_enable_reg_pp0_iter0;
            end
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter2 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter2 <= ap_enable_reg_pp0_iter1;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter3 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter3 <= ap_enable_reg_pp0_iter2;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter4 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter4 <= ap_enable_reg_pp0_iter3;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter5 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter5 <= ap_enable_reg_pp0_iter4;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter6 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter6 <= ap_enable_reg_pp0_iter5;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        ap_enable_reg_pp0_iter7 <= 1'b0;
    end else begin
        if ((1'b0 == ap_block_pp0_stage0_subdone)) begin
            ap_enable_reg_pp0_iter7 <= ap_enable_reg_pp0_iter6;
        end else if (((grp_k2c_dot_fu_176_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
            ap_enable_reg_pp0_iter7 <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_k2c_affine_matmul_fu_197_ap_start_reg <= 1'b0;
    end else begin
        if ((1'b1 == ap_CS_fsm_state14)) begin
            grp_k2c_affine_matmul_fu_197_ap_start_reg <= 1'b1;
        end else if ((grp_k2c_affine_matmul_fu_197_ap_ready == 1'b1)) begin
            grp_k2c_affine_matmul_fu_197_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_k2c_dot_fu_176_ap_start_reg <= 1'b0;
    end else begin
        if (((tmp_fu_225_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
            grp_k2c_dot_fu_176_ap_start_reg <= 1'b1;
        end else if ((grp_k2c_dot_fu_176_ap_ready == 1'b1)) begin
            grp_k2c_dot_fu_176_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (ap_rst == 1'b1) begin
        grp_k2c_relu_func_fu_213_ap_start_reg <= 1'b0;
    end else begin
        if (((1'b1 == ap_CS_fsm_state16) | (1'b1 == ap_CS_fsm_state11))) begin
            grp_k2c_relu_func_fu_213_ap_start_reg <= 1'b1;
        end else if ((grp_k2c_relu_func_fu_213_ap_ready == 1'b1)) begin
            grp_k2c_relu_func_fu_213_ap_start_reg <= 1'b0;
        end
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_reg_361 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_i_reg_154 <= i_i_mid2_reg_370;
    end else if (((grp_k2c_dot_fu_176_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        i_i_reg_154 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_254_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        indvar_flatten_reg_143 <= indvar_flatten_next_fu_260_p2;
    end else if (((grp_k2c_dot_fu_176_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        indvar_flatten_reg_143 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_254_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        j_i_reg_165 <= j_fu_310_p2;
    end else if (((grp_k2c_dot_fu_176_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
        j_i_reg_165 <= 7'd0;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_reg_361 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        bias_array_load_reg_391 <= bias_array_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        exitcond_flatten_reg_361 <= exitcond_flatten_fu_254_p2;
        exitcond_flatten_reg_361_pp0_iter1_reg <= exitcond_flatten_reg_361;
        output_array_addr_reg_380_pp0_iter1_reg[6 : 0] <= output_array_addr_reg_380[6 : 0];
    end
end

always @ (posedge ap_clk) begin
    if ((1'b0 == ap_block_pp0_stage0_11001)) begin
        exitcond_flatten_reg_361_pp0_iter2_reg <= exitcond_flatten_reg_361_pp0_iter1_reg;
        exitcond_flatten_reg_361_pp0_iter3_reg <= exitcond_flatten_reg_361_pp0_iter2_reg;
        exitcond_flatten_reg_361_pp0_iter4_reg <= exitcond_flatten_reg_361_pp0_iter3_reg;
        exitcond_flatten_reg_361_pp0_iter5_reg <= exitcond_flatten_reg_361_pp0_iter4_reg;
        exitcond_flatten_reg_361_pp0_iter6_reg <= exitcond_flatten_reg_361_pp0_iter5_reg;
        output_array_addr_reg_380_pp0_iter2_reg[6 : 0] <= output_array_addr_reg_380_pp0_iter1_reg[6 : 0];
        output_array_addr_reg_380_pp0_iter3_reg[6 : 0] <= output_array_addr_reg_380_pp0_iter2_reg[6 : 0];
        output_array_addr_reg_380_pp0_iter4_reg[6 : 0] <= output_array_addr_reg_380_pp0_iter3_reg[6 : 0];
        output_array_addr_reg_380_pp0_iter5_reg[6 : 0] <= output_array_addr_reg_380_pp0_iter4_reg[6 : 0];
        output_array_addr_reg_380_pp0_iter6_reg[6 : 0] <= output_array_addr_reg_380_pp0_iter5_reg[6 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_254_p2 == 1'd0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        i_i_mid2_reg_370 <= i_i_mid2_fu_286_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_225_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        icmp_reg_346 <= icmp_fu_248_p2;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state14)) begin
        innerdim_reg_423 <= kernel_shape_q0;
    end
end

always @ (posedge ap_clk) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        outcols_reg_412 <= kernel_shape_q0;
        outrows1_reg_406 <= outrows1_fu_316_p3;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_fu_254_p2 == 1'd0) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        output_array_addr_reg_380[6 : 0] <= tmp_i_cast_fu_305_p1[6 : 0];
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_reg_361 == 1'd0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        output_array_load_reg_396 <= output_array_q0;
    end
end

always @ (posedge ap_clk) begin
    if (((grp_k2c_affine_matmul_fu_197_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state15))) begin
        outsize_reg_428 <= grp_fu_323_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((tmp_fu_225_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_1_reg_341 <= tmp_1_fu_231_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((exitcond_flatten_reg_361_pp0_iter5_reg == 1'd0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        tmp_4_i_reg_401 <= grp_fu_221_p2;
    end
end

always @ (posedge ap_clk) begin
    if (((1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        tmp_reg_337 <= tmp_fu_225_p2;
    end
end

always @ (*) begin
    if ((exitcond_flatten_fu_254_p2 == 1'd1)) begin
        ap_condition_pp0_exit_iter0_state3 = 1'b1;
    end else begin
        ap_condition_pp0_exit_iter0_state3 = 1'b0;
    end
end

always @ (*) begin
    if ((((1'b0 == ap_block_state17_on_subcall_done) & (1'b1 == ap_CS_fsm_state17)) | ((ap_start == 1'b0) & (1'b1 == ap_CS_fsm_state1)))) begin
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
    if (((ap_enable_reg_pp0_iter7 == 1'b0) & (ap_enable_reg_pp0_iter6 == 1'b0) & (ap_enable_reg_pp0_iter5 == 1'b0) & (ap_enable_reg_pp0_iter4 == 1'b0) & (ap_enable_reg_pp0_iter3 == 1'b0) & (ap_enable_reg_pp0_iter2 == 1'b0) & (ap_enable_reg_pp0_iter1 == 1'b0) & (ap_enable_reg_pp0_iter0 == 1'b0))) begin
        ap_idle_pp0 = 1'b1;
    end else begin
        ap_idle_pp0 = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_361 == 1'd0) & (1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter1 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        ap_phi_mux_i_i_phi_fu_158_p4 = i_i_mid2_reg_370;
    end else begin
        ap_phi_mux_i_i_phi_fu_158_p4 = i_i_reg_154;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_state17_on_subcall_done) & (1'b1 == ap_CS_fsm_state17))) begin
        ap_ready = 1'b1;
    end else begin
        ap_ready = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        bias_array_address0 = j_i_cast1_fu_294_p1;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        bias_array_address0 = grp_k2c_affine_matmul_fu_197_d_address0;
    end else begin
        bias_array_address0 = 'bx;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        bias_array_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        bias_array_ce0 = grp_k2c_affine_matmul_fu_197_d_ce0;
    end else begin
        bias_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state14) | ((grp_k2c_affine_matmul_fu_197_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state15)))) begin
        grp_fu_323_ce = 1'b1;
    end else begin
        grp_fu_323_ce = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_reg_337 == 1'd1) & (1'b1 == ap_CS_fsm_state17))) begin
        grp_k2c_relu_func_fu_213_size = outsize_reg_428;
    end else if ((1'b1 == ap_CS_fsm_state12)) begin
        grp_k2c_relu_func_fu_213_size = 64'd64;
    end else begin
        grp_k2c_relu_func_fu_213_size = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        input_array_address0 = grp_k2c_affine_matmul_fu_197_A_address0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        input_array_address0 = grp_k2c_dot_fu_176_A_array_address0;
    end else begin
        input_array_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        input_array_ce0 = grp_k2c_affine_matmul_fu_197_A_ce0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        input_array_ce0 = grp_k2c_dot_fu_176_A_array_ce0;
    end else begin
        input_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((tmp_fu_225_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        input_shape_address0 = 64'd0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        input_shape_address0 = grp_k2c_dot_fu_176_A_shape_address0;
    end else begin
        input_shape_address0 = 'bx;
    end
end

always @ (*) begin
    if (((tmp_fu_225_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
        input_shape_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        input_shape_ce0 = grp_k2c_dot_fu_176_A_shape_ce0;
    end else begin
        input_shape_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        kernel_array_address0 = grp_k2c_affine_matmul_fu_197_B_address0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        kernel_array_address0 = grp_k2c_dot_fu_176_B_array_address0;
    end else begin
        kernel_array_address0 = 'bx;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state15)) begin
        kernel_array_ce0 = grp_k2c_affine_matmul_fu_197_B_ce0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        kernel_array_ce0 = grp_k2c_dot_fu_176_B_array_ce0;
    end else begin
        kernel_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    if ((1'b1 == ap_CS_fsm_state13)) begin
        kernel_shape_address0 = 64'd0;
    end else if (((tmp_fu_225_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1))) begin
        kernel_shape_address0 = 64'd1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        kernel_shape_address0 = grp_k2c_dot_fu_176_B_shape_address0;
    end else begin
        kernel_shape_address0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state13) | ((tmp_fu_225_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1)))) begin
        kernel_shape_ce0 = 1'b1;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        kernel_shape_ce0 = grp_k2c_dot_fu_176_B_shape_ce0;
    end else begin
        kernel_shape_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b0 == ap_block_pp0_stage0) & (ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0))) begin
        output_array_address0 = tmp_i_cast_fu_305_p1;
    end else if (((1'b1 == ap_CS_fsm_state12) | ((tmp_reg_337 == 1'd1) & (1'b1 == ap_CS_fsm_state17)))) begin
        output_array_address0 = grp_k2c_relu_func_fu_213_x_address0;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        output_array_address0 = grp_k2c_affine_matmul_fu_197_C_address0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_array_address0 = grp_k2c_dot_fu_176_C_array_address0;
    end else begin
        output_array_address0 = 'bx;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter0 == 1'b1) & (1'b1 == ap_CS_fsm_pp0_stage0) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        output_array_ce0 = 1'b1;
    end else if (((1'b1 == ap_CS_fsm_state12) | ((tmp_reg_337 == 1'd1) & (1'b1 == ap_CS_fsm_state17)))) begin
        output_array_ce0 = grp_k2c_relu_func_fu_213_x_ce0;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        output_array_ce0 = grp_k2c_affine_matmul_fu_197_C_ce0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_array_ce0 = grp_k2c_dot_fu_176_C_array_ce0;
    end else begin
        output_array_ce0 = 1'b0;
    end
end

always @ (*) begin
    if (((ap_enable_reg_pp0_iter7 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        output_array_ce1 = 1'b1;
    end else begin
        output_array_ce1 = 1'b0;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | ((tmp_reg_337 == 1'd1) & (1'b1 == ap_CS_fsm_state17)))) begin
        output_array_d0 = grp_k2c_relu_func_fu_213_x_d0;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        output_array_d0 = grp_k2c_affine_matmul_fu_197_C_d0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_array_d0 = grp_k2c_dot_fu_176_C_array_d0;
    end else begin
        output_array_d0 = 'bx;
    end
end

always @ (*) begin
    if (((1'b1 == ap_CS_fsm_state12) | ((tmp_reg_337 == 1'd1) & (1'b1 == ap_CS_fsm_state17)))) begin
        output_array_we0 = grp_k2c_relu_func_fu_213_x_we0;
    end else if ((1'b1 == ap_CS_fsm_state15)) begin
        output_array_we0 = grp_k2c_affine_matmul_fu_197_C_we0;
    end else if ((1'b1 == ap_CS_fsm_state2)) begin
        output_array_we0 = grp_k2c_dot_fu_176_C_array_we0;
    end else begin
        output_array_we0 = 1'b0;
    end
end

always @ (*) begin
    if (((exitcond_flatten_reg_361_pp0_iter6_reg == 1'd0) & (ap_enable_reg_pp0_iter7 == 1'b1) & (1'b0 == ap_block_pp0_stage0_11001))) begin
        output_array_we1 = 1'b1;
    end else begin
        output_array_we1 = 1'b0;
    end
end

always @ (*) begin
    case (ap_CS_fsm)
        ap_ST_fsm_state1 : begin
            if (((tmp_fu_225_p2 == 1'd1) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state13;
            end else if (((tmp_fu_225_p2 == 1'd0) & (1'b1 == ap_CS_fsm_state1) & (ap_start == 1'b1))) begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end
        end
        ap_ST_fsm_state2 : begin
            if (((grp_k2c_dot_fu_176_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state2))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state2;
            end
        end
        ap_ST_fsm_pp0_stage0 : begin
            if ((~((exitcond_flatten_fu_254_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0)) & ~((ap_enable_reg_pp0_iter6 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter7 == 1'b1)))) begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end else if ((((ap_enable_reg_pp0_iter6 == 1'b0) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter7 == 1'b1)) | ((exitcond_flatten_fu_254_p2 == 1'd1) & (1'b0 == ap_block_pp0_stage0_subdone) & (ap_enable_reg_pp0_iter0 == 1'b1) & (ap_enable_reg_pp0_iter1 == 1'b0)))) begin
                ap_NS_fsm = ap_ST_fsm_state11;
            end else begin
                ap_NS_fsm = ap_ST_fsm_pp0_stage0;
            end
        end
        ap_ST_fsm_state11 : begin
            ap_NS_fsm = ap_ST_fsm_state12;
        end
        ap_ST_fsm_state12 : begin
            if (((grp_k2c_relu_func_fu_213_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state12))) begin
                ap_NS_fsm = ap_ST_fsm_state17;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state12;
            end
        end
        ap_ST_fsm_state13 : begin
            ap_NS_fsm = ap_ST_fsm_state14;
        end
        ap_ST_fsm_state14 : begin
            ap_NS_fsm = ap_ST_fsm_state15;
        end
        ap_ST_fsm_state15 : begin
            if (((grp_k2c_affine_matmul_fu_197_ap_done == 1'b1) & (1'b1 == ap_CS_fsm_state15))) begin
                ap_NS_fsm = ap_ST_fsm_state16;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state15;
            end
        end
        ap_ST_fsm_state16 : begin
            ap_NS_fsm = ap_ST_fsm_state17;
        end
        ap_ST_fsm_state17 : begin
            if (((1'b0 == ap_block_state17_on_subcall_done) & (1'b1 == ap_CS_fsm_state17))) begin
                ap_NS_fsm = ap_ST_fsm_state1;
            end else begin
                ap_NS_fsm = ap_ST_fsm_state17;
            end
        end
        default : begin
            ap_NS_fsm = 'bx;
        end
    endcase
end

assign ap_CS_fsm_pp0_stage0 = ap_CS_fsm[32'd2];

assign ap_CS_fsm_state1 = ap_CS_fsm[32'd0];

assign ap_CS_fsm_state11 = ap_CS_fsm[32'd3];

assign ap_CS_fsm_state12 = ap_CS_fsm[32'd4];

assign ap_CS_fsm_state13 = ap_CS_fsm[32'd5];

assign ap_CS_fsm_state14 = ap_CS_fsm[32'd6];

assign ap_CS_fsm_state15 = ap_CS_fsm[32'd7];

assign ap_CS_fsm_state16 = ap_CS_fsm[32'd8];

assign ap_CS_fsm_state17 = ap_CS_fsm[32'd9];

assign ap_CS_fsm_state2 = ap_CS_fsm[32'd1];

assign ap_block_pp0_stage0 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_11001 = ~(1'b1 == 1'b1);

assign ap_block_pp0_stage0_subdone = ~(1'b1 == 1'b1);

assign ap_block_state10_pp0_stage0_iter7 = ~(1'b1 == 1'b1);

always @ (*) begin
    ap_block_state17_on_subcall_done = ((tmp_reg_337 == 1'd1) & (grp_k2c_relu_func_fu_213_ap_done == 1'b0));
end

assign ap_block_state3_pp0_stage0_iter0 = ~(1'b1 == 1'b1);

assign ap_block_state4_pp0_stage0_iter1 = ~(1'b1 == 1'b1);

assign ap_block_state5_pp0_stage0_iter2 = ~(1'b1 == 1'b1);

assign ap_block_state6_pp0_stage0_iter3 = ~(1'b1 == 1'b1);

assign ap_block_state7_pp0_stage0_iter4 = ~(1'b1 == 1'b1);

assign ap_block_state8_pp0_stage0_iter5 = ~(1'b1 == 1'b1);

assign ap_block_state9_pp0_stage0_iter6 = ~(1'b1 == 1'b1);

assign ap_enable_pp0 = (ap_idle_pp0 ^ 1'b1);

assign exitcond_flatten_fu_254_p2 = ((indvar_flatten_reg_143 == 7'd64) ? 1'b1 : 1'b0);

assign exitcond_i4_fu_266_p2 = ((j_i_reg_165 == 7'd64) ? 1'b1 : 1'b0);

assign grp_k2c_affine_matmul_fu_197_ap_start = grp_k2c_affine_matmul_fu_197_ap_start_reg;

assign grp_k2c_dot_fu_176_ap_start = grp_k2c_dot_fu_176_ap_start_reg;

assign grp_k2c_relu_func_fu_213_ap_start = grp_k2c_relu_func_fu_213_ap_start_reg;

assign i2_fu_280_p2 = (ap_phi_mux_i_i_phi_fu_158_p4 ^ 7'd64);

assign i_i_mid2_fu_286_p3 = ((exitcond_i4_fu_266_p2[0:0] === 1'b1) ? i2_fu_280_p2 : ap_phi_mux_i_i_phi_fu_158_p4);

assign icmp_fu_248_p2 = ((tmp_58_fu_238_p4 != 63'd0) ? 1'b1 : 1'b0);

assign indvar_flatten_next_fu_260_p2 = (indvar_flatten_reg_143 + 7'd1);

assign j_fu_310_p2 = (j_i_mid2_fu_272_p3 + 7'd1);

assign j_i_cast1_fu_294_p1 = j_i_mid2_fu_272_p3;

assign j_i_mid2_fu_272_p3 = ((exitcond_i4_fu_266_p2[0:0] === 1'b1) ? 7'd0 : j_i_reg_165);

assign output_array_address1 = output_array_addr_reg_380_pp0_iter6_reg;

assign output_array_d1 = tmp_4_i_reg_401;

assign outrows1_fu_316_p3 = ((icmp_reg_346[0:0] === 1'b1) ? input_shape_q0 : 64'd1);

assign tmp_1_fu_231_p2 = ($signed(input_ndim_read) + $signed(64'd18446744073709551615));

assign tmp_58_fu_238_p4 = {{input_ndim_read[63:1]}};

assign tmp_fu_225_p2 = ((input_ndim_read < 64'd3) ? 1'b1 : 1'b0);

assign tmp_i_cast_fu_305_p1 = tmp_i_fu_299_p2;

assign tmp_i_fu_299_p2 = (j_i_mid2_fu_272_p3 + i_i_mid2_fu_286_p3);

always @ (posedge ap_clk) begin
    output_array_addr_reg_380[14:7] <= 8'b00000000;
    output_array_addr_reg_380_pp0_iter1_reg[14:7] <= 8'b00000000;
    output_array_addr_reg_380_pp0_iter2_reg[14:7] <= 8'b00000000;
    output_array_addr_reg_380_pp0_iter3_reg[14:7] <= 8'b00000000;
    output_array_addr_reg_380_pp0_iter4_reg[14:7] <= 8'b00000000;
    output_array_addr_reg_380_pp0_iter5_reg[14:7] <= 8'b00000000;
    output_array_addr_reg_380_pp0_iter6_reg[14:7] <= 8'b00000000;
end

endmodule //k2c_dense_2
