// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fft64.h for the primary calling header

#ifndef VERILATED_VTB_FFT64___024ROOT_H_
#define VERILATED_VTB_FFT64___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fft64__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fft64___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fft64__DOT__clk;
    CData/*0:0*/ tb_fft64__DOT__rst;
    CData/*0:0*/ tb_fft64__DOT__start;
    CData/*0:0*/ tb_fft64__DOT__done;
    CData/*3:0*/ tb_fft64__DOT__dut__DOT__state;
    CData/*5:0*/ tb_fft64__DOT__dut__DOT__load_index;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__start__v0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__start__v1;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fft64__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fft64__DOT__done__0;
    IData/*31:0*/ tb_fft64__DOT__n;
    IData/*31:0*/ tb_fft64__DOT__dut__DOT__n;
    IData/*31:0*/ __Vi;
    VlUnpacked<IData/*31:0*/, 64> tb_fft64__DOT__in_real;
    VlUnpacked<IData/*31:0*/, 64> tb_fft64__DOT__in_imag;
    VlUnpacked<IData/*31:0*/, 64> tb_fft64__DOT__out_real;
    VlUnpacked<IData/*31:0*/, 64> tb_fft64__DOT__out_imag;
    VlUnpacked<IData/*31:0*/, 64> tb_fft64__DOT__dut__DOT__real_mem;
    VlUnpacked<IData/*31:0*/, 64> tb_fft64__DOT__dut__DOT__imag_mem;
    VlUnpacked<SData/*15:0*/, 32> tb_fft64__DOT__dut__DOT__tw_real;
    VlUnpacked<SData/*15:0*/, 32> tb_fft64__DOT__dut__DOT__tw_imag;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 3> __Vm_traceActivity;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 64>, false, IData/*31:0*/, 1> __VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem;
    VlNBACommitQueue<VlUnpacked<IData/*31:0*/, 64>, false, IData/*31:0*/, 1> __VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem;
    double tb_fft64__DOT__pi;
    double tb_fft64__DOT__angle;
    double tb_fft64__DOT__sample;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h39a3b97d__0;
    VlTriggerScheduler __VtrigSched_h8118c4eb__0;

    // INTERNAL VARIABLES
    Vtb_fft64__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_fft64___024root(Vtb_fft64__Syms* symsp, const char* namep);
    ~Vtb_fft64___024root();
    VL_UNCOPYABLE(Vtb_fft64___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
