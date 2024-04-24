// ==============================================================
// RTL generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ===========================================================

#ifndef _k2c_matmul_1_HH_
#define _k2c_matmul_1_HH_

#include "systemc.h"
#include "AESL_pkg.h"

#include "WebModel_fadd_32ncud.h"
#include "WebModel_fmul_32ndEe.h"
#include "WebModel_mul_64s_bkb.h"
#include "WebModel_mul_64nseOg.h"

namespace ap_rtl {

struct k2c_matmul_1 : public sc_module {
    // Port declarations 21
    sc_in_clk ap_clk;
    sc_in< sc_logic > ap_rst;
    sc_in< sc_logic > ap_start;
    sc_out< sc_logic > ap_done;
    sc_out< sc_logic > ap_idle;
    sc_out< sc_logic > ap_ready;
    sc_out< sc_lv<15> > C_address0;
    sc_out< sc_logic > C_ce0;
    sc_out< sc_logic > C_we0;
    sc_out< sc_lv<32> > C_d0;
    sc_in< sc_lv<32> > C_q0;
    sc_out< sc_lv<13> > B_address0;
    sc_out< sc_logic > B_ce0;
    sc_in< sc_lv<32> > B_q0;
    sc_out< sc_lv<13> > B_address1;
    sc_out< sc_logic > B_ce1;
    sc_in< sc_lv<32> > B_q1;
    sc_in< sc_lv<64> > B_offset;
    sc_in< sc_lv<64> > outrows;
    sc_in< sc_lv<64> > outcols;
    sc_in< sc_lv<64> > innerdim;
    sc_signal< sc_logic > ap_var_for_const0;


    // Module declarations
    k2c_matmul_1(sc_module_name name);
    SC_HAS_PROCESS(k2c_matmul_1);

    ~k2c_matmul_1();

    sc_trace_file* mVcdFile;

