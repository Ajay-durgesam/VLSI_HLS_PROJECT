set moduleName k2c_dot
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
set C_modelName {k2c_dot}
set C_modelType { void 0 }
set C_modelArgList {
	{ C_array float 32 regular {array 26000 { 2 3 } 1 1 }  }
	{ A_array float 32 regular {array 26000 { 1 3 } 1 1 }  }
	{ A_ndim_read int 64 regular  }
	{ A_numel_read int 64 regular  }
	{ A_shape int 64 regular {array 5 { 1 3 } 1 1 }  }
	{ B_array_0 float 32 regular {array 6500 { 1 3 } 1 1 }  }
	{ B_array_1 float 32 regular {array 6500 { 1 3 } 1 1 }  }
	{ B_array_2 float 32 regular {array 6500 { 1 3 } 1 1 }  }
	{ B_array_3 float 32 regular {array 6500 { 1 3 } 1 1 }  }
	{ B_shape int 64 regular {array 5 { 1 3 } 1 1 }  }
	{ axesA_0_read int 64 regular  }
}
set C_modelArgMapList {[ 
	{ "Name" : "C_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READWRITE"} , 
 	{ "Name" : "A_array", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "A_ndim_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "A_numel_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "A_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "B_array_0", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_array_1", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_array_2", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_array_3", "interface" : "memory", "bitwidth" : 32, "direction" : "READONLY"} , 
 	{ "Name" : "B_shape", "interface" : "memory", "bitwidth" : 64, "direction" : "READONLY"} , 
 	{ "Name" : "axesA_0_read", "interface" : "wire", "bitwidth" : 64, "direction" : "READONLY"} ]}
