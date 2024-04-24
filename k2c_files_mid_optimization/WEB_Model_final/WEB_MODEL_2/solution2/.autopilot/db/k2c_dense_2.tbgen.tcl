set moduleName k2c_dense_2
set isTaskLevelControl 1
set isCombinational 0
set isDatapathOnly 0
set isPipelined 0
set pipeline_type none
set FunctionProtocol ap_ctrl_hs
set isOneStateSeq 0
set ProfileFlag 0
set StallSigGenFlag 0
set isEnableWaveformDebug 1
set C_modelName {k2c_dense.2}
set C_modelType { void 0 }
set C_modelArgList {
	{ output_array float 32 regular {array 26000 { 2 0 } 1 1 }  }
	{ input_array float 32 regular {array 26000 { 1 3 } 1 1 }  }
	{ input_ndim_read int 64 regular  }
	{ input_numel_read int 64 regular  }
	{ input_shape int 64 regular {array 5 { 1 3 } 1 1 }  }
	{ kernel_array float 32 regular {array 26000 { 1 3 } 1 1 }  }
	{ kernel_shape int 64 regular {array 5 { 1 3 } 1 1 }  }
	{ bias_array float 32 regular {array 26000 { 1 3 } 1 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "output_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "input_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "input_ndim_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "input_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "input_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "kernel_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "bias_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 32
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ output_array_address0 sc_out sc_lv 15 signal 0 } 
	{ output_array_ce0 sc_out sc_logic 1 signal 0 } 
	{ output_array_we0 sc_out sc_logic 1 signal 0 } 
	{ output_array_d0 sc_out sc_lv 32 signal 0 } 
	{ output_array_q0 sc_in sc_lv 32 signal 0 } 
	{ output_array_address1 sc_out sc_lv 15 signal 0 } 
	{ output_array_ce1 sc_out sc_logic 1 signal 0 } 
	{ output_array_we1 sc_out sc_logic 1 signal 0 } 
	{ output_array_d1 sc_out sc_lv 32 signal 0 } 
	{ input_array_address0 sc_out sc_lv 15 signal 1 } 
	{ input_array_ce0 sc_out sc_logic 1 signal 1 } 
	{ input_array_q0 sc_in sc_lv 32 signal 1 } 
	{ input_ndim_read sc_in sc_lv 64 signal 2 } 
	{ input_numel_read sc_in sc_lv 64 signal 3 } 
	{ input_shape_address0 sc_out sc_lv 3 signal 4 } 
	{ input_shape_ce0 sc_out sc_logic 1 signal 4 } 
	{ input_shape_q0 sc_in sc_lv 64 signal 4 } 
	{ kernel_array_address0 sc_out sc_lv 15 signal 5 } 
	{ kernel_array_ce0 sc_out sc_logic 1 signal 5 } 
	{ kernel_array_q0 sc_in sc_lv 32 signal 5 } 
	{ kernel_shape_address0 sc_out sc_lv 3 signal 6 } 
	{ kernel_shape_ce0 sc_out sc_logic 1 signal 6 } 
	{ kernel_shape_q0 sc_in sc_lv 64 signal 6 } 
	{ bias_array_address0 sc_out sc_lv 15 signal 7 } 
	{ bias_array_ce0 sc_out sc_logic 1 signal 7 } 
	{ bias_array_q0 sc_in sc_lv 32 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "output_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "output_array", "role": "address0" }} , 
 	{ "name": "output_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_array", "role": "ce0" }} , 
 	{ "name": "output_array_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_array", "role": "we0" }} , 
 	{ "name": "output_array_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_array", "role": "d0" }} , 
 	{ "name": "output_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_array", "role": "q0" }} , 
 	{ "name": "output_array_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "output_array", "role": "address1" }} , 
 	{ "name": "output_array_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_array", "role": "ce1" }} , 
 	{ "name": "output_array_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "output_array", "role": "we1" }} , 
 	{ "name": "output_array_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "output_array", "role": "d1" }} , 
 	{ "name": "input_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "input_array", "role": "address0" }} , 
 	{ "name": "input_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_array", "role": "ce0" }} , 
 	{ "name": "input_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "input_array", "role": "q0" }} , 
 	{ "name": "input_ndim_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_ndim_read", "role": "default" }} , 
 	{ "name": "input_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_numel_read", "role": "default" }} , 
 	{ "name": "input_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "input_shape", "role": "address0" }} , 
 	{ "name": "input_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "input_shape", "role": "ce0" }} , 
 	{ "name": "input_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "input_shape", "role": "q0" }} , 
 	{ "name": "kernel_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "kernel_array", "role": "address0" }} , 
 	{ "name": "kernel_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "kernel_array", "role": "ce0" }} , 
 	{ "name": "kernel_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "kernel_array", "role": "q0" }} , 
 	{ "name": "kernel_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "kernel_shape", "role": "address0" }} , 
 	{ "name": "kernel_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "kernel_shape", "role": "ce0" }} , 
 	{ "name": "kernel_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "kernel_shape", "role": "q0" }} , 
 	{ "name": "bias_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "bias_array", "role": "address0" }} , 
 	{ "name": "bias_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "bias_array", "role": "ce0" }} , 
 	{ "name": "bias_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "bias_array", "role": "q0" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "30", "38", "40", "41"],
		"CDFG" : "k2c_dense_2",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_fu_176"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_fu_197"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_relu_func_fu_213"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_relu_func_fu_213"}],
		"Port" : [
			{"Name" : "output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_k2c_affine_matmul_fu_197", "Port" : "C"},
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_fu_176", "Port" : "C_array"},
					{"ID" : "38", "SubInstance" : "grp_k2c_relu_func_fu_213", "Port" : "x"}]},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_k2c_affine_matmul_fu_197", "Port" : "A"},
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_fu_176", "Port" : "A_array"}]},
			{"Name" : "input_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_fu_176", "Port" : "A_shape"}]},
			{"Name" : "kernel_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_k2c_affine_matmul_fu_197", "Port" : "B"},
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_fu_176", "Port" : "B_array"}]},
			{"Name" : "kernel_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_fu_176", "Port" : "B_shape"}]},
			{"Name" : "bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "30", "SubInstance" : "grp_k2c_affine_matmul_fu_197", "Port" : "d"}]},
			{"Name" : "dense_69_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "1", "SubInstance" : "grp_k2c_dot_fu_176", "Port" : "dense_69_fwork"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176", "Parent" : "0", "Child" : ["2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "22", "24", "25", "26", "27", "28", "29"],
		"CDFG" : "k2c_dot",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"WaitState" : [
			{"State" : "ap_ST_fsm_state231", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_matmul_fu_601"},
			{"State" : "ap_ST_fsm_state156", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_613"},
			{"State" : "ap_ST_fsm_state230", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_613"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_k2c_matmul_fu_601", "Port" : "C"}]},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "axesA_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_69_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "11", "SubInstance" : "grp_k2c_matmul_fu_601", "Port" : "A"}]}]},
	{"ID" : "2", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.dense_69_fwork_U", "Parent" : "1"},
	{"ID" : "3", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.permA_U", "Parent" : "1"},
	{"ID" : "4", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.permB_U", "Parent" : "1"},
	{"ID" : "5", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.freeA_U", "Parent" : "1"},
	{"ID" : "6", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.freeB_U", "Parent" : "1"},
	{"ID" : "7", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.newshpA_U", "Parent" : "1"},
	{"ID" : "8", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.newshpB_U", "Parent" : "1"},
	{"ID" : "9", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.Asub_U", "Parent" : "1"},
	{"ID" : "10", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.Bsub_U", "Parent" : "1"},
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601", "Parent" : "1", "Child" : ["12", "13", "14", "15", "16", "17", "18", "19", "20", "21"],
		"CDFG" : "k2c_matmul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "C", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "12", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_fadd_32ncud_U6", "Parent" : "11"},
	{"ID" : "13", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_fmul_32ndEe_U7", "Parent" : "11"},
	{"ID" : "14", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mul_64s_bkb_U8", "Parent" : "11"},
	{"ID" : "15", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mul_64nseOg_U9", "Parent" : "11"},
	{"ID" : "16", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mul_128nfYi_U10", "Parent" : "11"},
	{"ID" : "17", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mac_mulag8j_U11", "Parent" : "11"},
	{"ID" : "18", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mac_mulag8j_U12", "Parent" : "11"},
	{"ID" : "19", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mac_mulahbi_U13", "Parent" : "11"},
	{"ID" : "20", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mul_mul_ibs_U14", "Parent" : "11"},
	{"ID" : "21", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mul_mul_ibs_U15", "Parent" : "11"},
	{"ID" : "22", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_sub2idx_fu_613", "Parent" : "1", "Child" : ["23"],
		"CDFG" : "k2c_sub2idx",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "sub", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "ndim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "23", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.grp_k2c_sub2idx_fu_613.WebModel_mul_64s_bkb_U1", "Parent" : "22"},
	{"ID" : "24", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.WebModel_udiv_64nkbM_U29", "Parent" : "1"},
	{"ID" : "25", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.WebModel_udiv_18nlbW_U30", "Parent" : "1"},
	{"ID" : "26", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.WebModel_urem_64nmb6_U31", "Parent" : "1"},
	{"ID" : "27", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.WebModel_udiv_64nkbM_U32", "Parent" : "1"},
	{"ID" : "28", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.WebModel_urem_64nmb6_U33", "Parent" : "1"},
	{"ID" : "29", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dot_fu_176.WebModel_udiv_64nkbM_U34", "Parent" : "1"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_197", "Parent" : "0", "Child" : ["31", "32", "33", "34", "35", "36", "37"],
		"CDFG" : "k2c_affine_matmul",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "C", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "31", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_197.WebModel_fadd_32ncud_U53", "Parent" : "30"},
	{"ID" : "32", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_197.WebModel_fmul_32ndEe_U54", "Parent" : "30"},
	{"ID" : "33", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_197.WebModel_mul_64s_bkb_U55", "Parent" : "30"},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_197.WebModel_mul_64nseOg_U56", "Parent" : "30"},
	{"ID" : "35", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_197.WebModel_mac_mulag8j_U57", "Parent" : "30"},
	{"ID" : "36", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_197.WebModel_mul_mul_ibs_U58", "Parent" : "30"},
	{"ID" : "37", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_affine_matmul_fu_197.WebModel_mac_mulag8j_U59", "Parent" : "30"},
	{"ID" : "38", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_relu_func_fu_213", "Parent" : "0", "Child" : ["39"],
		"CDFG" : "k2c_relu_func",
		"Protocol" : "ap_ctrl_hs",
		"ControlExist" : "1", "ap_start" : "1", "ap_ready" : "1", "ap_done" : "1", "ap_continue" : "0", "ap_idle" : "1",
		"Pipeline" : "None", "UnalignedPipeline" : "0", "RewindPipeline" : "0", "ProcessNetwork" : "0",
		"II" : "0",
		"VariableLatency" : "1", "ExactLatency" : "-1", "EstimateLatencyMin" : "-1", "EstimateLatencyMax" : "-1",
		"Combinational" : "0",
		"Datapath" : "0",
		"ClockEnable" : "0",
		"HasSubDataflow" : "0",
		"InDataflowNetwork" : "0",
		"HasNonBlockingOperation" : "0",
		"Port" : [
			{"Name" : "x", "Type" : "Memory", "Direction" : "IO"},
			{"Name" : "size", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "39", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_relu_func_fu_213.WebModel_fcmp_32nncg_U49", "Parent" : "38"},
	{"ID" : "40", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WebModel_fadd_32ncud_U67", "Parent" : "0"},
	{"ID" : "41", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WebModel_mul_64s_bkb_U68", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
	k2c_dense_2 {
		output_array {Type IO LastRead 12 FirstWrite 2}
		input_array {Type I LastRead 78 FirstWrite -1}
		input_ndim_read {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 77 FirstWrite -1}
		kernel_array {Type I LastRead 79 FirstWrite -1}
		kernel_shape {Type I LastRead 78 FirstWrite -1}
		bias_array {Type I LastRead 7 FirstWrite -1}
		dense_69_fwork {Type IO LastRead -1 FirstWrite -1}}
	k2c_dot {
		C_array {Type IO LastRead 12 FirstWrite 2}
		A_array {Type I LastRead 78 FirstWrite -1}
		A_ndim_read {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		A_shape {Type I LastRead 77 FirstWrite -1}
		B_array {Type I LastRead 79 FirstWrite -1}
		B_shape {Type I LastRead 78 FirstWrite -1}
		axesA_0_read {Type I LastRead 0 FirstWrite -1}
		dense_69_fwork {Type IO LastRead -1 FirstWrite -1}}
	k2c_matmul {
		C {Type IO LastRead 12 FirstWrite 2}
		A {Type I LastRead 9 FirstWrite -1}
		B_offset {Type I LastRead 1 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 1 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 1 FirstWrite -1}
		shape {Type I LastRead 3 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul {
		C {Type IO LastRead 10 FirstWrite 2}
		A {Type I LastRead 6 FirstWrite -1}
		B {Type I LastRead 6 FirstWrite -1}
		d {Type I LastRead 7 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 1 FirstWrite -1}}
	k2c_relu_func {
		x {Type IO LastRead 1 FirstWrite 3}
		size {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
]}

set Spec2ImplPortList { 
	output_array { ap_memory {  { output_array_address0 mem_address 1 15 }  { output_array_ce0 mem_ce 1 1 }  { output_array_we0 mem_we 1 1 }  { output_array_d0 mem_din 1 32 }  { output_array_q0 mem_dout 0 32 }  { output_array_address1 mem_address 1 15 }  { output_array_ce1 mem_ce 1 1 }  { output_array_we1 mem_we 1 1 }  { output_array_d1 mem_din 1 32 } } }
	input_array { ap_memory {  { input_array_address0 mem_address 1 15 }  { input_array_ce0 mem_ce 1 1 }  { input_array_q0 mem_dout 0 32 } } }
	input_ndim_read { ap_none {  { input_ndim_read in_data 0 64 } } }
	input_numel_read { ap_none {  { input_numel_read in_data 0 64 } } }
	input_shape { ap_memory {  { input_shape_address0 mem_address 1 3 }  { input_shape_ce0 mem_ce 1 1 }  { input_shape_q0 mem_dout 0 64 } } }
	kernel_array { ap_memory {  { kernel_array_address0 mem_address 1 15 }  { kernel_array_ce0 mem_ce 1 1 }  { kernel_array_q0 mem_dout 0 32 } } }
	kernel_shape { ap_memory {  { kernel_shape_address0 mem_address 1 3 }  { kernel_shape_ce0 mem_ce 1 1 }  { kernel_shape_q0 mem_dout 0 64 } } }
	bias_array { ap_memory {  { bias_array_address0 mem_address 1 15 }  { bias_array_ce0 mem_ce 1 1 }  { bias_array_q0 mem_dout 0 32 } } }
}
