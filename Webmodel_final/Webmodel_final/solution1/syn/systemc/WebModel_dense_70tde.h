// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2018.2
// Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef __WebModel_dense_70tde_H__
#define __WebModel_dense_70tde_H__


#include <systemc>
using namespace sc_core;
using namespace sc_dt;




#include <iostream>
#include <fstream>

struct WebModel_dense_70tde_ram : public sc_core::sc_module {

  static const unsigned DataWidth = 32;
  static const unsigned AddressRange = 64;
  static const unsigned AddressWidth = 6;

//latency = 1
//input_reg = 1
//output_reg = 0
sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in <sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


sc_lv<DataWidth> ram[AddressRange];


   SC_CTOR(WebModel_dense_70tde_ram) {
        ram[0] = "0b00111100011001100101000011111011";
        ram[1] = "0b10111011011011000110100110001101";
        ram[2] = "0b00111110001100010010101110011110";
        ram[3] = "0b10111100010100100001010111101011";
        ram[4] = "0b00111110100111001111000100100001";
        ram[5] = "0b00111101001100010011011001001011";
        ram[6] = "0b10111101100111010011010111111010";
        ram[7] = "0b00111110100001011110101001000010";
        ram[8] = "0b00111110001110010000110111000101";
        ram[9] = "0b00111110101101011101110101101101";
        ram[10] = "0b00111110100111110010111100100001";
        ram[11] = "0b00111101000111000011111011010101";
        ram[12] = "0b00111110100111111010101001010000";
        ram[13] = "0b10111111001000011000000100101101";
        ram[14] = "0b10111110100101000110000101111001";
        ram[15] = "0b00111110100101111110010011111011";
        ram[16] = "0b10111100100011010001100100000111";
        ram[17] = "0b10111100110010100001101010010011";
        ram[18] = "0b00111101010001101110111100101000";
        ram[19] = "0b00111110100111000100110010111111";
        ram[20] = "0b10111110100000001000011000010110";
        ram[21] = "0b00111110100001110110111011111101";
        ram[22] = "0b00111110101011000101011100001100";
        ram[23] = "0b00111110100011101100000100010110";
        ram[24] = "0b10111101100110111111011100110001";
        ram[25] = "0b10111101001011110011000111100011";
        ram[26] = "0b10111101101100111011000011000101";
        ram[27] = "0b00111110010110101111010000001110";
        ram[28] = "0b10111110110111011001001010011111";
        ram[29] = "0b10111110101101001010001111000010";
        ram[30] = "0b10111110000111001111111011111000";
        ram[31] = "0b10111111000110011011100011100100";
        ram[32] = "0b10111100111110011001000010100101";
        ram[33] = "0b10111110000000111010100010010111";
        ram[34] = "0b10111101010111011110111010111110";
        ram[35] = "0b10111100110111001110110011100011";
        ram[36] = "0b10111101111110001010010010001110";
        ram[37] = "0b00111110011100011001111111111001";
        ram[38] = "0b00111110101010111101001010101111";
        ram[39] = "0b00111110100100111100100100101111";
        ram[40] = "0b00111110001010100001000001111000";
        ram[41] = "0b00111110100011110001011111000110";
        ram[42] = "0b00111101111011001001000011101010";
        ram[43] = "0b00111110100100111101000000001100";
        ram[44] = "0b10111101101011101010011100100111";
        ram[45] = "0b00111110100001101010001010101100";
        ram[46] = "0b00111110100010110110110010111110";
        ram[47] = "0b10111110110001111011001010100010";
        ram[48] = "0b10111110000000010110100101111111";
        ram[49] = "0b10111101001101111100000100011001";
        ram[50] = "0b00111101000111001101001111011011";
        ram[51] = "0b00111110011110101101111001000100";
        ram[52] = "0b10111110100000111110000010111110";
        ram[53] = "0b00111100101100110101010110001100";
        ram[54] = "0b10111110110111011101100101110010";
        ram[55] = "0b10111111001111100110011100101001";
        ram[56] = "0b10111110110000010001011110000010";
        ram[57] = "0b10111110011000101010001101110001";
        ram[58] = "0b00111011110101011011111000111001";
        ram[59] = "0b10111101011001011101010111101111";
        ram[60] = "0b00111100000100101000100110100101";
        ram[61] = "0b00111110001111100110101100111010";
        ram[62] = "0b10111111001011011000001111000110";
        ram[63] = "0b10111110111111011110101011000101";


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


SC_MODULE(WebModel_dense_70tde) {


static const unsigned DataWidth = 32;
static const unsigned AddressRange = 64;
static const unsigned AddressWidth = 6;

sc_core::sc_in <sc_lv<AddressWidth> > address0;
sc_core::sc_in<sc_logic> ce0;
sc_core::sc_out <sc_lv<DataWidth> > q0;
sc_core::sc_in<sc_logic> reset;
sc_core::sc_in<bool> clk;


WebModel_dense_70tde_ram* meminst;


SC_CTOR(WebModel_dense_70tde) {
meminst = new WebModel_dense_70tde_ram("WebModel_dense_70tde_ram");
meminst->address0(address0);
meminst->ce0(ce0);
meminst->q0(q0);

meminst->reset(reset);
meminst->clk(clk);
}
~WebModel_dense_70tde() {
    delete meminst;
}


};//endmodule
#endif
