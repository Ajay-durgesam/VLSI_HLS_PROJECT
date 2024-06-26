// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _WebModel_HH_
#define _WebModel_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "k2c_dense.h"
#include "k2c_dense_1.h"
#include "k2c_dense_2.h"
#include "WebModel_dense_70sc4.h"
#include "WebModel_dense_70tde.h"
#include "WebModel_dense_70udo.h"
#include "WebModel_dense_71vdy.h"
#include "WebModel_dense_69xdS.h"
#include "WebModel_dense_69Aem.h"
#include "WebModel_dense_70Bew.h"
#include "WebModel_dense_69DeQ.h"
#include "WebModel_dense_69Hfu.h"

namespace ap_rtl {

struct WebModel : public sc_module {
    // Port declarations 36
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<15> > dense_69_input_input_array_address0;
    sc_out< sc_logic > dense_69_input_input_array_ce0;
    sc_in< sc_lv<32> > dense_69_input_input_array_q0;
    sc_in< sc_lv<64> > dense_69_input_input_ndim;
    sc_in< sc_lv<64> > dense_69_input_input_numel;
    sc_out< sc_lv<3> > dense_69_input_input_shape_address0;
    sc_out< sc_logic > dense_69_input_input_shape_ce0;
    sc_in< sc_lv<64> > dense_69_input_input_shape_q0;
    sc_out< sc_lv<15> > dense_71_output_array_address0;
    sc_out< sc_logic > dense_71_output_array_ce0;
    sc_out< sc_logic > dense_71_output_array_we0;
    sc_out< sc_lv<32> > dense_71_output_array_d0;
    sc_in< sc_lv<32> > dense_71_output_array_q0;
    sc_out< sc_lv<15> > dense_71_output_array_address1;
    sc_out< sc_logic > dense_71_output_array_ce1;
    sc_out< sc_logic > dense_71_output_array_we1;
    sc_out< sc_lv<32> > dense_71_output_array_d1;
    sc_in< sc_lv<32> > dense_71_output_array_q1;
    sc_in< sc_lv<64> > dense_71_output_ndim;
    sc_in< sc_lv<64> > dense_71_output_numel;
    sc_out< sc_lv<3> > dense_71_output_shape_address0;
    sc_out< sc_logic > dense_71_output_shape_ce0;
    sc_out< sc_logic > dense_71_output_shape_we0;
    sc_out< sc_lv<64> > dense_71_output_shape_d0;
    sc_in< sc_lv<64> > dense_71_output_shape_q0;
    sc_out< sc_lv<3> > dense_71_output_shape_address1;
    sc_out< sc_logic > dense_71_output_shape_ce1;
    sc_out< sc_logic > dense_71_output_shape_we1;
    sc_out< sc_lv<64> > dense_71_output_shape_d1;
    sc_in< sc_lv<64> > dense_71_output_shape_q1;
    sc_signal< sc_lv<64> > ap_var_for_const0;
    sc_signal< sc_lv<32> > ap_var_for_const1;


    // Module declarations
    WebModel(sc_module_name name);
    SC_HAS_PROCESS(WebModel);

    ~WebModel();

    sc_trace_file* mVcdFile;