# RTL Port declarations: 
set portNum 35
set portList { 
	{ ap_clk sc_in sc_logic 1 clock -1 } 
	{ ap_rst sc_in sc_logic 1 reset -1 active_high_sync } 
	{ ap_start sc_in sc_logic 1 start -1 } 
	{ ap_done sc_out sc_logic 1 predone -1 } 
	{ ap_idle sc_out sc_logic 1 done -1 } 
	{ ap_ready sc_out sc_logic 1 ready -1 } 
	{ C_array_address0 sc_out sc_lv 15 signal 0 } 
	{ C_array_ce0 sc_out sc_logic 1 signal 0 } 
	{ C_array_we0 sc_out sc_logic 1 signal 0 } 
	{ C_array_d0 sc_out sc_lv 32 signal 0 } 
	{ C_array_q0 sc_in sc_lv 32 signal 0 } 
	{ A_array_address0 sc_out sc_lv 15 signal 1 } 
	{ A_array_ce0 sc_out sc_logic 1 signal 1 } 
	{ A_array_q0 sc_in sc_lv 32 signal 1 } 
	{ A_ndim_read sc_in sc_lv 64 signal 2 } 
	{ A_numel_read sc_in sc_lv 64 signal 3 } 
	{ A_shape_address0 sc_out sc_lv 3 signal 4 } 
	{ A_shape_ce0 sc_out sc_logic 1 signal 4 } 
	{ A_shape_q0 sc_in sc_lv 64 signal 4 } 
	{ B_array_0_address0 sc_out sc_lv 13 signal 5 } 
	{ B_array_0_ce0 sc_out sc_logic 1 signal 5 } 
	{ B_array_0_q0 sc_in sc_lv 32 signal 5 } 
	{ B_array_1_address0 sc_out sc_lv 13 signal 6 } 
	{ B_array_1_ce0 sc_out sc_logic 1 signal 6 } 
	{ B_array_1_q0 sc_in sc_lv 32 signal 6 } 
	{ B_array_2_address0 sc_out sc_lv 13 signal 7 } 
	{ B_array_2_ce0 sc_out sc_logic 1 signal 7 } 
	{ B_array_2_q0 sc_in sc_lv 32 signal 7 } 
	{ B_array_3_address0 sc_out sc_lv 13 signal 8 } 
	{ B_array_3_ce0 sc_out sc_logic 1 signal 8 } 
	{ B_array_3_q0 sc_in sc_lv 32 signal 8 } 
	{ B_shape_address0 sc_out sc_lv 3 signal 9 } 
	{ B_shape_ce0 sc_out sc_logic 1 signal 9 } 
	{ B_shape_q0 sc_in sc_lv 64 signal 9 } 
	{ axesA_0_read sc_in sc_lv 64 signal 10 } 
}
set NewPortList {[ 
	{ "name": "ap_clk", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "clock", "bundle":{"name": "ap_clk", "role": "default" }} , 
 	{ "name": "ap_rst", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "reset", "bundle":{"name": "ap_rst", "role": "default" }} , 
 	{ "name": "ap_start", "direction": "in", "datatype": "sc_logic", "bitwidth":1, "type": "start", "bundle":{"name": "ap_start", "role": "default" }} , 
 	{ "name": "ap_done", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "predone", "bundle":{"name": "ap_done", "role": "default" }} , 
 	{ "name": "ap_idle", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "done", "bundle":{"name": "ap_idle", "role": "default" }} , 
 	{ "name": "ap_ready", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "ready", "bundle":{"name": "ap_ready", "role": "default" }} , 
 	{ "name": "C_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "C_array", "role": "address0" }} , 
 	{ "name": "C_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array", "role": "ce0" }} , 
 	{ "name": "C_array_we0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "C_array", "role": "we0" }} , 
 	{ "name": "C_array_d0", "direction": "out", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array", "role": "d0" }} , 
 	{ "name": "C_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "C_array", "role": "q0" }} , 
 	{ "name": "A_array_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":15, "type": "signal", "bundle":{"name": "A_array", "role": "address0" }} , 
 	{ "name": "A_array_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_array", "role": "ce0" }} , 
 	{ "name": "A_array_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "A_array", "role": "q0" }} , 
 	{ "name": "A_ndim_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_ndim_read", "role": "default" }} , 
 	{ "name": "A_numel_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_numel_read", "role": "default" }} , 
 	{ "name": "A_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "A_shape", "role": "address0" }} , 
 	{ "name": "A_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "A_shape", "role": "ce0" }} , 
 	{ "name": "A_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "A_shape", "role": "q0" }} , 
 	{ "name": "B_array_0_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "B_array_0", "role": "address0" }} , 
 	{ "name": "B_array_0_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_array_0", "role": "ce0" }} , 
 	{ "name": "B_array_0_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_array_0", "role": "q0" }} , 
 	{ "name": "B_array_1_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "B_array_1", "role": "address0" }} , 
 	{ "name": "B_array_1_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_array_1", "role": "ce0" }} , 
 	{ "name": "B_array_1_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_array_1", "role": "q0" }} , 
 	{ "name": "B_array_2_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "B_array_2", "role": "address0" }} , 
 	{ "name": "B_array_2_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_array_2", "role": "ce0" }} , 
 	{ "name": "B_array_2_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_array_2", "role": "q0" }} , 
 	{ "name": "B_array_3_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":13, "type": "signal", "bundle":{"name": "B_array_3", "role": "address0" }} , 
 	{ "name": "B_array_3_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_array_3", "role": "ce0" }} , 
 	{ "name": "B_array_3_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":32, "type": "signal", "bundle":{"name": "B_array_3", "role": "q0" }} , 
 	{ "name": "B_shape_address0", "direction": "out", "datatype": "sc_lv", "bitwidth":3, "type": "signal", "bundle":{"name": "B_shape", "role": "address0" }} , 
 	{ "name": "B_shape_ce0", "direction": "out", "datatype": "sc_logic", "bitwidth":1, "type": "signal", "bundle":{"name": "B_shape", "role": "ce0" }} , 
 	{ "name": "B_shape_q0", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "B_shape", "role": "q0" }} , 
 	{ "name": "axesA_0_read", "direction": "in", "datatype": "sc_lv", "bitwidth":64, "type": "signal", "bundle":{"name": "axesA_0_read", "role": "default" }}  ]}

