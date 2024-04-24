set C_TypeInfoList {{ 
"WebModel" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"dense_69_input_input": [[],{ "pointer": "0"}] }, {"dense_71_output": [[],{ "pointer": "0"}] }],["1","2","3","4","5","6","7","8","9","10"],""],
 "1": [ "dense_71_kernel", [[],"0"],""],
 "2": [ "dense_71_fwork", [[], {"array": [ {"scalar": "float"}, [128]]}],""],
 "3": [ "dense_71_bias", [[],"0"],""],
 "4": [ "dense_70_output", [[],"0"],""],
 "5": [ "dense_70_kernel", [[],"0"],""],
 "6": [ "dense_70_fwork", [[], {"array": [ {"scalar": "float"}, [4160]]}],""],
 "7": [ "dense_70_bias", [[],"0"],""],
 "8": [ "dense_69_output", [[],"0"],""],
 "9": [ "dense_69_kernel", [[],"0"],""],
 "10": [ "dense_69_bias", [[],"0"],""], 
"0": [ "k2c_tensor", {"typedef": [[[],"11"],""]}], 
"11": [ "k2c_tensor", {"struct": [[],[],[{ "array": [[],  {"array": [ {"scalar": "float"}, [26000]]}]},{ "ndim": [[64], "12"]},{ "numel": [[64], "12"]},{ "shape": [[],  {"array": ["12", [5]]}]}],""]}], 
"12": [ "size_t", {"typedef": [[[], {"scalar": "long long unsigned int"}],""]}]
}}
set moduleName WebModel
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
set C_modelName {WebModel}
set C_modelType { void 0 }
set C_modelArgList {
	{ dense_69_input_input_array float 32 regular {array 26000 { 1 3 } 1 1 }  }
	{ dense_69_input_input_ndim int 64 regular {pointer 0}  }
	{ dense_69_input_input_numel int 64 regular {pointer 0}  }
	{ dense_69_input_input_shape int 64 regular {array 5 { 1 3 } 1 1 }  }
	{ dense_71_output_array float 32 regular {array 26000 { 2 2 } 1 1 }  }
	{ dense_71_output_ndim int 64 unused {pointer 0}  }
	{ dense_71_output_numel int 64 regular {pointer 0}  }
	{ dense_71_output_shape int 64 unused {array 5 { } 0 1 }  }
}
set C_modelArgMapList {[ 
	{ "Name" : "dense_69_input_input_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_69_input_input.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 25999,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_69_input_input_ndim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_69_input_input.ndim","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_69_input_input_numel", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_69_input_input.numel","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_69_input_input_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_69_input_input.shape","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_71_output_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE", "bitSlice":[{"low":0,"up":31,"cElement": [{"cName": "dense_71_output.array","cData": "float","bit_use": { "low": 0,"up": 31},"cArray": [{"low" : 0,"up" : 25999,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_71_output_ndim", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_71_output.ndim","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_71_output_numel", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_71_output.numel","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 0,"step" : 1}]}]}]} , 
 	{ "Name" : "dense_71_output_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "NONE", "bitSlice":[{"low":0,"up":63,"cElement": [{"cName": "dense_71_output.shape","cData": "long long unsigned int","bit_use": { "low": 0,"up": 63},"cArray": [{"low" : 0,"up" : 4,"step" : 1}]}]}]} ]}
# RTL Port declarations: 
set portNum 36
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ dense_69_input_input_array_address0 sc_out sc_lv 15 signal 0 } 
	{ dense_69_input_input_array_ce0 sc_out sc_logic 1 signal 0 } 
	{ dense_69_input_input_array_q0 sc_in sc_lv 32 signal 0 } 
	{ dense_69_input_input_ndim sc_in sc_lv 64 signal 1 } 
	{ dense_69_input_input_numel sc_in sc_lv 64 signal 2 } 
	{ dense_69_input_input_shape_address0 sc_out sc_lv 3 signal 3 } 
	{ dense_69_input_input_shape_ce0 sc_out sc_logic 1 signal 3 } 
	{ dense_69_input_input_shape_q0 sc_in sc_lv 64 signal 3 } 
	{ dense_71_output_array_address0 sc_out sc_lv 15 signal 4 } 
	{ dense_71_output_array_ce0 sc_out sc_logic 1 signal 4 } 
	{ dense_71_output_array_we0 sc_out sc_logic 1 signal 4 } 
	{ dense_71_output_array_d0 sc_out sc_lv 32 signal 4 } 
	{ dense_71_output_array_q0 sc_in sc_lv 32 signal 4 } 
	{ dense_71_output_array_address1 sc_out sc_lv 15 signal 4 } 
	{ dense_71_output_array_ce1 sc_out sc_logic 1 signal 4 } 
	{ dense_71_output_array_we1 sc_out sc_logic 1 signal 4 } 
	{ dense_71_output_array_d1 sc_out sc_lv 32 signal 4 } 
	{ dense_71_output_array_q1 sc_in sc_lv 32 signal 4 } 
	{ dense_71_output_ndim sc_in sc_lv 64 signal 5 } 
	{ dense_71_output_numel sc_in sc_lv 64 signal 6 } 
	{ dense_71_output_shape_address0 sc_out sc_lv 3 signal 7 } 
	{ dense_71_output_shape_ce0 sc_out sc_logic 1 signal 7 } 
	{ dense_71_output_shape_we0 sc_out sc_logic 1 signal 7 } 
	{ dense_71_output_shape_d0 sc_out sc_lv 64 signal 7 } 
	{ dense_71_output_shape_q0 sc_in sc_lv 64 signal 7 } 
	{ dense_71_output_shape_address1 sc_out sc_lv 3 signal 7 } 
	{ dense_71_output_shape_ce1 sc_out sc_logic 1 signal 7 } 
	{ dense_71_output_shape_we1 sc_out sc_logic 1 signal 7 } 
	{ dense_71_output_shape_d1 sc_out sc_lv 64 signal 7 } 
	{ dense_71_output_shape_q1 sc_in sc_lv 64 signal 7 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "dense_69_input_input_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "dense_69_input_input_array", "role": "address0" }} , 
 	{ "name": "dense_69_input_input_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_69_input_input_array", "role": "ce0" }} , 
 	{ "name": "dense_69_input_input_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_69_input_input_array", "role": "q0" }} , 
 	{ "name": "dense_69_input_input_ndim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_69_input_input_ndim", "role": "default" }} , 
 	{ "name": "dense_69_input_input_numel", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_69_input_input_numel", "role": "default" }} , 
 	{ "name": "dense_69_input_input_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dense_69_input_input_shape", "role": "address0" }} , 
 	{ "name": "dense_69_input_input_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_69_input_input_shape", "role": "ce0" }} , 
 	{ "name": "dense_69_input_input_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_69_input_input_shape", "role": "q0" }} , 
 	{ "name": "dense_71_output_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "dense_71_output_array", "role": "address0" }} , 
 	{ "name": "dense_71_output_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_71_output_array", "role": "ce0" }} , 
 	{ "name": "dense_71_output_array_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_71_output_array", "role": "we0" }} , 
 	{ "name": "dense_71_output_array_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_71_output_array", "role": "d0" }} , 
 	{ "name": "dense_71_output_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_71_output_array", "role": "q0" }} , 
 	{ "name": "dense_71_output_array_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "dense_71_output_array", "role": "address1" }} , 
 	{ "name": "dense_71_output_array_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_71_output_array", "role": "ce1" }} , 
 	{ "name": "dense_71_output_array_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_71_output_array", "role": "we1" }} , 
 	{ "name": "dense_71_output_array_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_71_output_array", "role": "d1" }} , 
 	{ "name": "dense_71_output_array_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "dense_71_output_array", "role": "q1" }} , 
 	{ "name": "dense_71_output_ndim", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_71_output_ndim", "role": "default" }} , 
 	{ "name": "dense_71_output_numel", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_71_output_numel", "role": "default" }} , 
 	{ "name": "dense_71_output_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dense_71_output_shape", "role": "address0" }} , 
 	{ "name": "dense_71_output_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_71_output_shape", "role": "ce0" }} , 
 	{ "name": "dense_71_output_shape_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_71_output_shape", "role": "we0" }} , 
 	{ "name": "dense_71_output_shape_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_71_output_shape", "role": "d0" }} , 
 	{ "name": "dense_71_output_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_71_output_shape", "role": "q0" }} , 
 	{ "name": "dense_71_output_shape_address1", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "dense_71_output_shape", "role": "address1" }} , 
 	{ "name": "dense_71_output_shape_ce1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_71_output_shape", "role": "ce1" }} , 
 	{ "name": "dense_71_output_shape_we1", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "dense_71_output_shape", "role": "we1" }} , 
 	{ "name": "dense_71_output_shape_d1", "direction": "out", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_71_output_shape", "role": "d1" }} , 
 	{ "name": "dense_71_output_shape_q1", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "dense_71_output_shape", "role": "q1" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "59", "96"],
		"CDFG" : "WebModel",
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
			{"State" : "ap_ST_fsm_state20", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_fu_569"},
			{"State" : "ap_ST_fsm_state18", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_1_fu_594"},
			{"State" : "ap_ST_fsm_state16", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_2_fu_618"}],
		"Port" : [
			{"Name" : "dense_69_input_input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_k2c_dense_2_fu_618", "Port" : "input_array"}]},
			{"Name" : "dense_69_input_input_ndim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_69_input_input_numel", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_69_input_input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_k2c_dense_2_fu_618", "Port" : "input_shape"}]},
			{"Name" : "dense_71_output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "grp_k2c_dense_fu_569", "Port" : "output_array"}]},
			{"Name" : "dense_71_output_ndim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_71_output_numel", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_71_output_shape", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "dense_70_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "grp_k2c_dense_fu_569", "Port" : "input_array"},
					{"ID" : "59", "SubInstance" : "grp_k2c_dense_1_fu_594", "Port" : "output_array"}]},
			{"Name" : "dense_70_bias_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_70_bias_array_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "grp_k2c_dense_1_fu_594", "Port" : "bias_array"}]},
			{"Name" : "dense_71_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_71_kernel_arra_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "grp_k2c_dense_fu_569", "Port" : "kernel_array"}]},
			{"Name" : "dense_69_bias_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_69_bias_array_5", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_k2c_dense_2_fu_618", "Port" : "bias_array"}]},
			{"Name" : "dense_69_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_k2c_dense_2_fu_618", "Port" : "output_array"},
					{"ID" : "59", "SubInstance" : "grp_k2c_dense_1_fu_594", "Port" : "input_array"}]},
			{"Name" : "dense_69_output_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_69_output_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_69_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_70_output_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_70_output_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_70_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_70_kernel_arra_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "grp_k2c_dense_1_fu_594", "Port" : "kernel_array"}]},
			{"Name" : "dense_70_kernel_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_70_kernel_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_70_bias_numel", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_71_kernel_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_71_kernel_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_71_bias_numel", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_69_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_k2c_dense_2_fu_618", "Port" : "dense_69_fwork"}]},
			{"Name" : "dense_69_kernel_arra_3", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_k2c_dense_2_fu_618", "Port" : "kernel_array_0"}]},
			{"Name" : "dense_69_kernel_arra_2", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_k2c_dense_2_fu_618", "Port" : "kernel_array_1"}]},
			{"Name" : "dense_69_kernel_arra_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_k2c_dense_2_fu_618", "Port" : "kernel_array_2"}]},
			{"Name" : "dense_69_kernel_arra_4", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_k2c_dense_2_fu_618", "Port" : "kernel_array_3"}]},
			{"Name" : "dense_69_kernel_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "96", "SubInstance" : "grp_k2c_dense_2_fu_618", "Port" : "kernel_shape"}]},
			{"Name" : "dense_70_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "grp_k2c_dense_1_fu_594", "Port" : "dense_70_fwork"}]},
			{"Name" : "dense_69_output_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "grp_k2c_dense_1_fu_594", "Port" : "input_shape"}]},
			{"Name" : "dense_70_kernel_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "59", "SubInstance" : "grp_k2c_dense_1_fu_594", "Port" : "kernel_shape"}]},
			{"Name" : "dense_71_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "grp_k2c_dense_fu_569", "Port" : "dense_71_fwork"}]},
			{"Name" : "dense_70_output_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "grp_k2c_dense_fu_569", "Port" : "input_shape"}]},
			{"Name" : "dense_71_kernel_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "grp_k2c_dense_fu_569", "Port" : "kernel_shape"}]},
			{"Name" : "dense_71_bias_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "22", "SubInstance" : "grp_k2c_dense_fu_569", "Port" : "bias_array"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_output_arra_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_bias_array_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_bias_array_2_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_71_kernel_arra_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_71_kernel_arra_0_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_bias_array_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_bias_array_5_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_output_arra_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_kernel_arra_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_kernel_arra_1_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_3_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_2_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_1_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_4_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_shap_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_output_shap_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_kernel_shap_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_output_shap_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_71_kernel_shap_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_71_bias_array_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569", "Parent" : "0", "Child" : ["23", "47", "55", "56", "57", "58"],
		"CDFG" : "k2c_dense",
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_2_fu_238"},
			{"State" : "ap_ST_fsm_state43", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_fu_263"}],
		"Port" : [
			{"Name" : "output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "47", "SubInstance" : "grp_k2c_affine_matmul_fu_263", "Port" : "C"},
					{"ID" : "23", "SubInstance" : "grp_k2c_dot_2_fu_238", "Port" : "C_array"}]},
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "47", "SubInstance" : "grp_k2c_affine_matmul_fu_263", "Port" : "A"},
					{"ID" : "23", "SubInstance" : "grp_k2c_dot_2_fu_238", "Port" : "A_array"}]},
			{"Name" : "input_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_k2c_dot_2_fu_238", "Port" : "A_shape"}]},
			{"Name" : "kernel_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "47", "SubInstance" : "grp_k2c_affine_matmul_fu_263", "Port" : "B"},
					{"ID" : "23", "SubInstance" : "grp_k2c_dot_2_fu_238", "Port" : "B_array"}]},
			{"Name" : "kernel_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_k2c_dot_2_fu_238", "Port" : "B_shape"}]},
			{"Name" : "bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "47", "SubInstance" : "grp_k2c_affine_matmul_fu_263", "Port" : "d"}]},
			{"Name" : "bias_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_71_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "23", "SubInstance" : "grp_k2c_dot_2_fu_238", "Port" : "dense_71_fwork"}]}]},
	{"ID" : "23", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238", "Parent" : "22", "Child" : ["24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "39", "41", "42", "43", "44", "45", "46"],
		"CDFG" : "k2c_dot_2",
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
			{"State" : "ap_ST_fsm_state242", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_matmul_2_fu_625"},
			{"State" : "ap_ST_fsm_state165", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_637"},
			{"State" : "ap_ST_fsm_state241", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_637"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_k2c_matmul_2_fu_625", "Port" : "C"}]},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_71_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_k2c_matmul_2_fu_625", "Port" : "B"}]}]},
	{"ID" : "24", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.dense_71_fwork_U", "Parent" : "23"},
	{"ID" : "25", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.permA_U", "Parent" : "23"},
	{"ID" : "26", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.permB_U", "Parent" : "23"},
	{"ID" : "27", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.freeA_U", "Parent" : "23"},
	{"ID" : "28", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.freeB_U", "Parent" : "23"},
	{"ID" : "29", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.newshpA_U", "Parent" : "23"},
	{"ID" : "30", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.newshpB_U", "Parent" : "23"},
	{"ID" : "31", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.Asub_U", "Parent" : "23"},
	{"ID" : "32", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.Bsub_U", "Parent" : "23"},
	{"ID" : "33", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.grp_k2c_matmul_2_fu_625", "Parent" : "23", "Child" : ["34", "35", "36", "37", "38"],
		"CDFG" : "k2c_matmul_2",
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
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "34", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.grp_k2c_matmul_2_fu_625.WebModel_fadd_32ncud_U138", "Parent" : "33"},
	{"ID" : "35", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.grp_k2c_matmul_2_fu_625.WebModel_fmul_32ndEe_U139", "Parent" : "33"},
	{"ID" : "36", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.grp_k2c_matmul_2_fu_625.WebModel_mul_64s_bkb_U140", "Parent" : "33"},
	{"ID" : "37", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.grp_k2c_matmul_2_fu_625.WebModel_mul_64s_bkb_U141", "Parent" : "33"},
	{"ID" : "38", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.grp_k2c_matmul_2_fu_625.WebModel_mul_64nseOg_U142", "Parent" : "33"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.grp_k2c_sub2idx_fu_637", "Parent" : "23", "Child" : ["40"],
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
	{"ID" : "40", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.grp_k2c_sub2idx_fu_637.WebModel_mul_64s_bkb_U1", "Parent" : "39"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.WebModel_udiv_64ng8j_U149", "Parent" : "23"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.WebModel_udiv_64ng8j_U150", "Parent" : "23"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.WebModel_urem_64nibs_U151", "Parent" : "23"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.WebModel_udiv_64njbC_U152", "Parent" : "23"},
	{"ID" : "45", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.WebModel_urem_64nibs_U153", "Parent" : "23"},
	{"ID" : "46", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_dot_2_fu_238.WebModel_udiv_64njbC_U154", "Parent" : "23"},
	{"ID" : "47", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_affine_matmul_fu_263", "Parent" : "22", "Child" : ["48", "49", "50", "51", "52", "53", "54"],
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
			{"Name" : "C", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "48", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_affine_matmul_fu_263.WebModel_fadd_32ncud_U109", "Parent" : "47"},
	{"ID" : "49", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_affine_matmul_fu_263.WebModel_fmul_32ndEe_U110", "Parent" : "47"},
	{"ID" : "50", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_affine_matmul_fu_263.WebModel_mul_64s_bkb_U111", "Parent" : "47"},
	{"ID" : "51", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_affine_matmul_fu_263.WebModel_mul_64nseOg_U112", "Parent" : "47"},
	{"ID" : "52", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_affine_matmul_fu_263.WebModel_mul_mul_mb6_U113", "Parent" : "47"},
	{"ID" : "53", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_affine_matmul_fu_263.WebModel_mul_mul_mb6_U114", "Parent" : "47"},
	{"ID" : "54", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.grp_k2c_affine_matmul_fu_263.WebModel_mac_mulaocq_U115", "Parent" : "47"},
	{"ID" : "55", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.WebModel_fadd_32ncud_U166", "Parent" : "22"},
	{"ID" : "56", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.WebModel_fdiv_32nqcK_U167", "Parent" : "22"},
	{"ID" : "57", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.WebModel_fexp_32nrcU_U168", "Parent" : "22"},
	{"ID" : "58", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_569.WebModel_mul_64s_bkb_U169", "Parent" : "22"},
	{"ID" : "59", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594", "Parent" : "0", "Child" : ["60", "84", "92", "94", "95"],
		"CDFG" : "k2c_dense_1",
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_1_fu_186"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_fu_211"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_relu_func_fu_227"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_relu_func_fu_227"}],
		"Port" : [
			{"Name" : "output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "grp_k2c_affine_matmul_fu_211", "Port" : "C"},
					{"ID" : "60", "SubInstance" : "grp_k2c_dot_1_fu_186", "Port" : "C_array"},
					{"ID" : "92", "SubInstance" : "grp_k2c_relu_func_fu_227", "Port" : "x"}]},
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "grp_k2c_affine_matmul_fu_211", "Port" : "A"},
					{"ID" : "60", "SubInstance" : "grp_k2c_dot_1_fu_186", "Port" : "A_array"}]},
			{"Name" : "input_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "grp_k2c_dot_1_fu_186", "Port" : "A_shape"}]},
			{"Name" : "kernel_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "grp_k2c_affine_matmul_fu_211", "Port" : "B"},
					{"ID" : "60", "SubInstance" : "grp_k2c_dot_1_fu_186", "Port" : "B_array"}]},
			{"Name" : "kernel_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "grp_k2c_dot_1_fu_186", "Port" : "B_shape"}]},
			{"Name" : "bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "84", "SubInstance" : "grp_k2c_affine_matmul_fu_211", "Port" : "d"}]},
			{"Name" : "bias_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_70_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "60", "SubInstance" : "grp_k2c_dot_1_fu_186", "Port" : "dense_70_fwork"}]}]},
	{"ID" : "60", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186", "Parent" : "59", "Child" : ["61", "62", "63", "64", "65", "66", "67", "68", "69", "70", "76", "78", "79", "80", "81", "82", "83"],
		"CDFG" : "k2c_dot_1",
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
			{"State" : "ap_ST_fsm_state242", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_matmul_1_fu_625"},
			{"State" : "ap_ST_fsm_state165", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_637"},
			{"State" : "ap_ST_fsm_state241", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_637"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "grp_k2c_matmul_1_fu_625", "Port" : "C"}]},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "B_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "p_read4", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_70_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "70", "SubInstance" : "grp_k2c_matmul_1_fu_625", "Port" : "B"}]}]},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.dense_70_fwork_U", "Parent" : "60"},
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.permA_U", "Parent" : "60"},
	{"ID" : "63", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.permB_U", "Parent" : "60"},
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.freeA_U", "Parent" : "60"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.freeB_U", "Parent" : "60"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.newshpA_U", "Parent" : "60"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.newshpB_U", "Parent" : "60"},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.Asub_U", "Parent" : "60"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.Bsub_U", "Parent" : "60"},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_625", "Parent" : "60", "Child" : ["71", "72", "73", "74", "75"],
		"CDFG" : "k2c_matmul_1",
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
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_offset", "Type" : "None", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "71", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_625.WebModel_fadd_32ncud_U81", "Parent" : "70"},
	{"ID" : "72", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_625.WebModel_fmul_32ndEe_U82", "Parent" : "70"},
	{"ID" : "73", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_625.WebModel_mul_64s_bkb_U83", "Parent" : "70"},
	{"ID" : "74", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_625.WebModel_mul_64s_bkb_U84", "Parent" : "70"},
	{"ID" : "75", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_625.WebModel_mul_64nseOg_U85", "Parent" : "70"},
	{"ID" : "76", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.grp_k2c_sub2idx_fu_637", "Parent" : "60", "Child" : ["77"],
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
	{"ID" : "77", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.grp_k2c_sub2idx_fu_637.WebModel_mul_64s_bkb_U1", "Parent" : "76"},
	{"ID" : "78", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.WebModel_udiv_64ng8j_U92", "Parent" : "60"},
	{"ID" : "79", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.WebModel_udiv_64ng8j_U93", "Parent" : "60"},
	{"ID" : "80", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.WebModel_urem_64nibs_U94", "Parent" : "60"},
	{"ID" : "81", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.WebModel_udiv_64njbC_U95", "Parent" : "60"},
	{"ID" : "82", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.WebModel_urem_64nibs_U96", "Parent" : "60"},
	{"ID" : "83", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_dot_1_fu_186.WebModel_udiv_64njbC_U97", "Parent" : "60"},
	{"ID" : "84", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_affine_matmul_fu_211", "Parent" : "59", "Child" : ["85", "86", "87", "88", "89", "90", "91"],
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
			{"Name" : "C", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "85", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_affine_matmul_fu_211.WebModel_fadd_32ncud_U109", "Parent" : "84"},
	{"ID" : "86", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_affine_matmul_fu_211.WebModel_fmul_32ndEe_U110", "Parent" : "84"},
	{"ID" : "87", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_affine_matmul_fu_211.WebModel_mul_64s_bkb_U111", "Parent" : "84"},
	{"ID" : "88", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_affine_matmul_fu_211.WebModel_mul_64nseOg_U112", "Parent" : "84"},
	{"ID" : "89", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_affine_matmul_fu_211.WebModel_mul_mul_mb6_U113", "Parent" : "84"},
	{"ID" : "90", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_affine_matmul_fu_211.WebModel_mul_mul_mb6_U114", "Parent" : "84"},
	{"ID" : "91", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_affine_matmul_fu_211.WebModel_mac_mulaocq_U115", "Parent" : "84"},
	{"ID" : "92", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_relu_func_fu_227", "Parent" : "59", "Child" : ["93"],
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
	{"ID" : "93", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.grp_k2c_relu_func_fu_227.WebModel_fcmp_32nlbW_U46", "Parent" : "92"},
	{"ID" : "94", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.WebModel_fadd_32ncud_U124", "Parent" : "59"},
	{"ID" : "95", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_594.WebModel_mul_64s_bkb_U125", "Parent" : "59"},
	{"ID" : "96", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618", "Parent" : "0", "Child" : ["97", "122", "130", "132", "133"],
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_fu_182"},
			{"State" : "ap_ST_fsm_state15", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_1_fu_209"},
			{"State" : "ap_ST_fsm_state12", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_relu_func_fu_231"},
			{"State" : "ap_ST_fsm_state17", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_relu_func_fu_231"}],
		"Port" : [
			{"Name" : "output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "grp_k2c_affine_matmul_1_fu_209", "Port" : "C"},
					{"ID" : "97", "SubInstance" : "grp_k2c_dot_fu_182", "Port" : "C_array"},
					{"ID" : "130", "SubInstance" : "grp_k2c_relu_func_fu_231", "Port" : "x"}]},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "grp_k2c_affine_matmul_1_fu_209", "Port" : "A"},
					{"ID" : "97", "SubInstance" : "grp_k2c_dot_fu_182", "Port" : "A_array"}]},
			{"Name" : "input_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "97", "SubInstance" : "grp_k2c_dot_fu_182", "Port" : "A_shape"}]},
			{"Name" : "kernel_array_0", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "grp_k2c_affine_matmul_1_fu_209", "Port" : "B_0"},
					{"ID" : "97", "SubInstance" : "grp_k2c_dot_fu_182", "Port" : "B_array_0"}]},
			{"Name" : "kernel_array_1", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "grp_k2c_affine_matmul_1_fu_209", "Port" : "B_1"},
					{"ID" : "97", "SubInstance" : "grp_k2c_dot_fu_182", "Port" : "B_array_1"}]},
			{"Name" : "kernel_array_2", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "grp_k2c_affine_matmul_1_fu_209", "Port" : "B_2"},
					{"ID" : "97", "SubInstance" : "grp_k2c_dot_fu_182", "Port" : "B_array_2"}]},
			{"Name" : "kernel_array_3", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "grp_k2c_affine_matmul_1_fu_209", "Port" : "B_3"},
					{"ID" : "97", "SubInstance" : "grp_k2c_dot_fu_182", "Port" : "B_array_3"}]},
			{"Name" : "kernel_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "97", "SubInstance" : "grp_k2c_dot_fu_182", "Port" : "B_shape"}]},
			{"Name" : "bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "122", "SubInstance" : "grp_k2c_affine_matmul_1_fu_209", "Port" : "d"}]},
			{"Name" : "dense_69_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "97", "SubInstance" : "grp_k2c_dot_fu_182", "Port" : "dense_69_fwork"}]}]},
	{"ID" : "97", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182", "Parent" : "96", "Child" : ["98", "99", "100", "101", "102", "103", "104", "105", "106", "107", "113", "115", "116", "117", "118", "119", "120", "121"],
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
			{"State" : "ap_ST_fsm_state242", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_matmul_fu_686"},
			{"State" : "ap_ST_fsm_state165", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_698"},
			{"State" : "ap_ST_fsm_state241", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_698"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "107", "SubInstance" : "grp_k2c_matmul_fu_686", "Port" : "C"}]},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_array_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_array_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_array_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_array_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "axesA_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_69_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "107", "SubInstance" : "grp_k2c_matmul_fu_686", "Port" : "A"}]}]},
	{"ID" : "98", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.dense_69_fwork_U", "Parent" : "97"},
	{"ID" : "99", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.permA_U", "Parent" : "97"},
	{"ID" : "100", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.permB_U", "Parent" : "97"},
	{"ID" : "101", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.freeA_U", "Parent" : "97"},
	{"ID" : "102", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.freeB_U", "Parent" : "97"},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.newshpA_U", "Parent" : "97"},
	{"ID" : "104", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.newshpB_U", "Parent" : "97"},
	{"ID" : "105", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.Asub_U", "Parent" : "97"},
	{"ID" : "106", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.Bsub_U", "Parent" : "97"},
	{"ID" : "107", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.grp_k2c_matmul_fu_686", "Parent" : "97", "Child" : ["108", "109", "110", "111", "112"],
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
	{"ID" : "108", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.grp_k2c_matmul_fu_686.WebModel_fadd_32ncud_U6", "Parent" : "107"},
	{"ID" : "109", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.grp_k2c_matmul_fu_686.WebModel_fmul_32ndEe_U7", "Parent" : "107"},
	{"ID" : "110", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.grp_k2c_matmul_fu_686.WebModel_mul_64s_bkb_U8", "Parent" : "107"},
	{"ID" : "111", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.grp_k2c_matmul_fu_686.WebModel_mul_64s_bkb_U9", "Parent" : "107"},
	{"ID" : "112", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.grp_k2c_matmul_fu_686.WebModel_mul_64nseOg_U10", "Parent" : "107"},
	{"ID" : "113", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.grp_k2c_sub2idx_fu_698", "Parent" : "97", "Child" : ["114"],
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
	{"ID" : "114", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.grp_k2c_sub2idx_fu_698.WebModel_mul_64s_bkb_U1", "Parent" : "113"},
	{"ID" : "115", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.WebModel_udiv_64ng8j_U20", "Parent" : "97"},
	{"ID" : "116", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.WebModel_udiv_18nhbi_U21", "Parent" : "97"},
	{"ID" : "117", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.WebModel_urem_64nibs_U22", "Parent" : "97"},
	{"ID" : "118", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.WebModel_udiv_64njbC_U23", "Parent" : "97"},
	{"ID" : "119", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.WebModel_urem_64nibs_U24", "Parent" : "97"},
	{"ID" : "120", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.WebModel_udiv_64njbC_U25", "Parent" : "97"},
	{"ID" : "121", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_dot_fu_182.WebModel_mux_464_kbM_U26", "Parent" : "97"},
	{"ID" : "122", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_affine_matmul_1_fu_209", "Parent" : "96", "Child" : ["123", "124", "125", "126", "127", "128", "129"],
		"CDFG" : "k2c_affine_matmul_1",
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
			{"Name" : "C", "Type" : "Memory", "Direction" : "O"},
			{"Name" : "A", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_0", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "d", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "outrows", "Type" : "None", "Direction" : "I"},
			{"Name" : "outcols", "Type" : "None", "Direction" : "I"},
			{"Name" : "innerdim", "Type" : "None", "Direction" : "I"}]},
	{"ID" : "123", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_affine_matmul_1_fu_209.WebModel_fadd_32ncud_U50", "Parent" : "122"},
	{"ID" : "124", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_affine_matmul_1_fu_209.WebModel_fmul_32ndEe_U51", "Parent" : "122"},
	{"ID" : "125", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_affine_matmul_1_fu_209.WebModel_mul_64s_bkb_U52", "Parent" : "122"},
	{"ID" : "126", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_affine_matmul_1_fu_209.WebModel_mul_64nseOg_U53", "Parent" : "122"},
	{"ID" : "127", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_affine_matmul_1_fu_209.WebModel_mux_464_kbM_U54", "Parent" : "122"},
	{"ID" : "128", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_affine_matmul_1_fu_209.WebModel_mul_mul_mb6_U55", "Parent" : "122"},
	{"ID" : "129", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_affine_matmul_1_fu_209.WebModel_mul_mul_mb6_U56", "Parent" : "122"},
	{"ID" : "130", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_relu_func_fu_231", "Parent" : "96", "Child" : ["131"],
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
	{"ID" : "131", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.grp_k2c_relu_func_fu_231.WebModel_fcmp_32nlbW_U46", "Parent" : "130"},
	{"ID" : "132", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.WebModel_fadd_32ncud_U68", "Parent" : "96"},
	{"ID" : "133", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_618.WebModel_mul_64s_bkb_U69", "Parent" : "96"}]}


set ArgLastReadFirstWriteLatency {
	WebModel {
		dense_69_input_input_array {Type I LastRead 87 FirstWrite -1}
		dense_69_input_input_ndim {Type I LastRead 11 FirstWrite -1}
		dense_69_input_input_numel {Type I LastRead 11 FirstWrite -1}
		dense_69_input_input_shape {Type I LastRead 84 FirstWrite -1}
		dense_71_output_array {Type IO LastRead 12 FirstWrite 2}
		dense_71_output_ndim {Type I LastRead -1 FirstWrite -1}
		dense_71_output_numel {Type I LastRead 15 FirstWrite -1}
		dense_71_output_shape {Type X LastRead -1 FirstWrite -1}
		dense_70_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_70_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_70_bias_array_2 {Type IO LastRead -1 FirstWrite -1}
		dense_71_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_71_kernel_arra_0 {Type IO LastRead -1 FirstWrite -1}
		dense_69_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_69_bias_array_5 {Type IO LastRead -1 FirstWrite -1}
		dense_69_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_69_output_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_69_output_nume {Type IO LastRead -1 FirstWrite -1}
		dense_69_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_70_output_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_70_output_nume {Type IO LastRead -1 FirstWrite -1}
		dense_70_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_70_kernel_arra_1 {Type IO LastRead -1 FirstWrite -1}
		dense_70_kernel_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_70_kernel_nume {Type IO LastRead -1 FirstWrite -1}
		dense_70_bias_numel {Type IO LastRead -1 FirstWrite -1}
		dense_71_kernel_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_71_kernel_nume {Type IO LastRead -1 FirstWrite -1}
		dense_71_bias_numel {Type IO LastRead -1 FirstWrite -1}
		dense_69_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_69_kernel_arra_3 {Type IO LastRead -1 FirstWrite -1}
		dense_69_kernel_arra_2 {Type IO LastRead -1 FirstWrite -1}
		dense_69_kernel_arra_1 {Type IO LastRead -1 FirstWrite -1}
		dense_69_kernel_arra_4 {Type IO LastRead -1 FirstWrite -1}
		dense_69_kernel_shap {Type IO LastRead -1 FirstWrite -1}
		dense_70_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_69_output_shap {Type IO LastRead -1 FirstWrite -1}
		dense_70_kernel_shap {Type IO LastRead -1 FirstWrite -1}
		dense_71_fwork {Type IO LastRead -1 FirstWrite -1}
		dense_70_output_shap {Type IO LastRead -1 FirstWrite -1}
		dense_71_kernel_shap {Type IO LastRead -1 FirstWrite -1}
		dense_71_bias_array {Type IO LastRead -1 FirstWrite -1}}
	k2c_dense {
		output_array {Type IO LastRead 12 FirstWrite 2}
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_array {Type I LastRead 87 FirstWrite -1}
		input_ndim_read {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 84 FirstWrite -1}
		kernel_array {Type I LastRead 88 FirstWrite -1}
		kernel_ndim_read {Type I LastRead 0 FirstWrite -1}
		kernel_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_shape {Type I LastRead 85 FirstWrite -1}
		bias_array {Type I LastRead 4 FirstWrite -1}
		bias_numel_read {Type I LastRead 0 FirstWrite -1}
		dense_71_fwork {Type IO LastRead -1 FirstWrite -1}}
	k2c_dot_2 {
		C_array {Type IO LastRead 12 FirstWrite 2}
		A_array {Type I LastRead 87 FirstWrite -1}
		A_ndim_read {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		A_shape {Type I LastRead 84 FirstWrite -1}
		B_array {Type I LastRead 88 FirstWrite -1}
		B_ndim_read {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		B_shape {Type I LastRead 85 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		dense_71_fwork {Type IO LastRead -1 FirstWrite -1}}
	k2c_matmul_2 {
		C {Type IO LastRead 12 FirstWrite 2}
		B {Type I LastRead 9 FirstWrite -1}
		B_offset {Type I LastRead 1 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 1 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 1 FirstWrite -1}
		shape {Type I LastRead 3 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul {
		C {Type O LastRead -1 FirstWrite 2}
		A {Type I LastRead 6 FirstWrite -1}
		B {Type I LastRead 6 FirstWrite -1}
		d {Type I LastRead 4 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 1 FirstWrite -1}}
	k2c_dense_1 {
		output_array {Type IO LastRead 12 FirstWrite 2}
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_array {Type I LastRead 87 FirstWrite -1}
		input_ndim_read {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 84 FirstWrite -1}
		kernel_array {Type I LastRead 88 FirstWrite -1}
		kernel_ndim_read {Type I LastRead 0 FirstWrite -1}
		kernel_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_shape {Type I LastRead 85 FirstWrite -1}
		bias_array {Type I LastRead 4 FirstWrite -1}
		bias_numel_read {Type I LastRead 0 FirstWrite -1}
		dense_70_fwork {Type IO LastRead -1 FirstWrite -1}}
	k2c_dot_1 {
		C_array {Type IO LastRead 12 FirstWrite 2}
		A_array {Type I LastRead 87 FirstWrite -1}
		A_ndim_read {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		A_shape {Type I LastRead 84 FirstWrite -1}
		B_array {Type I LastRead 88 FirstWrite -1}
		B_ndim_read {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		B_shape {Type I LastRead 85 FirstWrite -1}
		p_read4 {Type I LastRead 0 FirstWrite -1}
		dense_70_fwork {Type IO LastRead -1 FirstWrite -1}}
	k2c_matmul_1 {
		C {Type IO LastRead 12 FirstWrite 2}
		B {Type I LastRead 9 FirstWrite -1}
		B_offset {Type I LastRead 1 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 1 FirstWrite -1}}
	k2c_sub2idx {
		sub {Type I LastRead 1 FirstWrite -1}
		shape {Type I LastRead 3 FirstWrite -1}
		ndim {Type I LastRead 0 FirstWrite -1}}
	k2c_affine_matmul {
		C {Type O LastRead -1 FirstWrite 2}
		A {Type I LastRead 6 FirstWrite -1}
		B {Type I LastRead 6 FirstWrite -1}
		d {Type I LastRead 4 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 1 FirstWrite -1}}
	k2c_relu_func {
		x {Type IO LastRead 1 FirstWrite 3}
		size {Type I LastRead 0 FirstWrite -1}}
	k2c_dense_2 {
		output_array {Type IO LastRead 12 FirstWrite 2}
		input_array {Type I LastRead 87 FirstWrite -1}
		input_ndim_read {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 84 FirstWrite -1}
		kernel_array_0 {Type I LastRead 88 FirstWrite -1}
		kernel_array_1 {Type I LastRead 88 FirstWrite -1}
		kernel_array_2 {Type I LastRead 88 FirstWrite -1}
		kernel_array_3 {Type I LastRead 88 FirstWrite -1}
		kernel_shape {Type I LastRead 85 FirstWrite -1}
		bias_array {Type I LastRead 4 FirstWrite -1}
		dense_69_fwork {Type IO LastRead -1 FirstWrite -1}}
	k2c_dot {
		C_array {Type IO LastRead 12 FirstWrite 2}
		A_array {Type I LastRead 87 FirstWrite -1}
		A_ndim_read {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		A_shape {Type I LastRead 84 FirstWrite -1}
		B_array_0 {Type I LastRead 88 FirstWrite -1}
		B_array_1 {Type I LastRead 88 FirstWrite -1}
		B_array_2 {Type I LastRead 88 FirstWrite -1}
		B_array_3 {Type I LastRead 88 FirstWrite -1}
		B_shape {Type I LastRead 85 FirstWrite -1}
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
	k2c_affine_matmul_1 {
		C {Type O LastRead -1 FirstWrite 2}
		A {Type I LastRead 6 FirstWrite -1}
		B_0 {Type I LastRead 6 FirstWrite -1}
		B_1 {Type I LastRead 6 FirstWrite -1}
		B_2 {Type I LastRead 6 FirstWrite -1}
		B_3 {Type I LastRead 6 FirstWrite -1}
		d {Type I LastRead 4 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 1 FirstWrite -1}}
	k2c_relu_func {
		x {Type IO LastRead 1 FirstWrite 3}
		size {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "0", "EnableSignal" : "ap_enable_pp0"}
	{"Pipeline" : "1", "EnableSignal" : "ap_enable_pp1"}
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
]}

set Spec2ImplPortList { 
	dense_69_input_input_array { ap_memory {  { dense_69_input_input_array_address0 mem_address 1 15 }  { dense_69_input_input_array_ce0 mem_ce 1 1 }  { dense_69_input_input_array_q0 mem_dout 0 32 } } }
	dense_69_input_input_ndim { ap_none {  { dense_69_input_input_ndim in_data 0 64 } } }
	dense_69_input_input_numel { ap_none {  { dense_69_input_input_numel in_data 0 64 } } }
	dense_69_input_input_shape { ap_memory {  { dense_69_input_input_shape_address0 mem_address 1 3 }  { dense_69_input_input_shape_ce0 mem_ce 1 1 }  { dense_69_input_input_shape_q0 mem_dout 0 64 } } }
	dense_71_output_array { ap_memory {  { dense_71_output_array_address0 mem_address 1 15 }  { dense_71_output_array_ce0 mem_ce 1 1 }  { dense_71_output_array_we0 mem_we 1 1 }  { dense_71_output_array_d0 mem_din 1 32 }  { dense_71_output_array_q0 mem_dout 0 32 }  { dense_71_output_array_address1 mem_address 1 15 }  { dense_71_output_array_ce1 mem_ce 1 1 }  { dense_71_output_array_we1 mem_we 1 1 }  { dense_71_output_array_d1 mem_din 1 32 }  { dense_71_output_array_q1 mem_dout 0 32 } } }
	dense_71_output_ndim { ap_none {  { dense_71_output_ndim in_data 0 64 } } }
	dense_71_output_numel { ap_none {  { dense_71_output_numel in_data 0 64 } } }
	dense_71_output_shape { ap_memory {  { dense_71_output_shape_address0 mem_address 1 3 }  { dense_71_output_shape_ce0 mem_ce 1 1 }  { dense_71_output_shape_we0 mem_we 1 1 }  { dense_71_output_shape_d0 mem_din 1 64 }  { dense_71_output_shape_q0 mem_dout 0 64 }  { dense_71_output_shape_address1 mem_address 1 3 }  { dense_71_output_shape_ce1 mem_ce 1 1 }  { dense_71_output_shape_we1 mem_we 1 1 }  { dense_71_output_shape_d1 mem_din 1 64 }  { dense_71_output_shape_q1 mem_dout 0 64 } } }
}

set busDeadlockParameterList { 
}

# RTL port scheduling information:
set fifoSchedulingInfoList { 
}

# RTL bus port read request latency information:
set busReadReqLatencyList { 
}

# RTL bus port write response latency information:
set busWriteResLatencyList { 
}

# RTL array port load latency information:
set memoryLoadLatencyList { 
}