    ofstream mHdltvinHandle;
    ofstream mHdltvoutHandle;
    WebModel_dense_70sc4* dense_70_output_arra_U;
    WebModel_dense_70tde* dense_70_bias_array_U;
    WebModel_dense_70udo* dense_70_bias_array_2_U;
    WebModel_dense_71vdy* dense_71_kernel_arra_U;
    WebModel_dense_70udo* dense_71_kernel_arra_0_U;
    WebModel_dense_69xdS* dense_69_bias_array_U;
    WebModel_dense_70udo* dense_69_bias_array_5_U;
    WebModel_dense_70sc4* dense_69_output_arra_U;
    WebModel_dense_69Aem* dense_69_kernel_arra_U;
    WebModel_dense_70Bew* dense_70_kernel_arra_U;
    WebModel_dense_70udo* dense_70_kernel_arra_1_U;
    WebModel_dense_69DeQ* dense_69_kernel_arra_3_U;
    WebModel_dense_69DeQ* dense_69_kernel_arra_2_U;
    WebModel_dense_69DeQ* dense_69_kernel_arra_1_U;
    WebModel_dense_69DeQ* dense_69_kernel_arra_4_U;
    WebModel_dense_69Hfu* dense_69_kernel_shap_U;
    WebModel_dense_69Hfu* dense_69_output_shap_U;
    WebModel_dense_69Hfu* dense_70_kernel_shap_U;
    WebModel_dense_69Hfu* dense_70_output_shap_U;
    WebModel_dense_69Hfu* dense_71_kernel_shap_U;
    WebModel_dense_70udo* dense_71_bias_array_U;
    k2c_dense* grp_k2c_dense_fu_569;
    k2c_dense_1* grp_k2c_dense_1_fu_594;
    k2c_dense_2* grp_k2c_dense_2_fu_618;
    sc_signal< sc_lv<17> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<15> > dense_70_output_arra_address0;
    sc_signal< sc_logic > dense_70_output_arra_ce0;
    sc_signal< sc_logic > dense_70_output_arra_we0;
    sc_signal< sc_lv<32> > dense_70_output_arra_d0;
    sc_signal< sc_lv<32> > dense_70_output_arra_q0;
    sc_signal< sc_logic > dense_70_output_arra_ce1;
    sc_signal< sc_logic > dense_70_output_arra_we1;
    sc_signal< sc_lv<6> > dense_70_bias_array_address0;
    sc_signal< sc_logic > dense_70_bias_array_ce0;
    sc_signal< sc_lv<32> > dense_70_bias_array_q0;
    sc_signal< sc_lv<15> > dense_70_bias_array_2_address0;
    sc_signal< sc_logic > dense_70_bias_array_2_ce0;
    sc_signal< sc_logic > dense_70_bias_array_2_we0;
    sc_signal< sc_lv<32> > dense_70_bias_array_2_q0;
    sc_signal< sc_lv<6> > dense_71_kernel_arra_address0;
    sc_signal< sc_logic > dense_71_kernel_arra_ce0;
    sc_signal< sc_lv<32> > dense_71_kernel_arra_q0;
    sc_signal< sc_lv<15> > dense_71_kernel_arra_0_address0;
    sc_signal< sc_logic > dense_71_kernel_arra_0_ce0;
    sc_signal< sc_logic > dense_71_kernel_arra_0_we0;
    sc_signal< sc_lv<32> > dense_71_kernel_arra_0_q0;
    sc_signal< sc_lv<6> > dense_69_bias_array_address0;
    sc_signal< sc_logic > dense_69_bias_array_ce0;
    sc_signal< sc_lv<32> > dense_69_bias_array_q0;
    sc_signal< sc_lv<15> > dense_69_bias_array_5_address0;
    sc_signal< sc_logic > dense_69_bias_array_5_ce0;
    sc_signal< sc_logic > dense_69_bias_array_5_we0;
    sc_signal< sc_lv<32> > dense_69_bias_array_5_q0;
    sc_signal< sc_lv<15> > dense_69_output_arra_address0;
    sc_signal< sc_logic > dense_69_output_arra_ce0;
    sc_signal< sc_logic > dense_69_output_arra_we0;
    sc_signal< sc_lv<32> > dense_69_output_arra_d0;
    sc_signal< sc_lv<32> > dense_69_output_arra_q0;
    sc_signal< sc_logic > dense_69_output_arra_ce1;
    sc_signal< sc_logic > dense_69_output_arra_we1;
    sc_signal< sc_lv<64> > dense_69_output_ndim;
    sc_signal< sc_lv<64> > dense_69_output_nume;
    sc_signal< sc_lv<15> > dense_69_kernel_arra_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_ce0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_q0;
    sc_signal< sc_lv<64> > dense_70_output_ndim;
    sc_signal< sc_lv<64> > dense_70_output_nume;
    sc_signal< sc_lv<12> > dense_70_kernel_arra_address0;
    sc_signal< sc_logic > dense_70_kernel_arra_ce0;
    sc_signal< sc_lv<32> > dense_70_kernel_arra_q0;
    sc_signal< sc_lv<15> > dense_70_kernel_arra_1_address0;
    sc_signal< sc_logic > dense_70_kernel_arra_1_ce0;
    sc_signal< sc_logic > dense_70_kernel_arra_1_we0;
    sc_signal< sc_lv<32> > dense_70_kernel_arra_1_q0;
    sc_signal< sc_lv<64> > dense_70_kernel_ndim;
    sc_signal< sc_lv<64> > dense_70_kernel_nume;
    sc_signal< sc_lv<64> > dense_70_bias_numel;
    sc_signal< sc_lv<64> > dense_71_kernel_ndim;
    sc_signal< sc_lv<64> > dense_71_kernel_nume;
    sc_signal< sc_lv<64> > dense_71_bias_numel;
    sc_signal< sc_lv<13> > dense_69_kernel_arra_3_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_3_ce0;
    sc_signal< sc_logic > dense_69_kernel_arra_3_we0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_3_q0;
    sc_signal< sc_lv<13> > dense_69_kernel_arra_2_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_2_ce0;
    sc_signal< sc_logic > dense_69_kernel_arra_2_we0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_2_q0;
    sc_signal< sc_lv<13> > dense_69_kernel_arra_1_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_1_ce0;
    sc_signal< sc_logic > dense_69_kernel_arra_1_we0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_1_q0;
    sc_signal< sc_lv<13> > dense_69_kernel_arra_4_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_4_ce0;
    sc_signal< sc_logic > dense_69_kernel_arra_4_we0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_4_q0;
    sc_signal< sc_lv<3> > dense_69_kernel_shap_address0;
    sc_signal< sc_logic > dense_69_kernel_shap_ce0;
    sc_signal< sc_logic > dense_69_kernel_shap_we0;
    sc_signal< sc_lv<64> > dense_69_kernel_shap_d0;
    sc_signal< sc_lv<64> > dense_69_kernel_shap_q0;
    sc_signal< sc_lv<3> > dense_69_kernel_shap_address1;
    sc_signal< sc_logic > dense_69_kernel_shap_ce1;
    sc_signal< sc_logic > dense_69_kernel_shap_we1;
    sc_signal< sc_lv<3> > dense_69_output_shap_address0;
    sc_signal< sc_logic > dense_69_output_shap_ce0;
    sc_signal< sc_logic > dense_69_output_shap_we0;
    sc_signal< sc_lv<64> > dense_69_output_shap_d0;
    sc_signal< sc_lv<64> > dense_69_output_shap_q0;
    sc_signal< sc_lv<3> > dense_69_output_shap_address1;
    sc_signal< sc_logic > dense_69_output_shap_ce1;
    sc_signal< sc_logic > dense_69_output_shap_we1;
    sc_signal< sc_lv<3> > dense_70_kernel_shap_address0;
    sc_signal< sc_logic > dense_70_kernel_shap_ce0;
    sc_signal< sc_logic > dense_70_kernel_shap_we0;
    sc_signal< sc_lv<64> > dense_70_kernel_shap_d0;
    sc_signal< sc_lv<64> > dense_70_kernel_shap_q0;
    sc_signal< sc_lv<3> > dense_70_kernel_shap_address1;
    sc_signal< sc_logic > dense_70_kernel_shap_ce1;
    sc_signal< sc_logic > dense_70_kernel_shap_we1;
    sc_signal< sc_lv<3> > dense_70_output_shap_address0;
    sc_signal< sc_logic > dense_70_output_shap_ce0;
    sc_signal< sc_logic > dense_70_output_shap_we0;
    sc_signal< sc_lv<64> > dense_70_output_shap_d0;
    sc_signal< sc_lv<64> > dense_70_output_shap_q0;
    sc_signal< sc_lv<3> > dense_70_output_shap_address1;
    sc_signal< sc_logic > dense_70_output_shap_ce1;
    sc_signal< sc_logic > dense_70_output_shap_we1;
    sc_signal< sc_lv<3> > dense_71_kernel_shap_address0;
    sc_signal< sc_logic > dense_71_kernel_shap_ce0;
    sc_signal< sc_logic > dense_71_kernel_shap_we0;
    sc_signal< sc_lv<64> > dense_71_kernel_shap_d0;
    sc_signal< sc_lv<64> > dense_71_kernel_shap_q0;
    sc_signal< sc_lv<3> > dense_71_kernel_shap_address1;
    sc_signal< sc_logic > dense_71_kernel_shap_ce1;
    sc_signal< sc_logic > dense_71_kernel_shap_we1;
    sc_signal< sc_lv<15> > dense_71_bias_array_address0;
    sc_signal< sc_logic > dense_71_bias_array_ce0;
    sc_signal< sc_logic > dense_71_bias_array_we0;
    sc_signal< sc_lv<32> > dense_71_bias_array_q0;
    sc_signal< sc_lv<7> > b4_reg_536;
    sc_signal< sc_lv<15> > b2_reg_547;
    sc_signal< sc_lv<13> > b5_reg_558;
    sc_signal< sc_lv<64> > reg_652;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<1> > tmp_fu_658_p2;
    sc_signal< sc_lv<1> > tmp_reg_837;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<7> > b4_1_fu_664_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > b4_cast3_fu_670_p1;
    sc_signal< sc_lv<64> > b4_cast3_reg_846;
    sc_signal< sc_lv<1> > tmp_s_fu_689_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp1_stage0;
    sc_signal< bool > ap_block_state7_pp1_stage0_iter0;
    sc_signal< bool > ap_block_state8_pp1_stage0_iter1;
    sc_signal< bool > ap_block_pp1_stage0_11001;
    sc_signal< sc_lv<15> > b2_1_fu_695_p2;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter0;
    sc_signal< sc_lv<2> > tmp_80_fu_706_p1;
    sc_signal< sc_lv<2> > tmp_80_reg_884;
    sc_signal< sc_lv<13> > newIndex_reg_888;
    sc_signal< sc_lv<1> > tmp_13_fu_739_p2;
    sc_signal< sc_lv<1> > tmp_13_reg_893;
    sc_signal< sc_logic > ap_CS_fsm_pp2_stage0;
    sc_signal< bool > ap_block_state12_pp2_stage0_iter0;
    sc_signal< bool > ap_block_state13_pp2_stage0_iter1;
    sc_signal< bool > ap_block_pp2_stage0_11001;
    sc_signal< sc_lv<13> > b5_1_fu_745_p2;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter0;
    sc_signal< sc_lv<64> > b5_cast1_fu_751_p1;
    sc_signal< sc_lv<64> > b5_cast1_reg_902;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< bool > ap_block_pp1_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp1_exit_iter0_state7;
    sc_signal< sc_logic > ap_enable_reg_pp1_iter1;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< bool > ap_block_pp2_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp2_exit_iter0_state12;
    sc_signal< sc_logic > ap_enable_reg_pp2_iter1;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_ap_start;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_ap_done;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_ap_idle;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_ap_ready;
    sc_signal< sc_lv<15> > grp_k2c_dense_fu_569_output_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_output_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_output_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dense_fu_569_output_array_d0;
    sc_signal< sc_lv<15> > grp_k2c_dense_fu_569_output_array_address1;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_output_array_ce1;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_output_array_we1;
    sc_signal< sc_lv<32> > grp_k2c_dense_fu_569_output_array_d1;
    sc_signal< sc_lv<15> > grp_k2c_dense_fu_569_input_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_input_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_fu_569_input_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_input_shape_ce0;
    sc_signal< sc_lv<15> > grp_k2c_dense_fu_569_kernel_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_kernel_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_fu_569_kernel_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_kernel_shape_ce0;
    sc_signal< sc_lv<15> > grp_k2c_dense_fu_569_bias_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_bias_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_ap_start;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_ap_done;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_ap_idle;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_ap_ready;
    sc_signal< sc_lv<15> > grp_k2c_dense_1_fu_594_output_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_output_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_output_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dense_1_fu_594_output_array_d0;
    sc_signal< sc_lv<15> > grp_k2c_dense_1_fu_594_output_array_address1;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_output_array_ce1;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_output_array_we1;
    sc_signal< sc_lv<32> > grp_k2c_dense_1_fu_594_output_array_d1;
    sc_signal< sc_lv<15> > grp_k2c_dense_1_fu_594_input_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_input_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_1_fu_594_input_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_input_shape_ce0;
    sc_signal< sc_lv<15> > grp_k2c_dense_1_fu_594_kernel_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_kernel_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_1_fu_594_kernel_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_kernel_shape_ce0;
    sc_signal< sc_lv<15> > grp_k2c_dense_1_fu_594_bias_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_bias_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_ap_start;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_ap_done;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_ap_idle;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_ap_ready;
    sc_signal< sc_lv<15> > grp_k2c_dense_2_fu_618_output_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_output_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_output_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dense_2_fu_618_output_array_d0;
    sc_signal< sc_lv<15> > grp_k2c_dense_2_fu_618_output_array_address1;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_output_array_ce1;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_output_array_we1;
    sc_signal< sc_lv<32> > grp_k2c_dense_2_fu_618_output_array_d1;
    sc_signal< sc_lv<15> > grp_k2c_dense_2_fu_618_input_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_input_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_2_fu_618_input_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_input_shape_ce0;
    sc_signal< sc_lv<13> > grp_k2c_dense_2_fu_618_kernel_array_0_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_kernel_array_0_ce0;
    sc_signal< sc_lv<13> > grp_k2c_dense_2_fu_618_kernel_array_1_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_kernel_array_1_ce0;
    sc_signal< sc_lv<13> > grp_k2c_dense_2_fu_618_kernel_array_2_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_kernel_array_2_ce0;
    sc_signal< sc_lv<13> > grp_k2c_dense_2_fu_618_kernel_array_3_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_kernel_array_3_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_2_fu_618_kernel_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_kernel_shape_ce0;
    sc_signal< sc_lv<15> > grp_k2c_dense_2_fu_618_bias_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_bias_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_fu_569_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_594_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_618_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > b2_cast2_fu_701_p1;
    sc_signal< bool > ap_block_pp1_stage0;
    sc_signal< sc_lv<64> > newIndex_cast_fu_720_p1;
    sc_signal< bool > ap_block_pp2_stage0;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<17> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_logic > ap_idle_pp1;
    sc_signal< sc_logic > ap_enable_pp1;
    sc_signal< sc_logic > ap_idle_pp2;
    sc_signal< sc_logic > ap_enable_pp2;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<17> ap_ST_fsm_state1;
    static const sc_lv<17> ap_ST_fsm_pp0_stage0;
    static const sc_lv<17> ap_ST_fsm_state4;
    static const sc_lv<17> ap_ST_fsm_state5;
    static const sc_lv<17> ap_ST_fsm_state6;
    static const sc_lv<17> ap_ST_fsm_pp1_stage0;
    static const sc_lv<17> ap_ST_fsm_state9;
    static const sc_lv<17> ap_ST_fsm_state10;
    static const sc_lv<17> ap_ST_fsm_state11;
    static const sc_lv<17> ap_ST_fsm_pp2_stage0;
    static const sc_lv<17> ap_ST_fsm_state14;
    static const sc_lv<17> ap_ST_fsm_state15;
    static const sc_lv<17> ap_ST_fsm_state16;
    static const sc_lv<17> ap_ST_fsm_state17;
    static const sc_lv<17> ap_ST_fsm_state18;
    static const sc_lv<17> ap_ST_fsm_state19;
    static const sc_lv<17> ap_ST_fsm_state20;
    static const sc_lv<32> ap_const_lv32_0;
    static const bool ap_const_boolean_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<64> ap_const_lv64_40;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<64> ap_const_lv64_1000;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<2> ap_const_lv2_2;
    static const sc_lv<2> ap_const_lv2_1;
    static const sc_lv<2> ap_const_lv2_0;
    static const sc_lv<2> ap_const_lv2_3;
    static const sc_lv<64> ap_const_lv64_18F;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_3E7A56E6;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<15> ap_const_lv15_63C0;
    static const sc_lv<15> ap_const_lv15_1;
    static const sc_lv<13> ap_const_lv13_1000;
    static const sc_lv<13> ap_const_lv13_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp1_stage0();
    void thread_ap_CS_fsm_pp2_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state9();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp1_stage0();
    void thread_ap_block_pp1_stage0_11001();
    void thread_ap_block_pp1_stage0_subdone();
    void thread_ap_block_pp2_stage0();
    void thread_ap_block_pp2_stage0_11001();
    void thread_ap_block_pp2_stage0_subdone();
    void thread_ap_block_state12_pp2_stage0_iter0();
    void thread_ap_block_state13_pp2_stage0_iter1();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state7_pp1_stage0_iter0();
    void thread_ap_block_state8_pp1_stage0_iter1();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_condition_pp1_exit_iter0_state7();
    void thread_ap_condition_pp2_exit_iter0_state12();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_enable_pp1();
    void thread_ap_enable_pp2();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_idle_pp1();
    void thread_ap_idle_pp2();
    void thread_ap_ready();
    void thread_b2_1_fu_695_p2();
    void thread_b2_cast2_fu_701_p1();
    void thread_b4_1_fu_664_p2();
    void thread_b4_cast3_fu_670_p1();
    void thread_b5_1_fu_745_p2();
    void thread_b5_cast1_fu_751_p1();
    void thread_dense_69_bias_array_5_address0();
    void thread_dense_69_bias_array_5_ce0();
    void thread_dense_69_bias_array_5_we0();
    void thread_dense_69_bias_array_address0();
    void thread_dense_69_bias_array_ce0();
    void thread_dense_69_input_input_array_address0();
    void thread_dense_69_input_input_array_ce0();
    void thread_dense_69_input_input_shape_address0();
    void thread_dense_69_input_input_shape_ce0();
    void thread_dense_69_kernel_arra_1_address0();
    void thread_dense_69_kernel_arra_1_ce0();
    void thread_dense_69_kernel_arra_1_we0();
    void thread_dense_69_kernel_arra_2_address0();
    void thread_dense_69_kernel_arra_2_ce0();
    void thread_dense_69_kernel_arra_2_we0();
    void thread_dense_69_kernel_arra_3_address0();
    void thread_dense_69_kernel_arra_3_ce0();
    void thread_dense_69_kernel_arra_3_we0();
    void thread_dense_69_kernel_arra_4_address0();
    void thread_dense_69_kernel_arra_4_ce0();
    void thread_dense_69_kernel_arra_4_we0();
    void thread_dense_69_kernel_arra_address0();
    void thread_dense_69_kernel_arra_ce0();
    void thread_dense_69_kernel_shap_address0();
    void thread_dense_69_kernel_shap_address1();
    void thread_dense_69_kernel_shap_ce0();
    void thread_dense_69_kernel_shap_ce1();
    void thread_dense_69_kernel_shap_d0();
    void thread_dense_69_kernel_shap_we0();
    void thread_dense_69_kernel_shap_we1();
    void thread_dense_69_output_arra_address0();
    void thread_dense_69_output_arra_ce0();
    void thread_dense_69_output_arra_ce1();
    void thread_dense_69_output_arra_d0();
    void thread_dense_69_output_arra_we0();
    void thread_dense_69_output_arra_we1();
    void thread_dense_69_output_shap_address0();
    void thread_dense_69_output_shap_address1();
    void thread_dense_69_output_shap_ce0();
    void thread_dense_69_output_shap_ce1();
    void thread_dense_69_output_shap_d0();
    void thread_dense_69_output_shap_we0();
    void thread_dense_69_output_shap_we1();
    void thread_dense_70_bias_array_2_address0();
    void thread_dense_70_bias_array_2_ce0();
    void thread_dense_70_bias_array_2_we0();
    void thread_dense_70_bias_array_address0();
    void thread_dense_70_bias_array_ce0();
    void thread_dense_70_kernel_arra_1_address0();
    void thread_dense_70_kernel_arra_1_ce0();
    void thread_dense_70_kernel_arra_1_we0();
    void thread_dense_70_kernel_arra_address0();
    void thread_dense_70_kernel_arra_ce0();
    void thread_dense_70_kernel_shap_address0();
    void thread_dense_70_kernel_shap_address1();
    void thread_dense_70_kernel_shap_ce0();
    void thread_dense_70_kernel_shap_ce1();
    void thread_dense_70_kernel_shap_d0();
    void thread_dense_70_kernel_shap_we0();
    void thread_dense_70_kernel_shap_we1();
    void thread_dense_70_output_arra_address0();
    void thread_dense_70_output_arra_ce0();
    void thread_dense_70_output_arra_ce1();
    void thread_dense_70_output_arra_d0();
    void thread_dense_70_output_arra_we0();
    void thread_dense_70_output_arra_we1();
    void thread_dense_70_output_shap_address0();
    void thread_dense_70_output_shap_address1();
    void thread_dense_70_output_shap_ce0();
    void thread_dense_70_output_shap_ce1();
    void thread_dense_70_output_shap_d0();
    void thread_dense_70_output_shap_we0();
    void thread_dense_70_output_shap_we1();
    void thread_dense_71_bias_array_address0();
    void thread_dense_71_bias_array_ce0();
    void thread_dense_71_bias_array_we0();
    void thread_dense_71_kernel_arra_0_address0();
    void thread_dense_71_kernel_arra_0_ce0();
    void thread_dense_71_kernel_arra_0_we0();
    void thread_dense_71_kernel_arra_address0();
    void thread_dense_71_kernel_arra_ce0();
    void thread_dense_71_kernel_shap_address0();
    void thread_dense_71_kernel_shap_address1();
    void thread_dense_71_kernel_shap_ce0();
    void thread_dense_71_kernel_shap_ce1();
    void thread_dense_71_kernel_shap_d0();
    void thread_dense_71_kernel_shap_we0();
    void thread_dense_71_kernel_shap_we1();
    void thread_dense_71_output_array_address0();
    void thread_dense_71_output_array_address1();
    void thread_dense_71_output_array_ce0();
    void thread_dense_71_output_array_ce1();
    void thread_dense_71_output_array_d0();
    void thread_dense_71_output_array_d1();
    void thread_dense_71_output_array_we0();
    void thread_dense_71_output_array_we1();
    void thread_dense_71_output_shape_address0();
    void thread_dense_71_output_shape_address1();
    void thread_dense_71_output_shape_ce0();
    void thread_dense_71_output_shape_ce1();
    void thread_dense_71_output_shape_d0();
    void thread_dense_71_output_shape_d1();
    void thread_dense_71_output_shape_we0();
    void thread_dense_71_output_shape_we1();
    void thread_grp_k2c_dense_1_fu_594_ap_start();
    void thread_grp_k2c_dense_2_fu_618_ap_start();
    void thread_grp_k2c_dense_fu_569_ap_start();
    void thread_newIndex_cast_fu_720_p1();
    void thread_tmp_13_fu_739_p2();
    void thread_tmp_80_fu_706_p1();
    void thread_tmp_fu_658_p2();
    void thread_tmp_s_fu_689_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif
