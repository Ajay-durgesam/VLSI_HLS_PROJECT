set C_TypeInfoList {{ 
"WebModel" : [[], { "return": [[], "void"]} , [{"ExternC" : 0}], [ {"dense_69_input_input": [[],{ "pointer": "0"}] }, {"dense_71_output": [[],{ "pointer": "0"}] }],["1","2","3","4","5","6","7","8","9","10","11"],""],
 "1": [ "dense_71_kernel", [[],"0"],""],
 "2": [ "dense_71_fwork", [[], {"array": [ {"scalar": "float"}, [128]]}],""],
 "3": [ "dense_71_bias", [[],"0"],""],
 "4": [ "dense_70_output", [[],"0"],""],
 "5": [ "dense_70_kernel", [[],"0"],""],
 "6": [ "dense_70_fwork", [[], {"array": [ {"scalar": "float"}, [4160]]}],""],
 "7": [ "dense_70_bias", [[],"0"],""],
 "8": [ "dense_69_output", [[],"0"],""],
 "9": [ "dense_69_kernel", [[],"0"],""],
 "10": [ "dense_69_fwork", [[], {"array": [ {"scalar": "float"}, [25935]]}],""],
 "11": [ "dense_69_bias", [[],"0"],""], 
"0": [ "k2c_tensor", {"typedef": [[[],"12"],""]}], 
"12": [ "k2c_tensor", {"struct": [[],[],[{ "array": [[],  {"array": [ {"scalar": "float"}, [26000]]}]},{ "ndim": [[64], "13"]},{ "numel": [[64], "13"]},{ "shape": [[],  {"array": ["13", [5]]}]}],""]}], 
"13": [ "size_t", {"typedef": [[[], {"scalar": "long long unsigned int"}],""]}]
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
	{ dense_71_output_array float 32 regular {array 26000 { 2 3 } 1 1 }  }
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
set portNum 31
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
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "11", "12", "13", "14", "15", "16", "17", "18", "19", "20", "21", "22", "23", "24", "25", "26", "27", "28", "29", "30", "31", "32", "33", "75", "117"],
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
			{"State" : "ap_ST_fsm_state26", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_fu_765"},
			{"State" : "ap_ST_fsm_state24", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_1_fu_790"},
			{"State" : "ap_ST_fsm_state22", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dense_2_fu_814"}],
		"Port" : [
			{"Name" : "dense_69_input_input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "117", "SubInstance" : "grp_k2c_dense_2_fu_814", "Port" : "input_array"}]},
			{"Name" : "dense_69_input_input_ndim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_69_input_input_numel", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_69_input_input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "117", "SubInstance" : "grp_k2c_dense_2_fu_814", "Port" : "input_shape"}]},
			{"Name" : "dense_71_output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_k2c_dense_fu_765", "Port" : "output_array"}]},
			{"Name" : "dense_71_output_ndim", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_71_output_numel", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_71_output_shape", "Type" : "Memory", "Direction" : "X"},
			{"Name" : "dense_69_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "117", "SubInstance" : "grp_k2c_dense_2_fu_814", "Port" : "output_array"},
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_1_fu_790", "Port" : "input_array"}]},
			{"Name" : "dense_69_output_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_69_output_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_69_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_69_kernel_arra_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_69_kernel_arra_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_69_kernel_arra_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_69_kernel_arra_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_69_kernel_arra_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_69_kernel_arra_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_69_kernel_arra_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_69_kernel_arra_8", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "117", "SubInstance" : "grp_k2c_dense_2_fu_814", "Port" : "kernel_array"}]},
			{"Name" : "dense_69_bias_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_69_bias_array_9", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "117", "SubInstance" : "grp_k2c_dense_2_fu_814", "Port" : "bias_array"}]},
			{"Name" : "dense_70_output_arra", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_k2c_dense_fu_765", "Port" : "input_array"},
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_1_fu_790", "Port" : "output_array"}]},
			{"Name" : "dense_70_output_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_70_output_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_70_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_70_kernel_arra_1", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_1_fu_790", "Port" : "kernel_array"}]},
			{"Name" : "dense_70_kernel_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_70_kernel_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_70_bias_array_7", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_70_bias_array_s", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_70_bias_array_1", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_70_bias_array_2", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_70_bias_array_3", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_70_bias_array_4", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_70_bias_array_5", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_70_bias_array_6", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_70_bias_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_1_fu_790", "Port" : "bias_array"}]},
			{"Name" : "dense_70_bias_numel", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_71_kernel_arra", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "dense_71_kernel_arra_0", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_k2c_dense_fu_765", "Port" : "kernel_array"}]},
			{"Name" : "dense_71_kernel_ndim", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_71_kernel_nume", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_71_bias_numel", "Type" : "OVld", "Direction" : "IO"},
			{"Name" : "dense_69_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "117", "SubInstance" : "grp_k2c_dense_2_fu_814", "Port" : "dense_69_fwork"}]},
			{"Name" : "dense_69_kernel_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "117", "SubInstance" : "grp_k2c_dense_2_fu_814", "Port" : "kernel_shape"}]},
			{"Name" : "dense_70_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_1_fu_790", "Port" : "dense_70_fwork"}]},
			{"Name" : "dense_69_output_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_1_fu_790", "Port" : "input_shape"}]},
			{"Name" : "dense_70_kernel_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "75", "SubInstance" : "grp_k2c_dense_1_fu_790", "Port" : "kernel_shape"}]},
			{"Name" : "dense_71_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_k2c_dense_fu_765", "Port" : "dense_71_fwork"}]},
			{"Name" : "dense_70_output_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_k2c_dense_fu_765", "Port" : "input_shape"}]},
			{"Name" : "dense_71_kernel_shap", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_k2c_dense_fu_765", "Port" : "kernel_shape"}]},
			{"Name" : "dense_71_bias_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "33", "SubInstance" : "grp_k2c_dense_fu_765", "Port" : "bias_array"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_output_arra_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_7_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_6_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_5_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_4_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_3_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_2_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_1_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_arra_8_U", "Parent" : "0"},
	{"ID" : "11", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_bias_array_U", "Parent" : "0"},
	{"ID" : "12", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_bias_array_9_U", "Parent" : "0"},
	{"ID" : "13", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_output_arra_U", "Parent" : "0"},
	{"ID" : "14", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_kernel_arra_U", "Parent" : "0"},
	{"ID" : "15", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_kernel_arra_1_U", "Parent" : "0"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_bias_array_7_U", "Parent" : "0"},
	{"ID" : "17", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_bias_array_s_U", "Parent" : "0"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_bias_array_1_U", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_bias_array_2_U", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_bias_array_3_U", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_bias_array_4_U", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_bias_array_5_U", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_bias_array_6_U", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_bias_array_U", "Parent" : "0"},
	{"ID" : "25", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_71_kernel_arra_U", "Parent" : "0"},
	{"ID" : "26", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_71_kernel_arra_0_U", "Parent" : "0"},
	{"ID" : "27", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_kernel_shap_U", "Parent" : "0"},
	{"ID" : "28", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_output_shap_U", "Parent" : "0"},
	{"ID" : "29", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_kernel_shap_U", "Parent" : "0"},
	{"ID" : "30", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_70_output_shap_U", "Parent" : "0"},
	{"ID" : "31", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_71_kernel_shap_U", "Parent" : "0"},
	{"ID" : "32", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_71_bias_array_U", "Parent" : "0"},
	{"ID" : "33", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765", "Parent" : "0", "Child" : ["34", "63", "71", "72", "73", "74"],
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
			{"State" : "ap_ST_fsm_state2", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_dot_2_fu_232"},
			{"State" : "ap_ST_fsm_state42", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_affine_matmul_fu_257"}],
		"Port" : [
			{"Name" : "output_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_k2c_dot_2_fu_232", "Port" : "C_array"},
					{"ID" : "63", "SubInstance" : "grp_k2c_affine_matmul_fu_257", "Port" : "C"}]},
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_k2c_dot_2_fu_232", "Port" : "A_array"},
					{"ID" : "63", "SubInstance" : "grp_k2c_affine_matmul_fu_257", "Port" : "A"}]},
			{"Name" : "input_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_k2c_dot_2_fu_232", "Port" : "A_shape"}]},
			{"Name" : "kernel_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_k2c_dot_2_fu_232", "Port" : "B_array"},
					{"ID" : "63", "SubInstance" : "grp_k2c_affine_matmul_fu_257", "Port" : "B"}]},
			{"Name" : "kernel_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_k2c_dot_2_fu_232", "Port" : "B_shape"}]},
			{"Name" : "bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "63", "SubInstance" : "grp_k2c_affine_matmul_fu_257", "Port" : "d"}]},
			{"Name" : "bias_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_71_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "34", "SubInstance" : "grp_k2c_dot_2_fu_232", "Port" : "dense_71_fwork"}]}]},
	{"ID" : "34", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232", "Parent" : "33", "Child" : ["35", "36", "37", "38", "39", "40", "41", "42", "43", "44", "55", "57", "58", "59", "60", "61", "62"],
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
			{"State" : "ap_ST_fsm_state231", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_matmul_2_fu_595"},
			{"State" : "ap_ST_fsm_state156", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_607"},
			{"State" : "ap_ST_fsm_state230", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_607"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "44", "SubInstance" : "grp_k2c_matmul_2_fu_595", "Port" : "C"}]},
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
					{"ID" : "44", "SubInstance" : "grp_k2c_matmul_2_fu_595", "Port" : "B"}]}]},
	{"ID" : "35", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.dense_71_fwork_U", "Parent" : "34"},
	{"ID" : "36", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.permA_U", "Parent" : "34"},
	{"ID" : "37", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.permB_U", "Parent" : "34"},
	{"ID" : "38", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.freeA_U", "Parent" : "34"},
	{"ID" : "39", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.freeB_U", "Parent" : "34"},
	{"ID" : "40", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.newshpA_U", "Parent" : "34"},
	{"ID" : "41", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.newshpB_U", "Parent" : "34"},
	{"ID" : "42", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.Asub_U", "Parent" : "34"},
	{"ID" : "43", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.Bsub_U", "Parent" : "34"},
	{"ID" : "44", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_matmul_2_fu_595", "Parent" : "34", "Child" : ["45", "46", "47", "48", "49", "50", "51", "52", "53", "54"],
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
	{"ID" : "45", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_matmul_2_fu_595.WebModel_fadd_32ncud_U126", "Parent" : "44"},
	{"ID" : "46", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_matmul_2_fu_595.WebModel_fmul_32ndEe_U127", "Parent" : "44"},
	{"ID" : "47", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_matmul_2_fu_595.WebModel_mul_64s_bkb_U128", "Parent" : "44"},
	{"ID" : "48", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_matmul_2_fu_595.WebModel_mul_64nseOg_U129", "Parent" : "44"},
	{"ID" : "49", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_matmul_2_fu_595.WebModel_mul_128nfYi_U130", "Parent" : "44"},
	{"ID" : "50", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_matmul_2_fu_595.WebModel_mac_mularcU_U131", "Parent" : "44"},
	{"ID" : "51", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_matmul_2_fu_595.WebModel_mac_mularcU_U132", "Parent" : "44"},
	{"ID" : "52", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_matmul_2_fu_595.WebModel_mac_mulasc4_U133", "Parent" : "44"},
	{"ID" : "53", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_matmul_2_fu_595.WebModel_mul_mul_ibs_U134", "Parent" : "44"},
	{"ID" : "54", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_matmul_2_fu_595.WebModel_mul_mul_ibs_U135", "Parent" : "44"},
	{"ID" : "55", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_sub2idx_fu_607", "Parent" : "34", "Child" : ["56"],
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
	{"ID" : "56", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.grp_k2c_sub2idx_fu_607.WebModel_mul_64s_bkb_U1", "Parent" : "55"},
	{"ID" : "57", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.WebModel_udiv_64nkbM_U144", "Parent" : "34"},
	{"ID" : "58", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.WebModel_udiv_64nkbM_U145", "Parent" : "34"},
	{"ID" : "59", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.WebModel_urem_64nmb6_U146", "Parent" : "34"},
	{"ID" : "60", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.WebModel_udiv_64nkbM_U147", "Parent" : "34"},
	{"ID" : "61", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.WebModel_urem_64nmb6_U148", "Parent" : "34"},
	{"ID" : "62", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_dot_2_fu_232.WebModel_udiv_64nkbM_U149", "Parent" : "34"},
	{"ID" : "63", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_affine_matmul_fu_257", "Parent" : "33", "Child" : ["64", "65", "66", "67", "68", "69", "70"],
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
	{"ID" : "64", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_affine_matmul_fu_257.WebModel_fadd_32ncud_U53", "Parent" : "63"},
	{"ID" : "65", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_affine_matmul_fu_257.WebModel_fmul_32ndEe_U54", "Parent" : "63"},
	{"ID" : "66", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_affine_matmul_fu_257.WebModel_mul_64s_bkb_U55", "Parent" : "63"},
	{"ID" : "67", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_affine_matmul_fu_257.WebModel_mul_64nseOg_U56", "Parent" : "63"},
	{"ID" : "68", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_affine_matmul_fu_257.WebModel_mac_mulag8j_U57", "Parent" : "63"},
	{"ID" : "69", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_affine_matmul_fu_257.WebModel_mul_mul_ibs_U58", "Parent" : "63"},
	{"ID" : "70", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.grp_k2c_affine_matmul_fu_257.WebModel_mac_mulag8j_U59", "Parent" : "63"},
	{"ID" : "71", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.WebModel_fadd_32ncud_U161", "Parent" : "33"},
	{"ID" : "72", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.WebModel_fdiv_32nudo_U162", "Parent" : "33"},
	{"ID" : "73", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.WebModel_fexp_32nvdy_U163", "Parent" : "33"},
	{"ID" : "74", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_fu_765.WebModel_mul_64s_bkb_U164", "Parent" : "33"},
	{"ID" : "75", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790", "Parent" : "0", "Child" : ["76", "105", "113", "115", "116"],
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
					{"ID" : "76", "SubInstance" : "grp_k2c_dot_1_fu_186", "Port" : "C_array"},
					{"ID" : "113", "SubInstance" : "grp_k2c_relu_func_fu_227", "Port" : "x"},
					{"ID" : "105", "SubInstance" : "grp_k2c_affine_matmul_fu_211", "Port" : "C"}]},
			{"Name" : "output_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "76", "SubInstance" : "grp_k2c_dot_1_fu_186", "Port" : "A_array"},
					{"ID" : "105", "SubInstance" : "grp_k2c_affine_matmul_fu_211", "Port" : "A"}]},
			{"Name" : "input_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "76", "SubInstance" : "grp_k2c_dot_1_fu_186", "Port" : "A_shape"}]},
			{"Name" : "kernel_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "76", "SubInstance" : "grp_k2c_dot_1_fu_186", "Port" : "B_array"},
					{"ID" : "105", "SubInstance" : "grp_k2c_affine_matmul_fu_211", "Port" : "B"}]},
			{"Name" : "kernel_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "kernel_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "76", "SubInstance" : "grp_k2c_dot_1_fu_186", "Port" : "B_shape"}]},
			{"Name" : "bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "105", "SubInstance" : "grp_k2c_affine_matmul_fu_211", "Port" : "d"}]},
			{"Name" : "bias_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_70_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "76", "SubInstance" : "grp_k2c_dot_1_fu_186", "Port" : "dense_70_fwork"}]}]},
	{"ID" : "76", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186", "Parent" : "75", "Child" : ["77", "78", "79", "80", "81", "82", "83", "84", "85", "86", "97", "99", "100", "101", "102", "103", "104"],
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
			{"State" : "ap_ST_fsm_state231", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_matmul_1_fu_595"},
			{"State" : "ap_ST_fsm_state156", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_607"},
			{"State" : "ap_ST_fsm_state230", "FSM" : "ap_CS_fsm", "SubInstance" : "grp_k2c_sub2idx_fu_607"}],
		"Port" : [
			{"Name" : "C_array", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "86", "SubInstance" : "grp_k2c_matmul_1_fu_595", "Port" : "C"}]},
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
					{"ID" : "86", "SubInstance" : "grp_k2c_matmul_1_fu_595", "Port" : "B"}]}]},
	{"ID" : "77", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.dense_70_fwork_U", "Parent" : "76"},
	{"ID" : "78", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.permA_U", "Parent" : "76"},
	{"ID" : "79", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.permB_U", "Parent" : "76"},
	{"ID" : "80", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.freeA_U", "Parent" : "76"},
	{"ID" : "81", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.freeB_U", "Parent" : "76"},
	{"ID" : "82", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.newshpA_U", "Parent" : "76"},
	{"ID" : "83", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.newshpB_U", "Parent" : "76"},
	{"ID" : "84", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.Asub_U", "Parent" : "76"},
	{"ID" : "85", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.Bsub_U", "Parent" : "76"},
	{"ID" : "86", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_595", "Parent" : "76", "Child" : ["87", "88", "89", "90", "91", "92", "93", "94", "95", "96"],
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
	{"ID" : "87", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_595.WebModel_fadd_32ncud_U77", "Parent" : "86"},
	{"ID" : "88", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_595.WebModel_fmul_32ndEe_U78", "Parent" : "86"},
	{"ID" : "89", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_595.WebModel_mul_64s_bkb_U79", "Parent" : "86"},
	{"ID" : "90", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_595.WebModel_mul_64nseOg_U80", "Parent" : "86"},
	{"ID" : "91", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_595.WebModel_mul_128nfYi_U81", "Parent" : "86"},
	{"ID" : "92", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_595.WebModel_mac_mulaocq_U82", "Parent" : "86"},
	{"ID" : "93", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_595.WebModel_mac_mulaocq_U83", "Parent" : "86"},
	{"ID" : "94", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_595.WebModel_mac_mulapcA_U84", "Parent" : "86"},
	{"ID" : "95", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_595.WebModel_mul_mul_ibs_U85", "Parent" : "86"},
	{"ID" : "96", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_matmul_1_fu_595.WebModel_mul_mul_ibs_U86", "Parent" : "86"},
	{"ID" : "97", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_sub2idx_fu_607", "Parent" : "76", "Child" : ["98"],
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
	{"ID" : "98", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.grp_k2c_sub2idx_fu_607.WebModel_mul_64s_bkb_U1", "Parent" : "97"},
	{"ID" : "99", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.WebModel_udiv_64nkbM_U95", "Parent" : "76"},
	{"ID" : "100", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.WebModel_udiv_64nkbM_U96", "Parent" : "76"},
	{"ID" : "101", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.WebModel_urem_64nmb6_U97", "Parent" : "76"},
	{"ID" : "102", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.WebModel_udiv_64nkbM_U98", "Parent" : "76"},
	{"ID" : "103", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.WebModel_urem_64nmb6_U99", "Parent" : "76"},
	{"ID" : "104", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_dot_1_fu_186.WebModel_udiv_64nkbM_U100", "Parent" : "76"},
	{"ID" : "105", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_affine_matmul_fu_211", "Parent" : "75", "Child" : ["106", "107", "108", "109", "110", "111", "112"],
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
	{"ID" : "106", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_affine_matmul_fu_211.WebModel_fadd_32ncud_U53", "Parent" : "105"},
	{"ID" : "107", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_affine_matmul_fu_211.WebModel_fmul_32ndEe_U54", "Parent" : "105"},
	{"ID" : "108", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_affine_matmul_fu_211.WebModel_mul_64s_bkb_U55", "Parent" : "105"},
	{"ID" : "109", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_affine_matmul_fu_211.WebModel_mul_64nseOg_U56", "Parent" : "105"},
	{"ID" : "110", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_affine_matmul_fu_211.WebModel_mac_mulag8j_U57", "Parent" : "105"},
	{"ID" : "111", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_affine_matmul_fu_211.WebModel_mul_mul_ibs_U58", "Parent" : "105"},
	{"ID" : "112", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_affine_matmul_fu_211.WebModel_mac_mulag8j_U59", "Parent" : "105"},
	{"ID" : "113", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_relu_func_fu_227", "Parent" : "75", "Child" : ["114"],
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
	{"ID" : "114", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.grp_k2c_relu_func_fu_227.WebModel_fcmp_32nncg_U49", "Parent" : "113"},
	{"ID" : "115", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.WebModel_fadd_32ncud_U112", "Parent" : "75"},
	{"ID" : "116", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_1_fu_790.WebModel_mul_64s_bkb_U113", "Parent" : "75"},
	{"ID" : "117", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814", "Parent" : "0", "Child" : ["118", "147", "155", "157", "158"],
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
					{"ID" : "147", "SubInstance" : "grp_k2c_affine_matmul_fu_197", "Port" : "C"},
					{"ID" : "118", "SubInstance" : "grp_k2c_dot_fu_176", "Port" : "C_array"},
					{"ID" : "155", "SubInstance" : "grp_k2c_relu_func_fu_213", "Port" : "x"}]},
			{"Name" : "input_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_k2c_affine_matmul_fu_197", "Port" : "A"},
					{"ID" : "118", "SubInstance" : "grp_k2c_dot_fu_176", "Port" : "A_array"}]},
			{"Name" : "input_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "input_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "118", "SubInstance" : "grp_k2c_dot_fu_176", "Port" : "A_shape"}]},
			{"Name" : "kernel_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_k2c_affine_matmul_fu_197", "Port" : "B"},
					{"ID" : "118", "SubInstance" : "grp_k2c_dot_fu_176", "Port" : "B_array"}]},
			{"Name" : "kernel_shape", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "118", "SubInstance" : "grp_k2c_dot_fu_176", "Port" : "B_shape"}]},
			{"Name" : "bias_array", "Type" : "Memory", "Direction" : "I",
				"SubConnect" : [
					{"ID" : "147", "SubInstance" : "grp_k2c_affine_matmul_fu_197", "Port" : "d"}]},
			{"Name" : "dense_69_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "118", "SubInstance" : "grp_k2c_dot_fu_176", "Port" : "dense_69_fwork"}]}]},
	{"ID" : "118", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176", "Parent" : "117", "Child" : ["119", "120", "121", "122", "123", "124", "125", "126", "127", "128", "139", "141", "142", "143", "144", "145", "146"],
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
					{"ID" : "128", "SubInstance" : "grp_k2c_matmul_fu_601", "Port" : "C"}]},
			{"Name" : "A_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "A_ndim_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_numel_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "A_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_array", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "B_shape", "Type" : "Memory", "Direction" : "I"},
			{"Name" : "axesA_0_read", "Type" : "None", "Direction" : "I"},
			{"Name" : "dense_69_fwork", "Type" : "Memory", "Direction" : "IO",
				"SubConnect" : [
					{"ID" : "128", "SubInstance" : "grp_k2c_matmul_fu_601", "Port" : "A"}]}]},
	{"ID" : "119", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.dense_69_fwork_U", "Parent" : "118"},
	{"ID" : "120", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.permA_U", "Parent" : "118"},
	{"ID" : "121", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.permB_U", "Parent" : "118"},
	{"ID" : "122", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.freeA_U", "Parent" : "118"},
	{"ID" : "123", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.freeB_U", "Parent" : "118"},
	{"ID" : "124", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.newshpA_U", "Parent" : "118"},
	{"ID" : "125", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.newshpB_U", "Parent" : "118"},
	{"ID" : "126", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.Asub_U", "Parent" : "118"},
	{"ID" : "127", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.Bsub_U", "Parent" : "118"},
	{"ID" : "128", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601", "Parent" : "118", "Child" : ["129", "130", "131", "132", "133", "134", "135", "136", "137", "138"],
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
	{"ID" : "129", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_fadd_32ncud_U6", "Parent" : "128"},
	{"ID" : "130", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_fmul_32ndEe_U7", "Parent" : "128"},
	{"ID" : "131", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mul_64s_bkb_U8", "Parent" : "128"},
	{"ID" : "132", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mul_64nseOg_U9", "Parent" : "128"},
	{"ID" : "133", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mul_128nfYi_U10", "Parent" : "128"},
	{"ID" : "134", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mac_mulag8j_U11", "Parent" : "128"},
	{"ID" : "135", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mac_mulag8j_U12", "Parent" : "128"},
	{"ID" : "136", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mac_mulahbi_U13", "Parent" : "128"},
	{"ID" : "137", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mul_mul_ibs_U14", "Parent" : "128"},
	{"ID" : "138", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_matmul_fu_601.WebModel_mul_mul_ibs_U15", "Parent" : "128"},
	{"ID" : "139", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_sub2idx_fu_613", "Parent" : "118", "Child" : ["140"],
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
	{"ID" : "140", "Level" : "4", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.grp_k2c_sub2idx_fu_613.WebModel_mul_64s_bkb_U1", "Parent" : "139"},
	{"ID" : "141", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.WebModel_udiv_64nkbM_U29", "Parent" : "118"},
	{"ID" : "142", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.WebModel_udiv_18nlbW_U30", "Parent" : "118"},
	{"ID" : "143", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.WebModel_urem_64nmb6_U31", "Parent" : "118"},
	{"ID" : "144", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.WebModel_udiv_64nkbM_U32", "Parent" : "118"},
	{"ID" : "145", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.WebModel_urem_64nmb6_U33", "Parent" : "118"},
	{"ID" : "146", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_dot_fu_176.WebModel_udiv_64nkbM_U34", "Parent" : "118"},
	{"ID" : "147", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_affine_matmul_fu_197", "Parent" : "117", "Child" : ["148", "149", "150", "151", "152", "153", "154"],
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
	{"ID" : "148", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_affine_matmul_fu_197.WebModel_fadd_32ncud_U53", "Parent" : "147"},
	{"ID" : "149", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_affine_matmul_fu_197.WebModel_fmul_32ndEe_U54", "Parent" : "147"},
	{"ID" : "150", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_affine_matmul_fu_197.WebModel_mul_64s_bkb_U55", "Parent" : "147"},
	{"ID" : "151", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_affine_matmul_fu_197.WebModel_mul_64nseOg_U56", "Parent" : "147"},
	{"ID" : "152", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_affine_matmul_fu_197.WebModel_mac_mulag8j_U57", "Parent" : "147"},
	{"ID" : "153", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_affine_matmul_fu_197.WebModel_mul_mul_ibs_U58", "Parent" : "147"},
	{"ID" : "154", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_affine_matmul_fu_197.WebModel_mac_mulag8j_U59", "Parent" : "147"},
	{"ID" : "155", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_relu_func_fu_213", "Parent" : "117", "Child" : ["156"],
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
	{"ID" : "156", "Level" : "3", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.grp_k2c_relu_func_fu_213.WebModel_fcmp_32nncg_U49", "Parent" : "155"},
	{"ID" : "157", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.WebModel_fadd_32ncud_U67", "Parent" : "117"},
	{"ID" : "158", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_dense_2_fu_814.WebModel_mul_64s_bkb_U68", "Parent" : "117"}]}


set ArgLastReadFirstWriteLatency {
	WebModel {
		dense_69_input_input_array {Type I LastRead 78 FirstWrite -1}
		dense_69_input_input_ndim {Type I LastRead 15 FirstWrite -1}
		dense_69_input_input_numel {Type I LastRead 15 FirstWrite -1}
		dense_69_input_input_shape {Type I LastRead 77 FirstWrite -1}
		dense_71_output_array {Type IO LastRead 12 FirstWrite 2}
		dense_71_output_ndim {Type I LastRead -1 FirstWrite -1}
		dense_71_output_numel {Type I LastRead 19 FirstWrite -1}
		dense_71_output_shape {Type X LastRead -1 FirstWrite -1}
		dense_69_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_69_output_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_69_output_nume {Type IO LastRead -1 FirstWrite -1}
		dense_69_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_69_kernel_arra_7 {Type I LastRead -1 FirstWrite -1}
		dense_69_kernel_arra_6 {Type I LastRead -1 FirstWrite -1}
		dense_69_kernel_arra_5 {Type I LastRead -1 FirstWrite -1}
		dense_69_kernel_arra_4 {Type I LastRead -1 FirstWrite -1}
		dense_69_kernel_arra_3 {Type I LastRead -1 FirstWrite -1}
		dense_69_kernel_arra_2 {Type I LastRead -1 FirstWrite -1}
		dense_69_kernel_arra_1 {Type I LastRead -1 FirstWrite -1}
		dense_69_kernel_arra_8 {Type IO LastRead -1 FirstWrite -1}
		dense_69_bias_array {Type I LastRead -1 FirstWrite -1}
		dense_69_bias_array_9 {Type IO LastRead -1 FirstWrite -1}
		dense_70_output_arra {Type IO LastRead -1 FirstWrite -1}
		dense_70_output_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_70_output_nume {Type IO LastRead -1 FirstWrite -1}
		dense_70_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_70_kernel_arra_1 {Type IO LastRead -1 FirstWrite -1}
		dense_70_kernel_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_70_kernel_nume {Type IO LastRead -1 FirstWrite -1}
		dense_70_bias_array_7 {Type I LastRead -1 FirstWrite -1}
		dense_70_bias_array_s {Type I LastRead -1 FirstWrite -1}
		dense_70_bias_array_1 {Type I LastRead -1 FirstWrite -1}
		dense_70_bias_array_2 {Type I LastRead -1 FirstWrite -1}
		dense_70_bias_array_3 {Type I LastRead -1 FirstWrite -1}
		dense_70_bias_array_4 {Type I LastRead -1 FirstWrite -1}
		dense_70_bias_array_5 {Type I LastRead -1 FirstWrite -1}
		dense_70_bias_array_6 {Type I LastRead -1 FirstWrite -1}
		dense_70_bias_array {Type IO LastRead -1 FirstWrite -1}
		dense_70_bias_numel {Type IO LastRead -1 FirstWrite -1}
		dense_71_kernel_arra {Type I LastRead -1 FirstWrite -1}
		dense_71_kernel_arra_0 {Type IO LastRead -1 FirstWrite -1}
		dense_71_kernel_ndim {Type IO LastRead -1 FirstWrite -1}
		dense_71_kernel_nume {Type IO LastRead -1 FirstWrite -1}
		dense_71_bias_numel {Type IO LastRead -1 FirstWrite -1}
		dense_69_fwork {Type IO LastRead -1 FirstWrite -1}
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
		input_array {Type I LastRead 78 FirstWrite -1}
		input_ndim_read {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 77 FirstWrite -1}
		kernel_array {Type I LastRead 79 FirstWrite -1}
		kernel_ndim_read {Type I LastRead 0 FirstWrite -1}
		kernel_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_shape {Type I LastRead 78 FirstWrite -1}
		bias_array {Type I LastRead 7 FirstWrite -1}
		bias_numel_read {Type I LastRead 0 FirstWrite -1}
		dense_71_fwork {Type IO LastRead -1 FirstWrite -1}}
	k2c_dot_2 {
		C_array {Type IO LastRead 12 FirstWrite 2}
		A_array {Type I LastRead 78 FirstWrite -1}
		A_ndim_read {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		A_shape {Type I LastRead 77 FirstWrite -1}
		B_array {Type I LastRead 79 FirstWrite -1}
		B_ndim_read {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		B_shape {Type I LastRead 78 FirstWrite -1}
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
		C {Type IO LastRead 10 FirstWrite 2}
		A {Type I LastRead 6 FirstWrite -1}
		B {Type I LastRead 6 FirstWrite -1}
		d {Type I LastRead 7 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 1 FirstWrite -1}}
	k2c_dense_1 {
		output_array {Type IO LastRead 12 FirstWrite 2}
		output_numel_read {Type I LastRead 0 FirstWrite -1}
		input_array {Type I LastRead 78 FirstWrite -1}
		input_ndim_read {Type I LastRead 0 FirstWrite -1}
		input_numel_read {Type I LastRead 0 FirstWrite -1}
		input_shape {Type I LastRead 77 FirstWrite -1}
		kernel_array {Type I LastRead 79 FirstWrite -1}
		kernel_ndim_read {Type I LastRead 0 FirstWrite -1}
		kernel_numel_read {Type I LastRead 0 FirstWrite -1}
		kernel_shape {Type I LastRead 78 FirstWrite -1}
		bias_array {Type I LastRead 7 FirstWrite -1}
		bias_numel_read {Type I LastRead 0 FirstWrite -1}
		dense_70_fwork {Type IO LastRead -1 FirstWrite -1}}
	k2c_dot_1 {
		C_array {Type IO LastRead 12 FirstWrite 2}
		A_array {Type I LastRead 78 FirstWrite -1}
		A_ndim_read {Type I LastRead 0 FirstWrite -1}
		A_numel_read {Type I LastRead 0 FirstWrite -1}
		A_shape {Type I LastRead 77 FirstWrite -1}
		B_array {Type I LastRead 79 FirstWrite -1}
		B_ndim_read {Type I LastRead 0 FirstWrite -1}
		B_numel_read {Type I LastRead 0 FirstWrite -1}
		B_shape {Type I LastRead 78 FirstWrite -1}
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
		C {Type IO LastRead 10 FirstWrite 2}
		A {Type I LastRead 6 FirstWrite -1}
		B {Type I LastRead 6 FirstWrite -1}
		d {Type I LastRead 7 FirstWrite -1}
		outrows {Type I LastRead 0 FirstWrite -1}
		outcols {Type I LastRead 0 FirstWrite -1}
		innerdim {Type I LastRead 1 FirstWrite -1}}
	k2c_relu_func {
		x {Type IO LastRead 1 FirstWrite 3}
		size {Type I LastRead 0 FirstWrite -1}}
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
	, {"Name" : "Interval", "Min" : "0", "Max" : "0"}
]}

set PipelineEnableSignalInfo {[
]}

set Spec2ImplPortList { 
	dense_69_input_input_array { ap_memory {  { dense_69_input_input_array_address0 mem_address 1 15 }  { dense_69_input_input_array_ce0 mem_ce 1 1 }  { dense_69_input_input_array_q0 mem_dout 0 32 } } }
	dense_69_input_input_ndim { ap_none {  { dense_69_input_input_ndim in_data 0 64 } } }
	dense_69_input_input_numel { ap_none {  { dense_69_input_input_numel in_data 0 64 } } }
	dense_69_input_input_shape { ap_memory {  { dense_69_input_input_shape_address0 mem_address 1 3 }  { dense_69_input_input_shape_ce0 mem_ce 1 1 }  { dense_69_input_input_shape_q0 mem_dout 0 64 } } }
	dense_71_output_array { ap_memory {  { dense_71_output_array_address0 mem_address 1 15 }  { dense_71_output_array_ce0 mem_ce 1 1 }  { dense_71_output_array_we0 mem_we 1 1 }  { dense_71_output_array_d0 mem_din 1 32 }  { dense_71_output_array_q0 mem_dout 0 32 } } }
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
