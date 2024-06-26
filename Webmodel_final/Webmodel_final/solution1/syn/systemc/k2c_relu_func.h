// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_relu_func_HH_
#define _k2c_relu_func_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "WebModel_fcmp_32nlbW.h"

namespace ap_rtl {

struct k2c_relu_func : public sc_module {
    // Port declarations 14
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<15> > x_address0;
    sc_out< sc_logic > x_ce0;
    sc_in< sc_lv<32> > x_q0;
    sc_out< sc_lv<15> > x_address1;
    sc_out< sc_logic > x_ce1;
    sc_out< sc_logic > x_we1;
    sc_out< sc_lv<32> > x_d1;
    sc_in< sc_lv<64> > size;
    sc_signal< sc_lv<32> > ap_var_for_const0;
    sc_signal< sc_lv<5> > ap_var_for_const1;


    // Module declarations
    k2c_relu_func(sc_module_name name);
    SC_HAS_PROCESS(k2c_relu_func);

    ~k2c_relu_func();

    sc_trace_file* mVcdFile;

    WebModel_fcmp_32nlbW<1,1,32,32,1>* WebModel_fcmp_32nlbW_U46;
    sc_signal< sc_lv<3> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<64> > i_reg_62;
    sc_signal< sc_lv<1> > exitcond_fu_80_p2;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state2_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state3_pp0_stage0_iter1;
    sc_signal< bool > ap_block_state4_pp0_stage0_iter2;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<64> > i_2_fu_85_p2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<15> > x_addr_reg_144;
    sc_signal< sc_lv<15> > x_addr_reg_144_pp0_iter1_reg;
    sc_signal< sc_lv<1> > notlhs_fu_109_p2;
    sc_signal< sc_lv<1> > notlhs_reg_150;
    sc_signal< sc_lv<1> > notrhs_fu_115_p2;
    sc_signal< sc_lv<1> > notrhs_reg_155;
    sc_signal< sc_lv<1> > tmp_4_fu_74_p2;
    sc_signal< sc_lv<1> > tmp_4_reg_160;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state2;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter2;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<1> > tmp_5_fu_125_p2;
    sc_signal< sc_lv<32> > x_load_to_int_fu_91_p1;
    sc_signal< sc_lv<8> > tmp_fu_95_p4;
    sc_signal< sc_lv<23> > tmp_6_fu_105_p1;
    sc_signal< sc_lv<1> > tmp_2_fu_121_p2;
    sc_signal< bool > ap_block_pp0_stage0_00001;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<3> > ap_NS_fsm;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<3> ap_ST_fsm_state1;
    static const sc_lv<3> ap_ST_fsm_pp0_stage0;
    static const sc_lv<3> ap_ST_fsm_state5;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const bool ap_const_boolean_0;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<32> ap_const_lv32_17;
    static const sc_lv<32> ap_const_lv32_1E;
    static const sc_lv<8> ap_const_lv8_FF;
    static const sc_lv<23> ap_const_lv23_0;
    static const sc_lv<5> ap_const_lv5_5;
    static const sc_lv<32> ap_const_lv32_2;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_var_for_const1();
    void thread_ap_clk_no_reset_();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state5();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_00001();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_state2_pp0_stage0_iter0();
    void thread_ap_block_state3_pp0_stage0_iter1();
    void thread_ap_block_state4_pp0_stage0_iter2();
    void thread_ap_condition_pp0_exit_iter0_state2();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_ready();
    void thread_exitcond_fu_80_p2();
    void thread_i_2_fu_85_p2();
    void thread_notlhs_fu_109_p2();
    void thread_notrhs_fu_115_p2();
    void thread_tmp_2_fu_121_p2();
    void thread_tmp_5_fu_125_p2();
    void thread_tmp_6_fu_105_p1();
    void thread_tmp_fu_95_p4();
    void thread_x_address0();
    void thread_x_address1();
    void thread_x_ce0();
    void thread_x_ce1();
    void thread_x_d1();
    void thread_x_load_to_int_fu_91_p1();
    void thread_x_we1();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
