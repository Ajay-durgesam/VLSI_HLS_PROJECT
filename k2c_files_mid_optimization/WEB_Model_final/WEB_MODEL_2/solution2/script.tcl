############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project WEB_MODEL_2
set_top WebModel
add_files WebModel.c
add_files -tb WebModel_test_suite.c -cflags "-Wno-unknown-pragmas"
open_solution "solution2"
set_part {xc7a200tsbv484-2}
create_clock -period 10 -name default
#source "./WEB_MODEL_2/solution2/directives.tcl"
csim_design
csynth_design
cosim_design -rtl vhdl
export_design -format ip_catalog
