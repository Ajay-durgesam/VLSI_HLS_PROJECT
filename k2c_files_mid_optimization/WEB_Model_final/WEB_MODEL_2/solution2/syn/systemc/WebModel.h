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
#include "WebModel_dense_69wdI.h"
#include "WebModel_dense_69xdS.h"
#include "WebModel_dense_69yd2.h"
#include "WebModel_dense_69zec.h"
#include "WebModel_dense_69Aem.h"
#include "WebModel_dense_69Bew.h"
#include "WebModel_dense_69CeG.h"
#include "WebModel_dense_69DeQ.h"
#include "WebModel_dense_69Ee0.h"
#include "WebModel_dense_69Ffa.h"
#include "WebModel_dense_69Gfk.h"
#include "WebModel_dense_70JfO.h"
#include "WebModel_dense_70Lf8.h"
#include "WebModel_dense_70Mgi.h"
#include "WebModel_dense_70Ngs.h"
#include "WebModel_dense_70OgC.h"
#include "WebModel_dense_70PgM.h"
#include "WebModel_dense_70QgW.h"
#include "WebModel_dense_70Rg6.h"
#include "WebModel_dense_70Shg.h"
#include "WebModel_dense_71UhA.h"
#include "WebModel_dense_69WhU.h"

namespace ap_rtl {

struct WebModel : public sc_module {
    // Port declarations 31
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
    WebModel_dense_69wdI* dense_69_output_arra_U;
    WebModel_dense_69xdS* dense_69_kernel_arra_U;
    WebModel_dense_69yd2* dense_69_kernel_arra_7_U;
    WebModel_dense_69zec* dense_69_kernel_arra_6_U;
    WebModel_dense_69Aem* dense_69_kernel_arra_5_U;
    WebModel_dense_69Bew* dense_69_kernel_arra_4_U;
    WebModel_dense_69CeG* dense_69_kernel_arra_3_U;
    WebModel_dense_69DeQ* dense_69_kernel_arra_2_U;
    WebModel_dense_69Ee0* dense_69_kernel_arra_1_U;
    WebModel_dense_69Ffa* dense_69_kernel_arra_8_U;
    WebModel_dense_69Gfk* dense_69_bias_array_U;
    WebModel_dense_69Ffa* dense_69_bias_array_9_U;
    WebModel_dense_69Ffa* dense_70_output_arra_U;
    WebModel_dense_70JfO* dense_70_kernel_arra_U;
    WebModel_dense_69Ffa* dense_70_kernel_arra_1_U;
    WebModel_dense_70Lf8* dense_70_bias_array_7_U;
    WebModel_dense_70Mgi* dense_70_bias_array_s_U;
    WebModel_dense_70Ngs* dense_70_bias_array_1_U;
    WebModel_dense_70OgC* dense_70_bias_array_2_U;
    WebModel_dense_70PgM* dense_70_bias_array_3_U;
    WebModel_dense_70QgW* dense_70_bias_array_4_U;
    WebModel_dense_70Rg6* dense_70_bias_array_5_U;
    WebModel_dense_70Shg* dense_70_bias_array_6_U;
    WebModel_dense_69Ffa* dense_70_bias_array_U;
    WebModel_dense_71UhA* dense_71_kernel_arra_U;
    WebModel_dense_69Ffa* dense_71_kernel_arra_0_U;
    WebModel_dense_69WhU* dense_69_kernel_shap_U;
    WebModel_dense_69WhU* dense_69_output_shap_U;
    WebModel_dense_69WhU* dense_70_kernel_shap_U;
    WebModel_dense_69WhU* dense_70_output_shap_U;
    WebModel_dense_69WhU* dense_71_kernel_shap_U;
    WebModel_dense_69Ffa* dense_71_bias_array_U;
    k2c_dense* grp_k2c_dense_fu_765;
    k2c_dense_1* grp_k2c_dense_1_fu_790;
    k2c_dense_2* grp_k2c_dense_2_fu_814;
    sc_signal< sc_lv<26> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<15> > dense_69_output_arra_address0;
    sc_signal< sc_logic > dense_69_output_arra_ce0;
    sc_signal< sc_logic > dense_69_output_arra_we0;
    sc_signal< sc_lv<32> > dense_69_output_arra_d0;
    sc_signal< sc_lv<32> > dense_69_output_arra_q0;
    sc_signal< sc_logic > dense_69_output_arra_ce1;
    sc_signal< sc_logic > dense_69_output_arra_we1;
    sc_signal< sc_lv<64> > dense_69_output_ndim;
    sc_signal< sc_lv<64> > dense_69_output_nume;
    sc_signal< sc_lv<12> > dense_69_kernel_arra_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_ce0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_q0;
    sc_signal< sc_lv<12> > dense_69_kernel_arra_7_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_7_ce0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_7_q0;
    sc_signal< sc_lv<12> > dense_69_kernel_arra_6_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_6_ce0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_6_q0;
    sc_signal< sc_lv<12> > dense_69_kernel_arra_5_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_5_ce0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_5_q0;
    sc_signal< sc_lv<12> > dense_69_kernel_arra_4_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_4_ce0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_4_q0;
    sc_signal< sc_lv<12> > dense_69_kernel_arra_3_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_3_ce0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_3_q0;
    sc_signal< sc_lv<12> > dense_69_kernel_arra_2_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_2_ce0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_2_q0;
    sc_signal< sc_lv<12> > dense_69_kernel_arra_1_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_1_ce0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_1_q0;
    sc_signal< sc_lv<15> > dense_69_kernel_arra_8_address0;
    sc_signal< sc_logic > dense_69_kernel_arra_8_ce0;
    sc_signal< sc_logic > dense_69_kernel_arra_8_we0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_8_d0;
    sc_signal< sc_lv<32> > dense_69_kernel_arra_8_q0;
    sc_signal< sc_lv<6> > dense_69_bias_array_address0;
    sc_signal< sc_logic > dense_69_bias_array_ce0;
    sc_signal< sc_lv<32> > dense_69_bias_array_q0;
    sc_signal< sc_lv<15> > dense_69_bias_array_9_address0;
    sc_signal< sc_logic > dense_69_bias_array_9_ce0;
    sc_signal< sc_logic > dense_69_bias_array_9_we0;
    sc_signal< sc_lv<32> > dense_69_bias_array_9_q0;
    sc_signal< sc_lv<15> > dense_70_output_arra_address0;
    sc_signal< sc_logic > dense_70_output_arra_ce0;
    sc_signal< sc_logic > dense_70_output_arra_we0;
    sc_signal< sc_lv<32> > dense_70_output_arra_d0;
    sc_signal< sc_lv<32> > dense_70_output_arra_q0;
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
    sc_signal< sc_lv<3> > dense_70_bias_array_7_address0;
    sc_signal< sc_logic > dense_70_bias_array_7_ce0;
    sc_signal< sc_lv<32> > dense_70_bias_array_7_q0;
    sc_signal< sc_lv<3> > dense_70_bias_array_s_address0;
    sc_signal< sc_logic > dense_70_bias_array_s_ce0;
    sc_signal< sc_lv<32> > dense_70_bias_array_s_q0;
    sc_signal< sc_lv<3> > dense_70_bias_array_1_address0;
    sc_signal< sc_logic > dense_70_bias_array_1_ce0;
    sc_signal< sc_lv<32> > dense_70_bias_array_1_q0;
    sc_signal< sc_lv<3> > dense_70_bias_array_2_address0;
    sc_signal< sc_logic > dense_70_bias_array_2_ce0;
    sc_signal< sc_lv<32> > dense_70_bias_array_2_q0;
    sc_signal< sc_lv<3> > dense_70_bias_array_3_address0;
    sc_signal< sc_logic > dense_70_bias_array_3_ce0;
    sc_signal< sc_lv<32> > dense_70_bias_array_3_q0;
    sc_signal< sc_lv<3> > dense_70_bias_array_4_address0;
    sc_signal< sc_logic > dense_70_bias_array_4_ce0;
    sc_signal< sc_lv<32> > dense_70_bias_array_4_q0;
    sc_signal< sc_lv<3> > dense_70_bias_array_5_address0;
    sc_signal< sc_logic > dense_70_bias_array_5_ce0;
    sc_signal< sc_lv<32> > dense_70_bias_array_5_q0;
    sc_signal< sc_lv<3> > dense_70_bias_array_6_address0;
    sc_signal< sc_logic > dense_70_bias_array_6_ce0;
    sc_signal< sc_lv<32> > dense_70_bias_array_6_q0;
    sc_signal< sc_lv<15> > dense_70_bias_array_address0;
    sc_signal< sc_logic > dense_70_bias_array_ce0;
    sc_signal< sc_logic > dense_70_bias_array_we0;
    sc_signal< sc_lv<32> > dense_70_bias_array_d0;
    sc_signal< sc_lv<32> > dense_70_bias_array_q0;
    sc_signal< sc_lv<64> > dense_70_bias_numel;
    sc_signal< sc_lv<6> > dense_71_kernel_arra_address0;
    sc_signal< sc_logic > dense_71_kernel_arra_ce0;
    sc_signal< sc_lv<32> > dense_71_kernel_arra_q0;
    sc_signal< sc_lv<15> > dense_71_kernel_arra_0_address0;
    sc_signal< sc_logic > dense_71_kernel_arra_0_ce0;
    sc_signal< sc_logic > dense_71_kernel_arra_0_we0;
    sc_signal< sc_lv<32> > dense_71_kernel_arra_0_q0;
    sc_signal< sc_lv<64> > dense_71_kernel_ndim;
    sc_signal< sc_lv<64> > dense_71_kernel_nume;
    sc_signal< sc_lv<64> > dense_71_bias_numel;
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
    sc_signal< sc_lv<64> > reg_842;
    sc_signal< sc_logic > ap_CS_fsm_state23;
    sc_signal< sc_logic > ap_CS_fsm_state25;
    sc_signal< sc_lv<7> > b1_1_fu_859_p2;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > b2_cast_fu_877_p1;
    sc_signal< sc_lv<64> > b2_cast_reg_1314;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<15> > b2_1_fu_887_p2;
    sc_signal< sc_lv<15> > b2_1_reg_1322;
    sc_signal< sc_lv<3> > tmp_70_fu_893_p1;
    sc_signal< sc_lv<3> > tmp_70_reg_1327;
    sc_signal< sc_lv<1> > tmp_s_fu_881_p2;
    sc_signal< sc_lv<64> > b3_cast_fu_1011_p1;
    sc_signal< sc_lv<64> > b3_cast_reg_1378;
    sc_signal< sc_logic > ap_CS_fsm_state9;
    sc_signal< sc_lv<7> > b3_1_fu_1022_p2;
    sc_signal< sc_lv<7> > b3_1_reg_1386;
    sc_signal< sc_lv<1> > tmp_8_fu_1016_p2;
    sc_signal< sc_lv<7> > b4_1_fu_1039_p2;
    sc_signal< sc_logic > ap_CS_fsm_state11;
    sc_signal< sc_lv<64> > b5_cast_fu_1057_p1;
    sc_signal< sc_lv<64> > b5_cast_reg_1404;
    sc_signal< sc_logic > ap_CS_fsm_state14;
    sc_signal< sc_lv<13> > b5_1_fu_1068_p2;
    sc_signal< sc_lv<13> > b5_1_reg_1412;
    sc_signal< sc_lv<1> > tmp_3_fu_1062_p2;
    sc_signal< sc_lv<64> > b6_cast_fu_1086_p1;
    sc_signal< sc_lv<64> > b6_cast_reg_1422;
    sc_signal< sc_logic > ap_CS_fsm_state18;
    sc_signal< sc_lv<7> > b6_1_fu_1096_p2;
    sc_signal< sc_lv<7> > b6_1_reg_1430;
    sc_signal< sc_lv<3> > tmp_71_fu_1102_p1;
    sc_signal< sc_lv<3> > tmp_71_reg_1435;
    sc_signal< sc_lv<1> > tmp_4_fu_1090_p2;
    sc_signal< sc_lv<64> > b7_cast_fu_1226_p1;
    sc_signal< sc_lv<64> > b7_cast_reg_1486;
    sc_signal< sc_logic > ap_CS_fsm_state20;
    sc_signal< sc_lv<7> > b7_1_fu_1237_p2;
    sc_signal< sc_lv<7> > b7_1_reg_1494;
    sc_signal< sc_lv<1> > tmp_6_fu_1231_p2;
    sc_signal< sc_logic > grp_k2c_dense_fu_765_ap_start;
    sc_signal< sc_logic > grp_k2c_dense_fu_765_ap_done;
    sc_signal< sc_logic > grp_k2c_dense_fu_765_ap_idle;
    sc_signal< sc_logic > grp_k2c_dense_fu_765_ap_ready;
    sc_signal< sc_lv<15> > grp_k2c_dense_fu_765_output_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_765_output_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_fu_765_output_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dense_fu_765_output_array_d0;
    sc_signal< sc_lv<15> > grp_k2c_dense_fu_765_input_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_765_input_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_fu_765_input_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_765_input_shape_ce0;
    sc_signal< sc_lv<15> > grp_k2c_dense_fu_765_kernel_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_765_kernel_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_fu_765_kernel_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_765_kernel_shape_ce0;
    sc_signal< sc_lv<15> > grp_k2c_dense_fu_765_bias_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_fu_765_bias_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_790_ap_start;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_790_ap_done;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_790_ap_idle;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_790_ap_ready;
    sc_signal< sc_lv<15> > grp_k2c_dense_1_fu_790_output_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_790_output_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_790_output_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dense_1_fu_790_output_array_d0;
    sc_signal< sc_lv<15> > grp_k2c_dense_1_fu_790_input_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_790_input_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_1_fu_790_input_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_790_input_shape_ce0;
    sc_signal< sc_lv<15> > grp_k2c_dense_1_fu_790_kernel_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_790_kernel_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_1_fu_790_kernel_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_790_kernel_shape_ce0;
    sc_signal< sc_lv<15> > grp_k2c_dense_1_fu_790_bias_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_790_bias_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_ap_start;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_ap_done;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_ap_idle;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_ap_ready;
    sc_signal< sc_lv<15> > grp_k2c_dense_2_fu_814_output_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_output_array_ce0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_output_array_we0;
    sc_signal< sc_lv<32> > grp_k2c_dense_2_fu_814_output_array_d0;
    sc_signal< sc_lv<15> > grp_k2c_dense_2_fu_814_output_array_address1;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_output_array_ce1;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_output_array_we1;
    sc_signal< sc_lv<32> > grp_k2c_dense_2_fu_814_output_array_d1;
    sc_signal< sc_lv<15> > grp_k2c_dense_2_fu_814_input_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_input_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_2_fu_814_input_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_input_shape_ce0;
    sc_signal< sc_lv<15> > grp_k2c_dense_2_fu_814_kernel_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_kernel_array_ce0;
    sc_signal< sc_lv<3> > grp_k2c_dense_2_fu_814_kernel_shape_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_kernel_shape_ce0;
    sc_signal< sc_lv<15> > grp_k2c_dense_2_fu_814_bias_array_address0;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_bias_array_ce0;
    sc_signal< sc_lv<7> > b1_reg_688;
    sc_signal< sc_lv<1> > tmp_fu_853_p2;
    sc_signal< sc_lv<15> > b2_reg_699;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<7> > b3_reg_710;
    sc_signal< sc_logic > ap_CS_fsm_state8;
    sc_signal< sc_logic > ap_CS_fsm_state10;
    sc_signal< sc_lv<7> > b4_reg_721;
    sc_signal< sc_lv<1> > tmp_9_fu_1033_p2;
    sc_signal< sc_lv<13> > b5_reg_732;
    sc_signal< sc_logic > ap_CS_fsm_state13;
    sc_signal< sc_logic > ap_CS_fsm_state15;
    sc_signal< sc_lv<7> > b6_reg_743;
    sc_signal< sc_logic > ap_CS_fsm_state17;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<7> > b7_reg_754;
    sc_signal< sc_logic > ap_CS_fsm_state21;
    sc_signal< sc_logic > grp_k2c_dense_fu_765_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state26;
    sc_signal< sc_logic > grp_k2c_dense_1_fu_790_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state24;
    sc_signal< sc_logic > grp_k2c_dense_2_fu_814_ap_start_reg;
    sc_signal< sc_logic > ap_CS_fsm_state22;
    sc_signal< sc_lv<64> > b1_cast_fu_848_p1;
    sc_signal< sc_lv<64> > newIndex_cast_fu_907_p1;
    sc_signal< sc_lv<64> > b4_cast_fu_1028_p1;
    sc_signal< sc_lv<64> > newIndex1_cast_fu_1116_p1;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_logic > ap_CS_fsm_state12;
    sc_signal< sc_logic > ap_CS_fsm_state16;
    sc_signal< sc_lv<12> > newIndex_fu_897_p4;
    sc_signal< sc_lv<1> > sel_tmp_i_fu_919_p2;
    sc_signal< sc_lv<1> > sel_tmp2_i_fu_932_p2;
    sc_signal< sc_lv<32> > sel_tmp1_i_fu_924_p3;
    sc_signal< sc_lv<1> > sel_tmp4_i_fu_945_p2;
    sc_signal< sc_lv<32> > sel_tmp3_i_fu_937_p3;
    sc_signal< sc_lv<1> > sel_tmp6_i_fu_958_p2;
    sc_signal< sc_lv<32> > sel_tmp5_i_fu_950_p3;
    sc_signal< sc_lv<1> > sel_tmp8_i_fu_971_p2;
    sc_signal< sc_lv<32> > sel_tmp7_i_fu_963_p3;
    sc_signal< sc_lv<1> > sel_tmp10_i_fu_984_p2;
    sc_signal< sc_lv<32> > sel_tmp9_i_fu_976_p3;
    sc_signal< sc_lv<1> > sel_tmp12_i_fu_997_p2;
    sc_signal< sc_lv<32> > sel_tmp11_i_fu_989_p3;
    sc_signal< sc_lv<4> > newIndex1_fu_1106_p4;
    sc_signal< sc_lv<1> > sel_tmp_i1_fu_1134_p2;
    sc_signal< sc_lv<1> > sel_tmp2_i3_fu_1147_p2;
    sc_signal< sc_lv<32> > sel_tmp1_i2_fu_1139_p3;
    sc_signal< sc_lv<1> > sel_tmp4_i5_fu_1160_p2;
    sc_signal< sc_lv<32> > sel_tmp3_i4_fu_1152_p3;
    sc_signal< sc_lv<1> > sel_tmp6_i7_fu_1173_p2;
    sc_signal< sc_lv<32> > sel_tmp5_i6_fu_1165_p3;
    sc_signal< sc_lv<1> > sel_tmp8_i9_fu_1186_p2;
    sc_signal< sc_lv<32> > sel_tmp7_i8_fu_1178_p3;
    sc_signal< sc_lv<1> > sel_tmp10_i1_fu_1199_p2;
    sc_signal< sc_lv<32> > sel_tmp9_i1_fu_1191_p3;
    sc_signal< sc_lv<1> > sel_tmp12_i1_fu_1212_p2;
    sc_signal< sc_lv<32> > sel_tmp11_i1_fu_1204_p3;
    sc_signal< sc_lv<26> > ap_NS_fsm;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<26> ap_ST_fsm_state1;
    static const sc_lv<26> ap_ST_fsm_state2;
    static const sc_lv<26> ap_ST_fsm_state3;
    static const sc_lv<26> ap_ST_fsm_state4;
    static const sc_lv<26> ap_ST_fsm_state5;
    static const sc_lv<26> ap_ST_fsm_state6;
    static const sc_lv<26> ap_ST_fsm_state7;
    static const sc_lv<26> ap_ST_fsm_state8;
    static const sc_lv<26> ap_ST_fsm_state9;
    static const sc_lv<26> ap_ST_fsm_state10;
    static const sc_lv<26> ap_ST_fsm_state11;
    static const sc_lv<26> ap_ST_fsm_state12;
    static const sc_lv<26> ap_ST_fsm_state13;
    static const sc_lv<26> ap_ST_fsm_state14;
    static const sc_lv<26> ap_ST_fsm_state15;
    static const sc_lv<26> ap_ST_fsm_state16;
    static const sc_lv<26> ap_ST_fsm_state17;
    static const sc_lv<26> ap_ST_fsm_state18;
    static const sc_lv<26> ap_ST_fsm_state19;
    static const sc_lv<26> ap_ST_fsm_state20;
    static const sc_lv<26> ap_ST_fsm_state21;
    static const sc_lv<26> ap_ST_fsm_state22;
    static const sc_lv<26> ap_ST_fsm_state23;
    static const sc_lv<26> ap_ST_fsm_state24;
    static const sc_lv<26> ap_ST_fsm_state25;
    static const sc_lv<26> ap_ST_fsm_state26;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<32> ap_const_lv32_16;
    static const sc_lv<32> ap_const_lv32_18;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_11;
    static const sc_lv<32> ap_const_lv32_13;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<7> ap_const_lv7_0;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_7;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<13> ap_const_lv13_0;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_E;
    static const sc_lv<32> ap_const_lv32_10;
    static const sc_lv<32> ap_const_lv32_12;
    static const sc_lv<32> ap_const_lv32_14;
    static const sc_lv<32> ap_const_lv32_19;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_15;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<64> ap_const_lv64_40;
    static const sc_lv<64> ap_const_lv64_2;
    static const sc_lv<64> ap_const_lv64_1000;
    static const sc_lv<3> ap_const_lv3_0;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<3> ap_const_lv3_1;
    static const sc_lv<3> ap_const_lv3_2;
    static const sc_lv<3> ap_const_lv3_3;
    static const sc_lv<3> ap_const_lv3_4;
    static const sc_lv<64> ap_const_lv64_18F;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<32> ap_const_lv32_F;
    static const sc_lv<32> ap_const_lv32_3E7A56E6;
    static const sc_lv<7> ap_const_lv7_40;
    static const sc_lv<7> ap_const_lv7_1;
    static const sc_lv<15> ap_const_lv15_63C0;
    static const sc_lv<15> ap_const_lv15_1;
    static const sc_lv<3> ap_const_lv3_5;
    static const sc_lv<3> ap_const_lv3_6;
    static const sc_lv<13> ap_const_lv13_1000;
    static const sc_lv<13> ap_const_lv13_1;
    static const bool ap_const_boolean_1;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state10();
    void thread_ap_CS_fsm_state11();
    void thread_ap_CS_fsm_state12();
    void thread_ap_CS_fsm_state13();
    void thread_ap_CS_fsm_state14();
    void thread_ap_CS_fsm_state15();
    void thread_ap_CS_fsm_state16();
    void thread_ap_CS_fsm_state17();
    void thread_ap_CS_fsm_state18();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state20();
    void thread_ap_CS_fsm_state21();
    void thread_ap_CS_fsm_state22();
    void thread_ap_CS_fsm_state23();
    void thread_ap_CS_fsm_state24();
    void thread_ap_CS_fsm_state25();
    void thread_ap_CS_fsm_state26();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_CS_fsm_state8();
    void thread_ap_CS_fsm_state9();
    void thread_ap_done();
    void thread_ap_idle();
    void thread_ap_ready();
    void thread_b1_1_fu_859_p2();
    void thread_b1_cast_fu_848_p1();
    void thread_b2_1_fu_887_p2();
    void thread_b2_cast_fu_877_p1();
    void thread_b3_1_fu_1022_p2();
    void thread_b3_cast_fu_1011_p1();
    void thread_b4_1_fu_1039_p2();
    void thread_b4_cast_fu_1028_p1();
    void thread_b5_1_fu_1068_p2();
    void thread_b5_cast_fu_1057_p1();
    void thread_b6_1_fu_1096_p2();
    void thread_b6_cast_fu_1086_p1();
    void thread_b7_1_fu_1237_p2();
    void thread_b7_cast_fu_1226_p1();
    void thread_dense_69_bias_array_9_address0();
    void thread_dense_69_bias_array_9_ce0();
    void thread_dense_69_bias_array_9_we0();
    void thread_dense_69_bias_array_address0();
    void thread_dense_69_bias_array_ce0();
    void thread_dense_69_input_input_array_address0();
    void thread_dense_69_input_input_array_ce0();
    void thread_dense_69_input_input_shape_address0();
    void thread_dense_69_input_input_shape_ce0();
    void thread_dense_69_kernel_arra_1_address0();
    void thread_dense_69_kernel_arra_1_ce0();
    void thread_dense_69_kernel_arra_2_address0();
    void thread_dense_69_kernel_arra_2_ce0();
    void thread_dense_69_kernel_arra_3_address0();
    void thread_dense_69_kernel_arra_3_ce0();
    void thread_dense_69_kernel_arra_4_address0();
    void thread_dense_69_kernel_arra_4_ce0();
    void thread_dense_69_kernel_arra_5_address0();
    void thread_dense_69_kernel_arra_5_ce0();
    void thread_dense_69_kernel_arra_6_address0();
    void thread_dense_69_kernel_arra_6_ce0();
    void thread_dense_69_kernel_arra_7_address0();
    void thread_dense_69_kernel_arra_7_ce0();
    void thread_dense_69_kernel_arra_8_address0();
    void thread_dense_69_kernel_arra_8_ce0();
    void thread_dense_69_kernel_arra_8_d0();
    void thread_dense_69_kernel_arra_8_we0();
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
    void thread_dense_70_bias_array_1_address0();
    void thread_dense_70_bias_array_1_ce0();
    void thread_dense_70_bias_array_2_address0();
    void thread_dense_70_bias_array_2_ce0();
    void thread_dense_70_bias_array_3_address0();
    void thread_dense_70_bias_array_3_ce0();
    void thread_dense_70_bias_array_4_address0();
    void thread_dense_70_bias_array_4_ce0();
    void thread_dense_70_bias_array_5_address0();
    void thread_dense_70_bias_array_5_ce0();
    void thread_dense_70_bias_array_6_address0();
    void thread_dense_70_bias_array_6_ce0();
    void thread_dense_70_bias_array_7_address0();
    void thread_dense_70_bias_array_7_ce0();
    void thread_dense_70_bias_array_address0();
    void thread_dense_70_bias_array_ce0();
    void thread_dense_70_bias_array_d0();
    void thread_dense_70_bias_array_s_address0();
    void thread_dense_70_bias_array_s_ce0();
    void thread_dense_70_bias_array_we0();
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
    void thread_dense_70_output_arra_d0();
    void thread_dense_70_output_arra_we0();
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
    void thread_dense_71_output_array_ce0();
    void thread_dense_71_output_array_d0();
    void thread_dense_71_output_array_we0();
    void thread_dense_71_output_shape_address0();
    void thread_dense_71_output_shape_address1();
    void thread_dense_71_output_shape_ce0();
    void thread_dense_71_output_shape_ce1();
    void thread_dense_71_output_shape_d0();
    void thread_dense_71_output_shape_d1();
    void thread_dense_71_output_shape_we0();
    void thread_dense_71_output_shape_we1();
    void thread_grp_k2c_dense_1_fu_790_ap_start();
    void thread_grp_k2c_dense_2_fu_814_ap_start();
    void thread_grp_k2c_dense_fu_765_ap_start();
    void thread_newIndex1_cast_fu_1116_p1();
    void thread_newIndex1_fu_1106_p4();
    void thread_newIndex_cast_fu_907_p1();
    void thread_newIndex_fu_897_p4();
    void thread_sel_tmp10_i1_fu_1199_p2();
    void thread_sel_tmp10_i_fu_984_p2();
    void thread_sel_tmp11_i1_fu_1204_p3();
    void thread_sel_tmp11_i_fu_989_p3();
    void thread_sel_tmp12_i1_fu_1212_p2();
    void thread_sel_tmp12_i_fu_997_p2();
    void thread_sel_tmp1_i2_fu_1139_p3();
    void thread_sel_tmp1_i_fu_924_p3();
    void thread_sel_tmp2_i3_fu_1147_p2();
    void thread_sel_tmp2_i_fu_932_p2();
    void thread_sel_tmp3_i4_fu_1152_p3();
    void thread_sel_tmp3_i_fu_937_p3();
    void thread_sel_tmp4_i5_fu_1160_p2();
    void thread_sel_tmp4_i_fu_945_p2();
    void thread_sel_tmp5_i6_fu_1165_p3();
    void thread_sel_tmp5_i_fu_950_p3();
    void thread_sel_tmp6_i7_fu_1173_p2();
    void thread_sel_tmp6_i_fu_958_p2();
    void thread_sel_tmp7_i8_fu_1178_p3();
    void thread_sel_tmp7_i_fu_963_p3();
    void thread_sel_tmp8_i9_fu_1186_p2();
    void thread_sel_tmp8_i_fu_971_p2();
    void thread_sel_tmp9_i1_fu_1191_p3();
    void thread_sel_tmp9_i_fu_976_p3();
    void thread_sel_tmp_i1_fu_1134_p2();
    void thread_sel_tmp_i_fu_919_p2();
    void thread_tmp_3_fu_1062_p2();
    void thread_tmp_4_fu_1090_p2();
    void thread_tmp_6_fu_1231_p2();
    void thread_tmp_70_fu_893_p1();
    void thread_tmp_71_fu_1102_p1();
    void thread_tmp_8_fu_1016_p2();
    void thread_tmp_9_fu_1033_p2();
    void thread_tmp_fu_853_p2();
    void thread_tmp_s_fu_881_p2();
    void thread_ap_NS_fsm();
    void thread_hdltv_gen();
};

}

using namespace ap_rtl;

#endif