    WebModel_fadd_32ncud<1,5,32,32,32>* WebModel_fadd_32ncud_U81;
    WebModel_fmul_32ndEe<1,3,32,32,32>* WebModel_fmul_32ndEe_U82;
    WebModel_mul_64s_bkb<1,2,64,64,64>* WebModel_mul_64s_bkb_U83;
    WebModel_mul_64s_bkb<1,2,64,64,64>* WebModel_mul_64s_bkb_U84;
    WebModel_mul_64nseOg<1,2,64,64,128>* WebModel_mul_64nseOg_U85;
    sc_signal< sc_lv<14> > ap_CS_fsm;
    sc_signal< sc_logic > ap_CS_fsm_state1;
    sc_signal< sc_lv<128> > indvar_flatten_reg_203;
    sc_signal< sc_lv<64> > outrowidx_1_reg_214;
    sc_signal< sc_lv<64> > inneridx_1_reg_224;
    sc_signal< sc_lv<64> > j1_reg_234;
    sc_signal< sc_logic > ap_CS_fsm_state2;
    sc_signal< sc_lv<64> > grp_fu_253_p2;
    sc_signal< sc_lv<64> > tmp_reg_529;
    sc_signal< sc_lv<15> > a10_fu_269_p2;
    sc_signal< sc_logic > ap_CS_fsm_state3;
    sc_signal< sc_lv<14> > tmp_24_fu_279_p1;
    sc_signal< sc_lv<14> > tmp_24_reg_543;
    sc_signal< sc_lv<1> > exitcond2_fu_264_p2;
    sc_signal< sc_lv<64> > grp_fu_275_p2;
    sc_signal< sc_lv<64> > tmp_9_reg_548;
    sc_signal< sc_logic > ap_CS_fsm_state4;
    sc_signal< sc_lv<16> > tmp_22_fu_282_p1;
    sc_signal< sc_lv<16> > tmp_22_reg_553;
    sc_signal< sc_lv<14> > tmp_23_fu_285_p1;
    sc_signal< sc_lv<14> > tmp_23_reg_559;
    sc_signal< sc_lv<64> > tmp_25_fu_288_p2;
    sc_signal< sc_lv<128> > cast_fu_293_p1;
    sc_signal< sc_lv<128> > cast_reg_569;
    sc_signal< sc_lv<64> > indvars_iv_fu_296_p2;
    sc_signal< sc_lv<64> > indvars_iv_reg_574;
    sc_signal< sc_logic > ap_CS_fsm_state5;
    sc_signal< sc_lv<64> > k_1_fu_306_p2;
    sc_signal< sc_lv<64> > k_1_reg_582;
    sc_signal< sc_lv<64> > tmp_6_fu_326_p2;
    sc_signal< sc_lv<64> > tmp_6_reg_587;
    sc_signal< sc_lv<1> > exitcond1_fu_301_p2;
    sc_signal< sc_lv<14> > tmp_26_fu_332_p1;
    sc_signal< sc_lv<14> > tmp_26_reg_592;
    sc_signal< sc_lv<64> > inneridx_2_fu_336_p2;
    sc_signal< sc_lv<64> > inneridx_2_reg_597;
    sc_signal< sc_lv<64> > outrowidx_2_fu_341_p2;
    sc_signal< sc_lv<64> > outrowidx_2_reg_602;
    sc_signal< sc_logic > ap_CS_fsm_state6;
    sc_signal< sc_lv<64> > inner_k_outcols_4_fu_358_p2;
    sc_signal< sc_lv<64> > inner_k_outcols_4_reg_612;
    sc_signal< sc_logic > ap_CS_fsm_state7;
    sc_signal< sc_lv<16> > inner_k_outcols_4_ca_fu_363_p2;
    sc_signal< sc_lv<16> > inner_k_outcols_4_ca_reg_619;
    sc_signal< sc_lv<64> > inner_k_outcols_end_fu_368_p2;
    sc_signal< sc_lv<64> > inner_k_outcols_end_reg_624;
    sc_signal< sc_lv<128> > grp_fu_349_p2;
    sc_signal< sc_lv<128> > bound_reg_629;
    sc_signal< sc_lv<1> > exitcond_flatten_fu_373_p2;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_634;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage0;
    sc_signal< bool > ap_block_state8_pp0_stage0_iter0;
    sc_signal< bool > ap_block_state14_pp0_stage0_iter1;
    sc_signal< bool > ap_block_pp0_stage0_11001;
    sc_signal< sc_lv<1> > exitcond_flatten_reg_634_pp0_iter1_reg;
    sc_signal< sc_lv<128> > indvar_flatten_next_fu_378_p2;
    sc_signal< sc_lv<128> > indvar_flatten_next_reg_638;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter0;
    sc_signal< sc_lv<64> > j1_mid2_fu_389_p3;
    sc_signal< sc_lv<64> > j1_mid2_reg_643;
    sc_signal< sc_lv<64> > sum_cast_mid2_v_v_v_s_fu_401_p3;
    sc_signal< sc_lv<64> > sum_cast_mid2_v_v_v_s_reg_648;
    sc_signal< sc_lv<14> > sum_cast_mid2_v_fu_418_p2;
    sc_signal< sc_lv<14> > sum_cast_mid2_v_reg_653;
    sc_signal< sc_lv<64> > tmp_5_mid2_v_v_v_fu_428_p3;
    sc_signal< sc_lv<64> > tmp_5_mid2_v_v_v_reg_658;
    sc_signal< sc_lv<16> > tmp_5_mid2_v_fu_440_p2;
    sc_signal< sc_lv<16> > tmp_5_mid2_v_reg_663;
    sc_signal< sc_lv<16> > tmp_30_fu_445_p1;
    sc_signal< sc_lv<16> > tmp_30_reg_668;
    sc_signal< sc_lv<14> > sum3_fu_453_p2;
    sc_signal< sc_lv<14> > sum3_reg_673;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage1;
    sc_signal< bool > ap_block_state9_pp0_stage1_iter0;
    sc_signal< bool > ap_block_state15_pp0_stage1_iter1;
    sc_signal< bool > ap_block_pp0_stage1_11001;
    sc_signal< sc_lv<15> > C_addr_2_reg_688;
    sc_signal< sc_lv<15> > C_addr_2_reg_688_pp0_iter1_reg;
    sc_signal< sc_lv<32> > B_load_2_reg_693;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage2;
    sc_signal< bool > ap_block_state10_pp0_stage2_iter0;
    sc_signal< bool > ap_block_state16_pp0_stage2_iter1;
    sc_signal< bool > ap_block_pp0_stage2_11001;
    sc_signal< sc_lv<32> > B_load_reg_698;
    sc_signal< sc_lv<32> > grp_fu_249_p2;
    sc_signal< sc_lv<32> > tmp_4_reg_703;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage5;
    sc_signal< bool > ap_block_state13_pp0_stage5_iter0;
    sc_signal< bool > ap_block_pp0_stage5_11001;
    sc_signal< sc_lv<64> > j_1_fu_480_p2;
    sc_signal< sc_lv<64> > j_1_reg_708;
    sc_signal< sc_logic > ap_enable_reg_pp0_iter1;
    sc_signal< sc_lv<64> > indvars_iv_next7_fu_485_p2;
    sc_signal< sc_logic > ap_CS_fsm_state19;
    sc_signal< sc_lv<64> > indvars_iv_next9_fu_490_p2;
    sc_signal< bool > ap_block_pp0_stage0_subdone;
    sc_signal< sc_logic > ap_condition_pp0_exit_iter0_state8;
    sc_signal< bool > ap_block_pp0_stage5_subdone;
    sc_signal< bool > ap_block_state12_pp0_stage4_iter0;
    sc_signal< bool > ap_block_state18_pp0_stage4_iter1;
    sc_signal< bool > ap_block_pp0_stage4_subdone;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage4;
    sc_signal< sc_lv<15> > a_reg_114;
    sc_signal< sc_lv<64> > indvars_iv11_pn_reg_125;
    sc_signal< sc_lv<64> > indvars_iv8_reg_136;
    sc_signal< sc_lv<64> > indvars_iv6_reg_146;
    sc_signal< sc_lv<64> > inner_k_outcols_reg_156;
    sc_signal< sc_lv<64> > outrowidx_reg_168;
    sc_signal< sc_lv<64> > inneridx_reg_180;
    sc_signal< sc_lv<64> > k_reg_192;
    sc_signal< sc_lv<128> > ap_phi_mux_indvar_flatten_phi_fu_207_p4;
    sc_signal< bool > ap_block_pp0_stage0;
    sc_signal< sc_lv<64> > ap_phi_mux_outrowidx_1_phi_fu_217_p4;
    sc_signal< sc_lv<64> > ap_phi_mux_inneridx_1_phi_fu_227_p4;
    sc_signal< sc_lv<64> > ap_phi_mux_j1_phi_fu_237_p4;
    sc_signal< sc_lv<64> > a_cast_fu_259_p1;
    sc_signal< sc_lv<64> > sum_cast_mid2_fu_458_p1;
    sc_signal< bool > ap_block_pp0_stage1;
    sc_signal< sc_lv<64> > sum3_cast_fu_466_p1;
    sc_signal< sc_lv<64> > sum2_cast_fu_475_p1;
    sc_signal< bool > ap_block_pp0_stage5;
    sc_signal< bool > ap_block_pp0_stage4_11001;
    sc_signal< sc_lv<32> > grp_fu_243_p2;
    sc_signal< bool > ap_block_pp0_stage4;
    sc_signal< sc_logic > ap_CS_fsm_pp0_stage3;
    sc_signal< bool > ap_block_pp0_stage3;
    sc_signal< sc_lv<64> > tmp_22_fu_282_p0;
    sc_signal< sc_lv<64> > tmp_23_fu_285_p0;
    sc_signal< sc_lv<64> > tmp_25_fu_288_p0;
    sc_signal< sc_lv<64> > cast_fu_293_p0;
    sc_signal< sc_lv<64> > indvars_iv_fu_296_p1;
    sc_signal< sc_lv<64> > exitcond1_fu_301_p1;
    sc_signal< sc_lv<1> > tmp_s_fu_312_p2;
    sc_signal< sc_lv<64> > umax_fu_318_p3;
    sc_signal< sc_lv<64> > grp_fu_349_p0;
    sc_signal< sc_lv<64> > grp_fu_349_p1;
    sc_signal< sc_lv<64> > inner_k_outcols_4_fu_358_p0;
    sc_signal< sc_lv<16> > tmp_27_fu_354_p1;
    sc_signal< sc_lv<64> > inner_k_outcols_end_fu_368_p0;
    sc_signal< sc_lv<1> > tmp_10_fu_384_p2;
    sc_signal< sc_lv<64> > tmp_11_fu_396_p0;
    sc_signal< sc_lv<64> > tmp_11_fu_396_p2;
    sc_signal< sc_lv<14> > tmp_28_fu_409_p1;
    sc_signal< sc_lv<14> > sum_cast_mid2_v_v_fu_413_p2;
    sc_signal< sc_lv<64> > tmp_12_fu_423_p0;
    sc_signal< sc_lv<64> > tmp_12_fu_423_p2;
    sc_signal< sc_lv<16> > tmp_29_fu_436_p1;
    sc_signal< sc_lv<14> > tmp_31_fu_449_p1;
    sc_signal< sc_lv<16> > tmp_5_mid2_fu_462_p2;
    sc_signal< sc_lv<16> > sum2_fu_470_p2;
    sc_signal< sc_lv<64> > indvars_iv_next7_fu_485_p1;
    sc_signal< sc_lv<64> > indvars_iv_next9_fu_490_p1;
    sc_signal< sc_lv<14> > ap_NS_fsm;
    sc_signal< bool > ap_block_pp0_stage1_subdone;
    sc_signal< bool > ap_block_pp0_stage2_subdone;
    sc_signal< bool > ap_block_state11_pp0_stage3_iter0;
    sc_signal< bool > ap_block_state17_pp0_stage3_iter1;
    sc_signal< bool > ap_block_pp0_stage3_subdone;
    sc_signal< sc_logic > ap_idle_pp0;
    sc_signal< sc_logic > ap_enable_pp0;
    sc_signal< sc_lv<128> > grp_fu_349_p00;
    static const sc_logic ap_const_logic_1;
    static const sc_logic ap_const_logic_0;
    static const sc_lv<14> ap_ST_fsm_state1;
    static const sc_lv<14> ap_ST_fsm_state2;
    static const sc_lv<14> ap_ST_fsm_state3;
    static const sc_lv<14> ap_ST_fsm_state4;
    static const sc_lv<14> ap_ST_fsm_state5;
    static const sc_lv<14> ap_ST_fsm_state6;
    static const sc_lv<14> ap_ST_fsm_state7;
    static const sc_lv<14> ap_ST_fsm_pp0_stage0;
    static const sc_lv<14> ap_ST_fsm_pp0_stage1;
    static const sc_lv<14> ap_ST_fsm_pp0_stage2;
    static const sc_lv<14> ap_ST_fsm_pp0_stage3;
    static const sc_lv<14> ap_ST_fsm_pp0_stage4;
    static const sc_lv<14> ap_ST_fsm_pp0_stage5;
    static const sc_lv<14> ap_ST_fsm_state19;
    static const bool ap_const_boolean_1;
    static const sc_lv<32> ap_const_lv32_0;
    static const sc_lv<32> ap_const_lv32_1;
    static const sc_lv<32> ap_const_lv32_2;
    static const sc_lv<1> ap_const_lv1_1;
    static const sc_lv<32> ap_const_lv32_3;
    static const sc_lv<32> ap_const_lv32_4;
    static const sc_lv<1> ap_const_lv1_0;
    static const sc_lv<32> ap_const_lv32_5;
    static const sc_lv<32> ap_const_lv32_6;
    static const sc_lv<32> ap_const_lv32_7;
    static const bool ap_const_boolean_0;
    static const sc_lv<32> ap_const_lv32_8;
    static const sc_lv<32> ap_const_lv32_9;
    static const sc_lv<32> ap_const_lv32_C;
    static const sc_lv<32> ap_const_lv32_D;
    static const sc_lv<32> ap_const_lv32_B;
    static const sc_lv<15> ap_const_lv15_0;
    static const sc_lv<64> ap_const_lv64_0;
    static const sc_lv<128> ap_const_lv128_lc_1;
    static const sc_lv<32> ap_const_lv32_A;
    static const sc_lv<15> ap_const_lv15_1;
    static const sc_lv<64> ap_const_lv64_1;
    static const sc_lv<128> ap_const_lv128_lc_2;
    // Thread declarations
    void thread_ap_var_for_const0();
    void thread_ap_clk_no_reset_();
    void thread_B_address0();
    void thread_B_address1();
    void thread_B_ce0();
    void thread_B_ce1();
    void thread_C_address0();
    void thread_C_ce0();
    void thread_C_d0();
    void thread_C_we0();
    void thread_a10_fu_269_p2();
    void thread_a_cast_fu_259_p1();
    void thread_ap_CS_fsm_pp0_stage0();
    void thread_ap_CS_fsm_pp0_stage1();
    void thread_ap_CS_fsm_pp0_stage2();
    void thread_ap_CS_fsm_pp0_stage3();
    void thread_ap_CS_fsm_pp0_stage4();
    void thread_ap_CS_fsm_pp0_stage5();
    void thread_ap_CS_fsm_state1();
    void thread_ap_CS_fsm_state19();
    void thread_ap_CS_fsm_state2();
    void thread_ap_CS_fsm_state3();
    void thread_ap_CS_fsm_state4();
    void thread_ap_CS_fsm_state5();
    void thread_ap_CS_fsm_state6();
    void thread_ap_CS_fsm_state7();
    void thread_ap_block_pp0_stage0();
    void thread_ap_block_pp0_stage0_11001();
    void thread_ap_block_pp0_stage0_subdone();
    void thread_ap_block_pp0_stage1();
    void thread_ap_block_pp0_stage1_11001();
    void thread_ap_block_pp0_stage1_subdone();
    void thread_ap_block_pp0_stage2_11001();
    void thread_ap_block_pp0_stage2_subdone();
    void thread_ap_block_pp0_stage3();
    void thread_ap_block_pp0_stage3_subdone();
    void thread_ap_block_pp0_stage4();
    void thread_ap_block_pp0_stage4_11001();
    void thread_ap_block_pp0_stage4_subdone();
    void thread_ap_block_pp0_stage5();
    void thread_ap_block_pp0_stage5_11001();
    void thread_ap_block_pp0_stage5_subdone();
    void thread_ap_block_state10_pp0_stage2_iter0();
    void thread_ap_block_state11_pp0_stage3_iter0();
    void thread_ap_block_state12_pp0_stage4_iter0();
    void thread_ap_block_state13_pp0_stage5_iter0();
    void thread_ap_block_state14_pp0_stage0_iter1();
    void thread_ap_block_state15_pp0_stage1_iter1();
    void thread_ap_block_state16_pp0_stage2_iter1();
    void thread_ap_block_state17_pp0_stage3_iter1();
    void thread_ap_block_state18_pp0_stage4_iter1();
    void thread_ap_block_state8_pp0_stage0_iter0();
    void thread_ap_block_state9_pp0_stage1_iter0();
    void thread_ap_condition_pp0_exit_iter0_state8();
    void thread_ap_done();
    void thread_ap_enable_pp0();
    void thread_ap_idle();
    void thread_ap_idle_pp0();
    void thread_ap_phi_mux_indvar_flatten_phi_fu_207_p4();
    void thread_ap_phi_mux_inneridx_1_phi_fu_227_p4();
    void thread_ap_phi_mux_j1_phi_fu_237_p4();
    void thread_ap_phi_mux_outrowidx_1_phi_fu_217_p4();
    void thread_ap_ready();
    void thread_cast_fu_293_p0();
    void thread_cast_fu_293_p1();
    void thread_exitcond1_fu_301_p1();
    void thread_exitcond1_fu_301_p2();
    void thread_exitcond2_fu_264_p2();
    void thread_exitcond_flatten_fu_373_p2();
    void thread_grp_fu_349_p0();
    void thread_grp_fu_349_p00();
    void thread_grp_fu_349_p1();
    void thread_indvar_flatten_next_fu_378_p2();
    void thread_indvars_iv_fu_296_p1();
    void thread_indvars_iv_fu_296_p2();
    void thread_indvars_iv_next7_fu_485_p1();
    void thread_indvars_iv_next7_fu_485_p2();
    void thread_indvars_iv_next9_fu_490_p1();
    void thread_indvars_iv_next9_fu_490_p2();
    void thread_inner_k_outcols_4_ca_fu_363_p2();
    void thread_inner_k_outcols_4_fu_358_p0();
    void thread_inner_k_outcols_4_fu_358_p2();
    void thread_inner_k_outcols_end_fu_368_p0();
    void thread_inner_k_outcols_end_fu_368_p2();
    void thread_inneridx_2_fu_336_p2();
    void thread_j1_mid2_fu_389_p3();
    void thread_j_1_fu_480_p2();
    void thread_k_1_fu_306_p2();
    void thread_outrowidx_2_fu_341_p2();
    void thread_sum2_cast_fu_475_p1();
    void thread_sum2_fu_470_p2();
    void thread_sum3_cast_fu_466_p1();
    void thread_sum3_fu_453_p2();
    void thread_sum_cast_mid2_fu_458_p1();
    void thread_sum_cast_mid2_v_fu_418_p2();
    void thread_sum_cast_mid2_v_v_fu_413_p2();
    void thread_sum_cast_mid2_v_v_v_s_fu_401_p3();
    void thread_tmp_10_fu_384_p2();
    void thread_tmp_11_fu_396_p0();
    void thread_tmp_11_fu_396_p2();
    void thread_tmp_12_fu_423_p0();
    void thread_tmp_12_fu_423_p2();
    void thread_tmp_22_fu_282_p0();
    void thread_tmp_22_fu_282_p1();
    void thread_tmp_23_fu_285_p0();
    void thread_tmp_23_fu_285_p1();
    void thread_tmp_24_fu_279_p1();
    void thread_tmp_25_fu_288_p0();
    void thread_tmp_25_fu_288_p2();
    void thread_tmp_26_fu_332_p1();
    void thread_tmp_27_fu_354_p1();
    void thread_tmp_28_fu_409_p1();
    void thread_tmp_29_fu_436_p1();
    void thread_tmp_30_fu_445_p1();
    void thread_tmp_31_fu_449_p1();
    void thread_tmp_5_mid2_fu_462_p2();
    void thread_tmp_5_mid2_v_fu_440_p2();
    void thread_tmp_5_mid2_v_v_v_fu_428_p3();
    void thread_tmp_6_fu_326_p2();
    void thread_tmp_s_fu_312_p2();
    void thread_umax_fu_318_p3();
    void thread_ap_NS_fsm();
};

}

using namespace ap_rtl;

#endif