set RtlHierarchyInfo {[
	{"ID" : "0", "Level" : "0", "Path" : "`AUTOTB_DUT_INST", "Parent" : "", "Child" : ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10", "16", "18", "19", "20", "21", "22", "23", "24"],
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
					{"ID" : "10", "SubInstance" : "grp_k2c_matmul_fu_686", "Port" : "C"}]},
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
					{"ID" : "10", "SubInstance" : "grp_k2c_matmul_fu_686", "Port" : "A"}]}]},
	{"ID" : "1", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.dense_69_fwork_U", "Parent" : "0"},
	{"ID" : "2", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.permA_U", "Parent" : "0"},
	{"ID" : "3", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.permB_U", "Parent" : "0"},
	{"ID" : "4", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.freeA_U", "Parent" : "0"},
	{"ID" : "5", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.freeB_U", "Parent" : "0"},
	{"ID" : "6", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.newshpA_U", "Parent" : "0"},
	{"ID" : "7", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.newshpB_U", "Parent" : "0"},
	{"ID" : "8", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Asub_U", "Parent" : "0"},
	{"ID" : "9", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.Bsub_U", "Parent" : "0"},
	{"ID" : "10", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_matmul_fu_686", "Parent" : "0", "Child" : ["11", "12", "13", "14", "15"],
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
	{"ID" : "11", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_matmul_fu_686.WebModel_fadd_32ncud_U6", "Parent" : "10"},
	{"ID" : "12", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_matmul_fu_686.WebModel_fmul_32ndEe_U7", "Parent" : "10"},
	{"ID" : "13", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_matmul_fu_686.WebModel_mul_64s_bkb_U8", "Parent" : "10"},
	{"ID" : "14", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_matmul_fu_686.WebModel_mul_64s_bkb_U9", "Parent" : "10"},
	{"ID" : "15", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_matmul_fu_686.WebModel_mul_64nseOg_U10", "Parent" : "10"},
	{"ID" : "16", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.grp_k2c_sub2idx_fu_698", "Parent" : "0", "Child" : ["17"],
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
	{"ID" : "17", "Level" : "2", "Path" : "`AUTOTB_DUT_INST.grp_k2c_sub2idx_fu_698.WebModel_mul_64s_bkb_U1", "Parent" : "16"},
	{"ID" : "18", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WebModel_udiv_64ng8j_U20", "Parent" : "0"},
	{"ID" : "19", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WebModel_udiv_18nhbi_U21", "Parent" : "0"},
	{"ID" : "20", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WebModel_urem_64nibs_U22", "Parent" : "0"},
	{"ID" : "21", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WebModel_udiv_64njbC_U23", "Parent" : "0"},
	{"ID" : "22", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WebModel_urem_64nibs_U24", "Parent" : "0"},
	{"ID" : "23", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WebModel_udiv_64njbC_U25", "Parent" : "0"},
	{"ID" : "24", "Level" : "1", "Path" : "`AUTOTB_DUT_INST.WebModel_mux_464_kbM_U26", "Parent" : "0"}]}


set ArgLastReadFirstWriteLatency {
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
		ndim {Type I LastRead 0 FirstWrite -1}}}

set hasDtUnsupportedChannel 0

set PerformanceInfo {[
	{"Name" : "Latency", "Min" : "-1", "Max" : "-1"}
	, {"Name" : "Interval", "Min" : "-1", "Max" : "-1"}
]}

set PipelineEnableSignalInfo {[
	{"Pipeline" : "2", "EnableSignal" : "ap_enable_pp2"}
	{"Pipeline" : "4", "EnableSignal" : "ap_enable_pp4"}
	{"Pipeline" : "5", "EnableSignal" : "ap_enable_pp5"}
	{"Pipeline" : "6", "EnableSignal" : "ap_enable_pp6"}
	{"Pipeline" : "7", "EnableSignal" : "ap_enable_pp7"}
	{"Pipeline" : "8", "EnableSignal" : "ap_enable_pp8"}
	{"Pipeline" : "9", "EnableSignal" : "ap_enable_pp9"}
	{"Pipeline" : "10", "EnableSignal" : "ap_enable_pp10"}
]}

set Spec2ImplPortList { 
	C_array { ap_memory {  { C_array_address0 mem_address 1 15 }  { C_array_ce0 mem_ce 1 1 }  { C_array_we0 mem_we 1 1 }  { C_array_d0 mem_din 1 32 }  { C_array_q0 mem_dout 0 32 } } }
	A_array { ap_memory {  { A_array_address0 mem_address 1 15 }  { A_array_ce0 mem_ce 1 1 }  { A_array_q0 mem_dout 0 32 } } }
	A_ndim_read { ap_none {  { A_ndim_read in_data 0 64 } } }
	A_numel_read { ap_none {  { A_numel_read in_data 0 64 } } }
	A_shape { ap_memory {  { A_shape_address0 mem_address 1 3 }  { A_shape_ce0 mem_ce 1 1 }  { A_shape_q0 mem_dout 0 64 } } }
	B_array_0 { ap_memory {  { B_array_0_address0 mem_address 1 13 }  { B_array_0_ce0 mem_ce 1 1 }  { B_array_0_q0 mem_dout 0 32 } } }
	B_array_1 { ap_memory {  { B_array_1_address0 mem_address 1 13 }  { B_array_1_ce0 mem_ce 1 1 }  { B_array_1_q0 mem_dout 0 32 } } }
	B_array_2 { ap_memory {  { B_array_2_address0 mem_address 1 13 }  { B_array_2_ce0 mem_ce 1 1 }  { B_array_2_q0 mem_dout 0 32 } } }
	B_array_3 { ap_memory {  { B_array_3_address0 mem_address 1 13 }  { B_array_3_ce0 mem_ce 1 1 }  { B_array_3_q0 mem_dout 0 32 } } }
	B_shape { ap_memory {  { B_shape_address0 mem_address 1 3 }  { B_shape_ce0 mem_ce 1 1 }  { B_shape_q0 mem_dout 0 64 } } }
	axesA_0_read { ap_none {  { axesA_0_read in_data 0 64 } } }
}