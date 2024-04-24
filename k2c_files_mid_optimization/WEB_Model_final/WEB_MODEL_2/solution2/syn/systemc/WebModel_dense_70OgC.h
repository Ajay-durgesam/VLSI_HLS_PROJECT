// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __WebModel_dense_70OgC_H__
#define __WebModel_dense_70OgC_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct WebModel_dense_70OgC_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 8;
  static const unsigned AddressWidth = 3;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(WebModel_dense_70OgC_ram) {
        ram[0] = "0b00111110001100010010101110011110";
        ram[1] = "0b00111110100111110010111100100001";
        ram[2] = "0b00111101010001101110111100101000";
        ram[3] = "0b10111101101100111011000011000101";
        ram[4] = "0b10111101010111011110111010111110";
        ram[5] = "0b00111101111011001001000011101010";
        ram[6] = "0b00111101000111001101001111011011";
        ram[7] = "0b00111011110101011011111000111001";


SC_METHOD(prc_write_0);
  sensitive<<clk.pos();
   }


void prc_write_0()
{
    if (ce0.read() == sc_dt::Log_1) 
    {
            if(address0.read().is_01() && address0.read().to_uint()<AddressRange)
              q0 = ram[address0.read().to_uint()];
            else
              q0 = sc_lv<DataWidth>();
    }
}


}; //endmodule


SC_MODULE(WebModel_dense_70OgC) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 8;
static const unsigned AddressWidth = 3;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


WebModel_dense_70OgC_ram* meminst;


SC_CTOR(WebModel_dense_70OgC) {
meminst = new WebModel_dense_70OgC_ram("WebModel_dense_70OgC_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~WebModel_dense_70OgC() {
    delete meminst;
}


};//endmodule
#endif
