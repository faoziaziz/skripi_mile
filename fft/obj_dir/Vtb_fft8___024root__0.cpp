// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fft8.h for the primary calling header

#include "Vtb_fft8__pch.h"

VlCoroutine Vtb_fft8___024root___eval_initial__TOP__Vtiming__0(Vtb_fft8___024root* vlSelf);
VlCoroutine Vtb_fft8___024root___eval_initial__TOP__Vtiming__1(Vtb_fft8___024root* vlSelf);

void Vtb_fft8___024root___eval_initial(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_initial\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fft8___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_fft8___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_fft8___024root___eval_sample(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_sample\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft8___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_fft8___024root___eval_ico(Vtb_fft8___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_ico\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fft8___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_fft8___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft8___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_fft8___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtb_fft8___024root___eval_act(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_act\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.tb_fft8__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft8__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_fft8__DOT__clk__0 
            = vlSelfRef.tb_fft8__DOT__clk;
    }
    Vtb_fft8___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fft8___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_fft8___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_fft8___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
    }
    return (__VactExecute);
}

bool Vtb_fft8___024root___eval_inact(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_inact\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_fft8.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_fft8___024root___nba_sequent__TOP__0(Vtb_fft8___024root* vlSelf);
void Vtb_fft8___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_fft8___024root___eval_nba(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_nba\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_fft8___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_fft8___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[3U] = 1U;
            }
        }
        Vtb_fft8___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_fft8___024root___eval_obs(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_obs\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_fft8___024root___eval_react(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_react\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_fft8___024root___eval_postponed(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_postponed\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vtb_fft8___024root___eval_initial__TOP__Vtiming__0(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("fft8.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_fft8__DOT__clk = 0U;
    vlSelfRef.tb_fft8__DOT__reset = 1U;
    vlSelfRef.tb_fft8__DOT__start = 0U;
    vlSelfRef.tb_fft8__DOT__x0 = 1U;
    vlSelfRef.tb_fft8__DOT__x1 = 0U;
    vlSelfRef.tb_fft8__DOT__x2 = 0U;
    vlSelfRef.tb_fft8__DOT__x3 = 0U;
    vlSelfRef.tb_fft8__DOT__x4 = 0U;
    vlSelfRef.tb_fft8__DOT__x5 = 0U;
    vlSelfRef.tb_fft8__DOT__x6 = 0U;
    vlSelfRef.tb_fft8__DOT__x7 = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb_fft8.v", 
                                         110);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fft8__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_fft8.v", 
                                         115);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fft8__DOT__start = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000002710ULL, 
                                         nullptr, "tb_fft8.v", 
                                         118);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    vlSelfRef.tb_fft8__DOT__start = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000186a0ULL, 
                                         nullptr, "tb_fft8.v", 
                                         122);
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    VL_WRITEF_NX("\n======================================\n             FFT-8 TEST\n======================================\nX[0] = %0d + j(%0d)\nX[1] = %0d + j(%0d)\nX[2] = %0d + j(%0d)\nX[3] = %0d + j(%0d)\nX[4] = %0d + j(%0d)\nX[5] = %0d + j(%0d)\nX[6] = %0d + j(%0d)\nX[7] = %0d + j(%0d)\n======================================\n",16
                 , '~',32,vlSelfRef.tb_fft8__DOT__y0_re
                 , '~',32,vlSelfRef.tb_fft8__DOT__y0_im
                 , '~',32,vlSelfRef.tb_fft8__DOT__y1_re
                 , '~',32,vlSelfRef.tb_fft8__DOT__y1_im
                 , '~',32,vlSelfRef.tb_fft8__DOT__y2_re
                 , '~',32,vlSelfRef.tb_fft8__DOT__y2_im
                 , '~',32,vlSelfRef.tb_fft8__DOT__y3_re
                 , '~',32,vlSelfRef.tb_fft8__DOT__y3_im
                 , '~',32,vlSelfRef.tb_fft8__DOT__y4_re
                 , '~',32,vlSelfRef.tb_fft8__DOT__y4_im
                 , '~',32,vlSelfRef.tb_fft8__DOT__y5_re
                 , '~',32,vlSelfRef.tb_fft8__DOT__y5_im
                 , '~',32,vlSelfRef.tb_fft8__DOT__y6_re
                 , '~',32,vlSelfRef.tb_fft8__DOT__y6_im
                 , '~',32,vlSelfRef.tb_fft8__DOT__y7_re
                 , '~',32,vlSelfRef.tb_fft8__DOT__y7_im);
    VL_FINISH_MT("tb_fft8.v", 140, "");
    vlSelfRef.__Vm_traceActivity[2U] = 1U;
    co_return;
}

VlCoroutine Vtb_fft8___024root___eval_initial__TOP__Vtiming__1(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_fft8.v", 
                                             83);
        vlSelfRef.tb_fft8__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_fft8__DOT__clk)));
    }
    co_return;
}

