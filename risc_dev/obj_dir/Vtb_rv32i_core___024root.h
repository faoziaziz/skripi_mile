// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_rv32i_core.h for the primary calling header

#ifndef VERILATED_VTB_RV32I_CORE___024ROOT_H_
#define VERILATED_VTB_RV32I_CORE___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_rv32i_core__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_rv32i_core___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_rv32i_core__DOT__clk;
    CData/*0:0*/ tb_rv32i_core__DOT__reset;
    CData/*0:0*/ tb_rv32i_core__DOT__dmem_valid;
    CData/*0:0*/ tb_rv32i_core__DOT__dmem_write;
    CData/*3:0*/ tb_rv32i_core__DOT__dmem_wstrb;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_rv32i_core__DOT__clk__0;
    IData/*31:0*/ tb_rv32i_core__DOT__dmem_addr;
    IData/*31:0*/ tb_rv32i_core__DOT__dmem_wdata;
    IData/*31:0*/ tb_rv32i_core__DOT__dut__DOT__imem_rdata;
    IData/*31:0*/ tb_rv32i_core__DOT__dut__DOT__pc;
    IData/*31:0*/ tb_rv32i_core__DOT__dut__DOT__rs1_data;
    IData/*31:0*/ tb_rv32i_core__DOT__dut__DOT__rs2_data;
    IData/*31:0*/ tb_rv32i_core__DOT__dut__DOT__imm_I;
    IData/*31:0*/ tb_rv32i_core__DOT__dut__DOT__imm_B;
    IData/*31:0*/ tb_rv32i_core__DOT__dut__DOT__alu_result;
    IData/*31:0*/ tb_rv32i_core__DOT__dut__DOT__i;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 32> tb_rv32i_core__DOT__dut__DOT__regs;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_rv32i_core__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_rv32i_core___024root(Vtb_rv32i_core__Syms* symsp, const char* namep);
    ~Vtb_rv32i_core___024root();
    VL_UNCOPYABLE(Vtb_rv32i_core___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
