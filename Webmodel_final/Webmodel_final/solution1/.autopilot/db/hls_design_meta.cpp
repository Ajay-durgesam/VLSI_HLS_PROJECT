#include "hls_design_meta.h"
const Port_Property HLS_Design_Meta::port_props[]={
	Port_Property("ap_clk", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_rst", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_start", 1, hls_in, -1, "", "", 1),
	Port_Property("ap_done", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_idle", 1, hls_out, -1, "", "", 1),
	Port_Property("ap_ready", 1, hls_out, -1, "", "", 1),
	Port_Property("dense_69_input_input_array_address0", 15, hls_out, 0, "ap_memory", "mem_address", 1),
	Port_Property("dense_69_input_input_array_ce0", 1, hls_out, 0, "ap_memory", "mem_ce", 1),
	Port_Property("dense_69_input_input_array_q0", 32, hls_in, 0, "ap_memory", "mem_dout", 1),
	Port_Property("dense_69_input_input_ndim", 64, hls_in, 1, "ap_none", "in_data", 1),
	Port_Property("dense_69_input_input_numel", 64, hls_in, 2, "ap_none", "in_data", 1),
	Port_Property("dense_69_input_input_shape_address0", 3, hls_out, 3, "ap_memory", "mem_address", 1),
	Port_Property("dense_69_input_input_shape_ce0", 1, hls_out, 3, "ap_memory", "mem_ce", 1),
	Port_Property("dense_69_input_input_shape_q0", 64, hls_in, 3, "ap_memory", "mem_dout", 1),
	Port_Property("dense_71_output_array_address0", 15, hls_out, 4, "ap_memory", "mem_address", 1),
	Port_Property("dense_71_output_array_ce0", 1, hls_out, 4, "ap_memory", "mem_ce", 1),
	Port_Property("dense_71_output_array_we0", 1, hls_out, 4, "ap_memory", "mem_we", 1),
	Port_Property("dense_71_output_array_d0", 32, hls_out, 4, "ap_memory", "mem_din", 1),
	Port_Property("dense_71_output_array_q0", 32, hls_in, 4, "ap_memory", "mem_dout", 1),
	Port_Property("dense_71_output_array_address1", 15, hls_out, 4, "ap_memory", "mem_address", 1),
	Port_Property("dense_71_output_array_ce1", 1, hls_out, 4, "ap_memory", "mem_ce", 1),
	Port_Property("dense_71_output_array_we1", 1, hls_out, 4, "ap_memory", "mem_we", 1),
	Port_Property("dense_71_output_array_d1", 32, hls_out, 4, "ap_memory", "mem_din", 1),
	Port_Property("dense_71_output_array_q1", 32, hls_in, 4, "ap_memory", "mem_dout", 1),
	Port_Property("dense_71_output_ndim", 64, hls_in, 5, "ap_none", "in_data", 1),
	Port_Property("dense_71_output_numel", 64, hls_in, 6, "ap_none", "in_data", 1),
	Port_Property("dense_71_output_shape_address0", 3, hls_out, 7, "ap_memory", "mem_address", 1),
	Port_Property("dense_71_output_shape_ce0", 1, hls_out, 7, "ap_memory", "mem_ce", 1),
	Port_Property("dense_71_output_shape_we0", 1, hls_out, 7, "ap_memory", "mem_we", 1),
	Port_Property("dense_71_output_shape_d0", 64, hls_out, 7, "ap_memory", "mem_din", 1),
	Port_Property("dense_71_output_shape_q0", 64, hls_in, 7, "ap_memory", "mem_dout", 1),
	Port_Property("dense_71_output_shape_address1", 3, hls_out, 7, "ap_memory", "mem_address", 1),
	Port_Property("dense_71_output_shape_ce1", 1, hls_out, 7, "ap_memory", "mem_ce", 1),
	Port_Property("dense_71_output_shape_we1", 1, hls_out, 7, "ap_memory", "mem_we", 1),
	Port_Property("dense_71_output_shape_d1", 64, hls_out, 7, "ap_memory", "mem_din", 1),
	Port_Property("dense_71_output_shape_q1", 64, hls_in, 7, "ap_memory", "mem_dout", 1),
};
const char* HLS_Design_Meta::dut_name = "WebModel";