bool Vtb_fft8___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vtb_fft8___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vtb_fft8___024root___nba_sequent__TOP__0(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___nba_sequent__TOP__0\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*2:0*/ __Vdly__tb_fft8__DOT__dut__DOT__state;
    __Vdly__tb_fft8__DOT__dut__DOT__state = 0;
    CData/*0:0*/ __VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v0;
    __VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v0 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v8;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v8;
    __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v8;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_fft8__DOT__dut__DOT__s3_im__v8;
    __VdlySet__tb_fft8__DOT__dut__DOT__s3_im__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v9;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v9;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v10;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v10;
    __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v10;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v11;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v11;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v12;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v12;
    __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v12;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v13;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v13;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v14;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v14;
    __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v14;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v15;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v15;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v8;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_fft8__DOT__dut__DOT__s2_re__v8;
    __VdlySet__tb_fft8__DOT__dut__DOT__s2_re__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v8;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_fft8__DOT__dut__DOT__s2_im__v8;
    __VdlySet__tb_fft8__DOT__dut__DOT__s2_im__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v9;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v9;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v10;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v10;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v11;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v11;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v12;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v12;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v13;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v13;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v14;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v14;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v15;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v15;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v8;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_fft8__DOT__dut__DOT__s1_re__v8;
    __VdlySet__tb_fft8__DOT__dut__DOT__s1_re__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v8;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v9;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_fft8__DOT__dut__DOT__s1_re__v9;
    __VdlySet__tb_fft8__DOT__dut__DOT__s1_re__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v9;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v10;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v10;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v11;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v11;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v12;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v12;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v13;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v13;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v14;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v14;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v15;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v15;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v15 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v8;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v8;
    __VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v8 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v9;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v9;
    __VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v9 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v10;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v10 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v11;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v11 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v12;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v12 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v13;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v13 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v14;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v14 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v15;
    __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v15 = 0;
    // Body
    __Vdly__tb_fft8__DOT__dut__DOT__state = vlSelfRef.tb_fft8__DOT__dut__DOT__state;
    __VdlySet__tb_fft8__DOT__dut__DOT__s2_re__v8 = 0U;
    __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v8 = 0U;
    __VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v8 = 0U;
    __VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v9 = 0U;
    __VdlySet__tb_fft8__DOT__dut__DOT__s2_im__v8 = 0U;
    __VdlySet__tb_fft8__DOT__dut__DOT__s1_re__v8 = 0U;
    __VdlySet__tb_fft8__DOT__dut__DOT__s1_re__v9 = 0U;
    __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v10 = 0U;
    __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v12 = 0U;
    __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v14 = 0U;
    __VdlySet__tb_fft8__DOT__dut__DOT__s3_im__v8 = 0U;
    __VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v0 = 0U;
    if (vlSelfRef.tb_fft8__DOT__reset) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__i = 8U;
        __Vdly__tb_fft8__DOT__dut__DOT__state = 0U;
        vlSelfRef.tb_fft8__DOT__done = 0U;
        vlSelfRef.tb_fft8__DOT__y0_re = 0U;
        vlSelfRef.tb_fft8__DOT__y1_re = 0U;
        vlSelfRef.tb_fft8__DOT__y2_re = 0U;
        vlSelfRef.tb_fft8__DOT__y3_re = 0U;
        vlSelfRef.tb_fft8__DOT__y4_re = 0U;
        vlSelfRef.tb_fft8__DOT__y5_re = 0U;
        vlSelfRef.tb_fft8__DOT__y6_re = 0U;
        vlSelfRef.tb_fft8__DOT__y7_re = 0U;
        vlSelfRef.tb_fft8__DOT__y0_im = 0U;
        vlSelfRef.tb_fft8__DOT__y1_im = 0U;
        vlSelfRef.tb_fft8__DOT__y2_im = 0U;
        vlSelfRef.tb_fft8__DOT__y3_im = 0U;
        vlSelfRef.tb_fft8__DOT__y4_im = 0U;
        vlSelfRef.tb_fft8__DOT__y5_im = 0U;
        vlSelfRef.tb_fft8__DOT__y6_im = 0U;
        vlSelfRef.tb_fft8__DOT__y7_im = 0U;
        __VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v0 = 1U;
    } else {
        vlSelfRef.tb_fft8__DOT__done = 0U;
        if ((4U & (IData)(vlSelfRef.tb_fft8__DOT__dut__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.tb_fft8__DOT__dut__DOT__state))) {
                __Vdly__tb_fft8__DOT__dut__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.tb_fft8__DOT__dut__DOT__state))) {
                vlSelfRef.tb_fft8__DOT__y0_re = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[0U];
                vlSelfRef.tb_fft8__DOT__y0_im = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[0U];
                vlSelfRef.tb_fft8__DOT__done = 1U;
                __Vdly__tb_fft8__DOT__dut__DOT__state = 0U;
                vlSelfRef.tb_fft8__DOT__y1_re = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[1U];
                vlSelfRef.tb_fft8__DOT__y1_im = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[1U];
                vlSelfRef.tb_fft8__DOT__y2_re = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[2U];
                vlSelfRef.tb_fft8__DOT__y2_im = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[2U];
                vlSelfRef.tb_fft8__DOT__y3_re = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[3U];
                vlSelfRef.tb_fft8__DOT__y3_im = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[3U];
                vlSelfRef.tb_fft8__DOT__y4_re = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[4U];
                vlSelfRef.tb_fft8__DOT__y4_im = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[4U];
                vlSelfRef.tb_fft8__DOT__y5_re = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[5U];
                vlSelfRef.tb_fft8__DOT__y5_im = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[5U];
                vlSelfRef.tb_fft8__DOT__y6_re = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[6U];
                vlSelfRef.tb_fft8__DOT__y6_im = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[6U];
                vlSelfRef.tb_fft8__DOT__y7_re = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[7U];
                vlSelfRef.tb_fft8__DOT__y7_im = vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[7U];
            } else {
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v8 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[0U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[4U]);
                __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v8 = 1U;
                __Vdly__tb_fft8__DOT__dut__DOT__state = 5U;
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v8 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[0U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[4U]);
                __VdlySet__tb_fft8__DOT__dut__DOT__s3_im__v8 = 1U;
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v9 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[0U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[4U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v9 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[0U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[4U]);
                vlSelfRef.tb_fft8__DOT__dut__DOT__mult_re 
                    = (VL_MULS_QQQ(64, 0x0000000000005a82ULL, 
                                   VL_EXTENDS_QI(64,32, vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[5U])) 
                       - VL_MULS_QQQ(64, 0xffffffffffffa57eULL, 
                                     VL_EXTENDS_QI(64,32, vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[5U])));
                vlSelfRef.tb_fft8__DOT__dut__DOT__mult_im 
                    = (VL_MULS_QQQ(64, 0xffffffffffffa57eULL, 
                                   VL_EXTENDS_QI(64,32, vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[5U])) 
                       + VL_MULS_QQQ(64, 0x0000000000005a82ULL, 
                                     VL_EXTENDS_QI(64,32, vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[5U])));
                vlSelfRef.tb_fft8__DOT__dut__DOT__tw_re 
                    = (IData)((vlSelfRef.tb_fft8__DOT__dut__DOT__mult_re 
                               >> 0x0fU));
                vlSelfRef.tb_fft8__DOT__dut__DOT__tw_im 
                    = (IData)((vlSelfRef.tb_fft8__DOT__dut__DOT__mult_im 
                               >> 0x0fU));
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v10 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[1U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__tw_re);
                __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v10 = 1U;
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v10 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[1U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__tw_im);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v11 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[1U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__tw_re);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v11 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[1U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__tw_im);
                vlSelfRef.tb_fft8__DOT__dut__DOT__tw_re 
                    = vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[6U];
                vlSelfRef.tb_fft8__DOT__dut__DOT__tw_im 
                    = (- vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[6U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v12 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[2U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__tw_re);
                __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v12 = 1U;
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v12 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[2U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__tw_im);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v13 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[2U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__tw_re);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v13 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[2U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__tw_im);
                vlSelfRef.tb_fft8__DOT__dut__DOT__mult_re 
                    = (VL_MULS_QQQ(64, 0xffffffffffffa57eULL, 
                                   VL_EXTENDS_QI(64,32, vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[7U])) 
                       - VL_MULS_QQQ(64, 0xffffffffffffa57eULL, 
                                     VL_EXTENDS_QI(64,32, vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[7U])));
                vlSelfRef.tb_fft8__DOT__dut__DOT__mult_im 
                    = (VL_MULS_QQQ(64, 0xffffffffffffa57eULL, 
                                   VL_EXTENDS_QI(64,32, vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[7U])) 
                       + VL_MULS_QQQ(64, 0xffffffffffffa57eULL, 
                                     VL_EXTENDS_QI(64,32, vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[7U])));
                vlSelfRef.tb_fft8__DOT__dut__DOT__tw_re 
                    = (IData)((vlSelfRef.tb_fft8__DOT__dut__DOT__mult_re 
                               >> 0x0fU));
                vlSelfRef.tb_fft8__DOT__dut__DOT__tw_im 
                    = (IData)((vlSelfRef.tb_fft8__DOT__dut__DOT__mult_im 
                               >> 0x0fU));
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v14 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[3U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__tw_re);
                __VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v14 = 1U;
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v14 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[3U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__tw_im);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v15 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[3U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__tw_re);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v15 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[3U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__tw_im);
            }
        } else if ((2U & (IData)(vlSelfRef.tb_fft8__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_fft8__DOT__dut__DOT__state))) {
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v8 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[0U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[2U]);
                __VdlySet__tb_fft8__DOT__dut__DOT__s2_re__v8 = 1U;
                __Vdly__tb_fft8__DOT__dut__DOT__state = 4U;
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v8 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[0U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[2U]);
                __VdlySet__tb_fft8__DOT__dut__DOT__s2_im__v8 = 1U;
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v9 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[0U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[2U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v9 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[0U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[2U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v10 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[1U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[3U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v10 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[1U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[3U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v11 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[1U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[3U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v11 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[1U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[3U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v12 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[4U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[6U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v12 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[4U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[6U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v13 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[4U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[6U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v13 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[4U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[6U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v14 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[5U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[7U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v14 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[5U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[7U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v15 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[5U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[7U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v15 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[5U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[7U]);
            } else {
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v8 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[0U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[1U]);
                __VdlySet__tb_fft8__DOT__dut__DOT__s1_re__v8 = 1U;
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v8 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[0U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[1U]);
                __Vdly__tb_fft8__DOT__dut__DOT__state = 3U;
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v9 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[0U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[1U]);
                __VdlySet__tb_fft8__DOT__dut__DOT__s1_re__v9 = 1U;
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v9 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[0U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[1U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v10 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[2U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[3U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v10 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[2U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[3U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v11 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[2U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[3U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v11 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[2U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[3U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v12 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[4U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[5U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v12 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[4U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[5U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v13 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[4U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[5U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v13 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[4U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[5U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v14 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[6U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[7U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v14 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[6U] 
                       + vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[7U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v15 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[6U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[7U]);
                __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v15 
                    = (vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[6U] 
                       - vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[7U]);
            }
        } else if ((1U & (IData)(vlSelfRef.tb_fft8__DOT__dut__DOT__state))) {
            __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v8 
                = (((- (IData)((1U & ((IData)(vlSelfRef.tb_fft8__DOT__x0) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_fft8__DOT__x0));
            __VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v8 = 1U;
            __Vdly__tb_fft8__DOT__dut__DOT__state = 2U;
            __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v9 
                = (((- (IData)((1U & ((IData)(vlSelfRef.tb_fft8__DOT__x4) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_fft8__DOT__x4));
            __VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v9 = 1U;
            __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v10 
                = (((- (IData)((1U & ((IData)(vlSelfRef.tb_fft8__DOT__x2) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_fft8__DOT__x2));
            __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v11 
                = (((- (IData)((1U & ((IData)(vlSelfRef.tb_fft8__DOT__x6) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_fft8__DOT__x6));
            __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v12 
                = (((- (IData)((1U & ((IData)(vlSelfRef.tb_fft8__DOT__x1) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_fft8__DOT__x1));
            __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v13 
                = (((- (IData)((1U & ((IData)(vlSelfRef.tb_fft8__DOT__x5) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_fft8__DOT__x5));
            __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v14 
                = (((- (IData)((1U & ((IData)(vlSelfRef.tb_fft8__DOT__x3) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_fft8__DOT__x3));
            __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v15 
                = (((- (IData)((1U & ((IData)(vlSelfRef.tb_fft8__DOT__x7) 
                                      >> 0x0fU)))) 
                    << 0x00000010U) | (IData)(vlSelfRef.tb_fft8__DOT__x7));
        } else if (vlSelfRef.tb_fft8__DOT__start) {
            __Vdly__tb_fft8__DOT__dut__DOT__state = 1U;
        }
    }
    vlSelfRef.tb_fft8__DOT__dut__DOT__state = __Vdly__tb_fft8__DOT__dut__DOT__state;
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v0) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[0U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[1U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[2U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[3U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[4U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[5U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[6U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[7U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[0U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[1U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[2U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[3U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[4U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[5U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[6U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[7U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[0U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[1U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[2U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[3U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[4U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[5U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[6U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[7U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[0U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[1U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[2U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[3U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[4U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[5U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[6U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[7U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[0U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[1U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[2U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[3U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[4U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[5U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[6U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[7U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[0U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[1U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[2U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[3U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[4U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[5U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[6U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[7U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[0U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[1U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[2U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[3U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[4U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[5U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[6U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[7U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[0U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[1U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[2U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[3U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[4U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[5U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[6U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[7U] = 0U;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v8) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[0U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[0U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v8;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s0_re__v9) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[1U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[2U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[3U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[4U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[5U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[6U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im[7U] = 0U;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[1U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v9;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[2U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v10;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[3U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v11;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[4U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v12;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[5U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v13;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[6U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v14;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re[7U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s0_re__v15;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s1_re__v8) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[0U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v8;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[0U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v8;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s1_re__v9) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[1U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v9;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[2U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v10;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[3U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v11;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[4U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v12;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[5U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v13;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[6U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v14;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re[7U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_re__v15;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[1U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v9;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[2U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v10;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[3U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v11;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[4U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v12;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[5U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v13;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[6U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v14;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im[7U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s1_im__v15;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s2_re__v8) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[0U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v8;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s2_im__v8) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[0U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v8;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[2U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v9;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[1U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v10;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[3U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v11;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[4U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v12;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[6U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v13;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[5U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v14;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im[7U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_im__v15;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[2U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v9;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[1U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v10;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[3U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v11;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[4U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v12;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[6U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v13;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[5U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v14;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re[7U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s2_re__v15;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s3_im__v8) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[0U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v8;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[4U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v9;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v10) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[1U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v10;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[5U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v11;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v12) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[2U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v12;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[6U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v13;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v8) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[0U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v8;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s3_im__v8) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[4U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v9;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v10) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[1U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v10;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[5U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v11;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v12) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[2U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v12;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[6U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v13;
    }
    if (__VdlySet__tb_fft8__DOT__dut__DOT__s3_re__v14) {
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[3U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v14;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im[7U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_im__v15;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[3U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v14;
        vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re[7U] 
            = __VdlyVal__tb_fft8__DOT__dut__DOT__s3_re__v15;
    }
}

void Vtb_fft8___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_fft8___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vtb_fft8___024root___eval_debug_assertions(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_debug_assertions\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
