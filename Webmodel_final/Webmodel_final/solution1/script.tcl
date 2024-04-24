############################################################
## This file is generated automatically by Vivado HLS.
## Please DO NOT edit it.
## Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
############################################################
open_project Webmodel_final
set_top WebModel
add_files ../../../../Downloads/WebModel.c
add_files -tb ../../../../Downloads/WebModel_test_suite.c -cflags "-Wno-unknown-pragmas"
open_solution "solution1"
set_part {xc7a200tsbv484-2}
create_clock -period 10 -name default
#source "./Webmodel_final/solution1/directives.tcl"
csim_design
csynth_design
cosim_design -rtl vhdl
export_design -format ip_catalog
