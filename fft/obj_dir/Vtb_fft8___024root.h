// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_fft8.h for the primary calling header

#ifndef VERILATED_VTB_FFT8___024ROOT_H_
#define VERILATED_VTB_FFT8___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_fft8__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_fft8___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ tb_fft8__DOT__clk;
    CData/*0:0*/ tb_fft8__DOT__reset;
    CData/*0:0*/ tb_fft8__DOT__start;
    CData/*0:0*/ tb_fft8__DOT__done;
    CData/*2:0*/ tb_fft8__DOT__dut__DOT__state;
    CData/*0:0*/ __Vtrigprevexpr___TOP__tb_fft8__DOT__clk__0;
    SData/*15:0*/ tb_fft8__DOT__x0;
    SData/*15:0*/ tb_fft8__DOT__x1;
    SData/*15:0*/ tb_fft8__DOT__x2;
    SData/*15:0*/ tb_fft8__DOT__x3;
    SData/*15:0*/ tb_fft8__DOT__x4;
    SData/*15:0*/ tb_fft8__DOT__x5;
    SData/*15:0*/ tb_fft8__DOT__x6;
    SData/*15:0*/ tb_fft8__DOT__x7;
    IData/*31:0*/ tb_fft8__DOT__y0_re;
    IData/*31:0*/ tb_fft8__DOT__y1_re;
    IData/*31:0*/ tb_fft8__DOT__y2_re;
    IData/*31:0*/ tb_fft8__DOT__y3_re;
    IData/*31:0*/ tb_fft8__DOT__y4_re;
    IData/*31:0*/ tb_fft8__DOT__y5_re;
    IData/*31:0*/ tb_fft8__DOT__y6_re;
    IData/*31:0*/ tb_fft8__DOT__y7_re;
    IData/*31:0*/ tb_fft8__DOT__y0_im;
    IData/*31:0*/ tb_fft8__DOT__y1_im;
    IData/*31:0*/ tb_fft8__DOT__y2_im;
    IData/*31:0*/ tb_fft8__DOT__y3_im;
    IData/*31:0*/ tb_fft8__DOT__y4_im;
    IData/*31:0*/ tb_fft8__DOT__y5_im;
    IData/*31:0*/ tb_fft8__DOT__y6_im;
    IData/*31:0*/ tb_fft8__DOT__y7_im;
    IData/*31:0*/ tb_fft8__DOT__dut__DOT__tw_re;
    IData/*31:0*/ tb_fft8__DOT__dut__DOT__tw_im;
    IData/*31:0*/ tb_fft8__DOT__dut__DOT__i;
    IData/*31:0*/ __Vi;
    QData/*63:0*/ tb_fft8__DOT__dut__DOT__mult_re;
    QData/*63:0*/ tb_fft8__DOT__dut__DOT__mult_im;
    VlUnpacked<IData/*31:0*/, 8> tb_fft8__DOT__dut__DOT__s0_re;
    VlUnpacked<IData/*31:0*/, 8> tb_fft8__DOT__dut__DOT__s0_im;
    VlUnpacked<IData/*31:0*/, 8> tb_fft8__DOT__dut__DOT__s1_re;
    VlUnpacked<IData/*31:0*/, 8> tb_fft8__DOT__dut__DOT__s1_im;
    VlUnpacked<IData/*31:0*/, 8> tb_fft8__DOT__dut__DOT__s2_re;
    VlUnpacked<IData/*31:0*/, 8> tb_fft8__DOT__dut__DOT__s2_im;
    VlUnpacked<IData/*31:0*/, 8> tb_fft8__DOT__dut__DOT__s3_re;
    VlUnpacked<IData/*31:0*/, 8> tb_fft8__DOT__dut__DOT__s3_im;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlDelayScheduler __VdlySched;

    // INTERNAL VARIABLES
    Vtb_fft8__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_fft8___024root(Vtb_fft8__Syms* symsp, const char* namep);
    ~Vtb_fft8___024root();
    VL_UNCOPYABLE(Vtb_fft8___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
