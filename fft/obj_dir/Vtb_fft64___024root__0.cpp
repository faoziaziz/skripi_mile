// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fft64.h for the primary calling header

#include "Vtb_fft64__pch.h"

VL_ATTR_COLD void Vtb_fft64___024root___eval_initial__TOP(Vtb_fft64___024root* vlSelf);
VlCoroutine Vtb_fft64___024root___eval_initial__TOP__Vtiming__0(Vtb_fft64___024root* vlSelf);
VlCoroutine Vtb_fft64___024root___eval_initial__TOP__Vtiming__1(Vtb_fft64___024root* vlSelf);

void Vtb_fft64___024root___eval_initial(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_initial\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fft64___024root___eval_initial__TOP(vlSelf);
    vlSelfRef.__Vm_traceActivity[1U] = 1U;
    Vtb_fft64___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_fft64___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_fft64___024root___eval_sample(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_sample\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft64___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_fft64___024root___eval_ico(Vtb_fft64___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_ico\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fft64___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_fft64___024root___timing_ready(Vtb_fft64___024root* vlSelf);
void Vtb_fft64___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft64___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_fft64___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_fft64___024root___timing_resume(Vtb_fft64___024root* vlSelf);

bool Vtb_fft64___024root___eval_act(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_act\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 2U) 
                                                         | ((((IData)(vlSelfRef.tb_fft64__DOT__done) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft64__DOT__done__0)) 
                                                             << 1U) 
                                                            | ((IData)(vlSelfRef.tb_fft64__DOT__clk) 
                                                               & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft64__DOT__clk__0)))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_fft64__DOT__clk__0 
            = vlSelfRef.tb_fft64__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__tb_fft64__DOT__done__0 
            = vlSelfRef.tb_fft64__DOT__done;
    }
    Vtb_fft64___024root___timing_ready(vlSelf);
    Vtb_fft64___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fft64___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_fft64___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_fft64___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_fft64___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_fft64___024root___eval_inact(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_inact\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_fft64.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_fft64___024root___nba_sequent__TOP__0(Vtb_fft64___024root* vlSelf);
void Vtb_fft64___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_fft64___024root___eval_nba(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_nba\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_fft64___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_fft64___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[2U] = 1U;
            }
            if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    if (vlSelfRef.__VdlySet__tb_fft64__DOT__start__v0) {
                        vlSelfRef.__VdlySet__tb_fft64__DOT__start__v0 = 0U;
                        vlSelfRef.tb_fft64__DOT__start = 1U;
                    }
                    if (vlSelfRef.__VdlySet__tb_fft64__DOT__start__v1) {
                        vlSelfRef.__VdlySet__tb_fft64__DOT__start__v1 = 0U;
                        vlSelfRef.tb_fft64__DOT__start = 0U;
                    }
                }
            }
        }
        Vtb_fft64___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_fft64___024root___eval_obs(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_obs\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_fft64___024root___eval_react(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_react\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_fft64___024root___eval_postponed(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_postponed\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vtb_fft64___024root___eval_initial__TOP__Vtiming__0(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fft64__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_fft64.v", 
                                             66);
        vlSelfRef.tb_fft64__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_fft64__DOT__clk)));
    }
    co_return;
}

void Vtb_fft64___024root____VbeforeTrig_h39a3b97d__0(Vtb_fft64___024root* vlSelf, const char* __VeventDescription);
void Vtb_fft64___024root____VbeforeTrig_h8118c4eb__0(Vtb_fft64___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_fft64___024root___eval_initial__TOP__Vtiming__1(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("fft64.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_fft64__DOT__rst = 1U;
    vlSelfRef.tb_fft64__DOT__start = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb_fft64.v", 
                                         119);
    vlSelfRef.tb_fft64__DOT__rst = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb_fft64.v", 
                                         123);
    VL_WRITEF_NX("\n==============================================\n64-POINT RADIX-2 FFT\n==============================================\n\nINPUT SIGNAL:\nx[n] = 12000*sin(2*pi*4*n/64)\nExpected FFT peaks: bin 4 and bin 60\n\n",0);
    vlSelfRef.tb_fft64__DOT__n = 0U;
    VL_WRITEF_NX("input[ 0] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[0U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[0U]);
    vlSelfRef.tb_fft64__DOT__n = 1U;
    VL_WRITEF_NX("input[ 1] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[1U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[1U]);
    vlSelfRef.tb_fft64__DOT__n = 2U;
    VL_WRITEF_NX("input[ 2] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[2U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[2U]);
    vlSelfRef.tb_fft64__DOT__n = 3U;
    VL_WRITEF_NX("input[ 3] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[3U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[3U]);
    vlSelfRef.tb_fft64__DOT__n = 4U;
    VL_WRITEF_NX("input[ 4] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[4U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[4U]);
    vlSelfRef.tb_fft64__DOT__n = 5U;
    VL_WRITEF_NX("input[ 5] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[5U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[5U]);
    vlSelfRef.tb_fft64__DOT__n = 6U;
    VL_WRITEF_NX("input[ 6] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[6U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[6U]);
    vlSelfRef.tb_fft64__DOT__n = 7U;
    VL_WRITEF_NX("input[ 7] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[7U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[7U]);
    vlSelfRef.tb_fft64__DOT__n = 8U;
    VL_WRITEF_NX("input[ 8] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[8U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[8U]);
    vlSelfRef.tb_fft64__DOT__n = 9U;
    VL_WRITEF_NX("input[ 9] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[9U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[9U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000000aU;
    VL_WRITEF_NX("input[10] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[10U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[10U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000000bU;
    VL_WRITEF_NX("input[11] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[11U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[11U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000000cU;
    VL_WRITEF_NX("input[12] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[12U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[12U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000000dU;
    VL_WRITEF_NX("input[13] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[13U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[13U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000000eU;
    VL_WRITEF_NX("input[14] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[14U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[14U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000000fU;
    VL_WRITEF_NX("input[15] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[15U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[15U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000010U;
    VL_WRITEF_NX("input[16] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[16U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[16U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000011U;
    VL_WRITEF_NX("input[17] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[17U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[17U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000012U;
    VL_WRITEF_NX("input[18] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[18U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[18U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000013U;
    VL_WRITEF_NX("input[19] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[19U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[19U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000014U;
    VL_WRITEF_NX("input[20] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[20U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[20U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000015U;
    VL_WRITEF_NX("input[21] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[21U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[21U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000016U;
    VL_WRITEF_NX("input[22] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[22U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[22U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000017U;
    VL_WRITEF_NX("input[23] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[23U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[23U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000018U;
    VL_WRITEF_NX("input[24] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[24U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[24U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000019U;
    VL_WRITEF_NX("input[25] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[25U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[25U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000001aU;
    VL_WRITEF_NX("input[26] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[26U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[26U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000001bU;
    VL_WRITEF_NX("input[27] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[27U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[27U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000001cU;
    VL_WRITEF_NX("input[28] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[28U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[28U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000001dU;
    VL_WRITEF_NX("input[29] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[29U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[29U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000001eU;
    VL_WRITEF_NX("input[30] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[30U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[30U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000001fU;
    VL_WRITEF_NX("input[31] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[31U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[31U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000020U;
    VL_WRITEF_NX("input[32] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[32U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[32U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000021U;
    VL_WRITEF_NX("input[33] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[33U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[33U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000022U;
    VL_WRITEF_NX("input[34] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[34U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[34U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000023U;
    VL_WRITEF_NX("input[35] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[35U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[35U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000024U;
    VL_WRITEF_NX("input[36] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[36U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[36U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000025U;
    VL_WRITEF_NX("input[37] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[37U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[37U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000026U;
    VL_WRITEF_NX("input[38] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[38U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[38U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000027U;
    VL_WRITEF_NX("input[39] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[39U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[39U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000028U;
    VL_WRITEF_NX("input[40] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[40U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[40U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000029U;
    VL_WRITEF_NX("input[41] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[41U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[41U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000002aU;
    VL_WRITEF_NX("input[42] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[42U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[42U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000002bU;
    VL_WRITEF_NX("input[43] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[43U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[43U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000002cU;
    VL_WRITEF_NX("input[44] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[44U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[44U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000002dU;
    VL_WRITEF_NX("input[45] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[45U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[45U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000002eU;
    VL_WRITEF_NX("input[46] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[46U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[46U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000002fU;
    VL_WRITEF_NX("input[47] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[47U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[47U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000030U;
    VL_WRITEF_NX("input[48] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[48U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[48U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000031U;
    VL_WRITEF_NX("input[49] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[49U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[49U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000032U;
    VL_WRITEF_NX("input[50] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[50U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[50U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000033U;
    VL_WRITEF_NX("input[51] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[51U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[51U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000034U;
    VL_WRITEF_NX("input[52] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[52U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[52U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000035U;
    VL_WRITEF_NX("input[53] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[53U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[53U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000036U;
    VL_WRITEF_NX("input[54] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[54U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[54U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000037U;
    VL_WRITEF_NX("input[55] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[55U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[55U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000038U;
    VL_WRITEF_NX("input[56] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[56U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[56U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000039U;
    VL_WRITEF_NX("input[57] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[57U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[57U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000003aU;
    VL_WRITEF_NX("input[58] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[58U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[58U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000003bU;
    VL_WRITEF_NX("input[59] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[59U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[59U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000003cU;
    VL_WRITEF_NX("input[60] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[60U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[60U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000003dU;
    VL_WRITEF_NX("input[61] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[61U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[61U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000003eU;
    VL_WRITEF_NX("input[62] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[62U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[62U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000003fU;
    VL_WRITEF_NX("input[63] = %8d + j%8d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__in_real[63U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__in_imag[63U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000040U;
    Vtb_fft64___024root____VbeforeTrig_h39a3b97d__0(vlSelf, 
                                                    "@(posedge tb_fft64.clk)");
    co_await vlSelfRef.__VtrigSched_h39a3b97d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fft64.clk)", 
                                                         "tb_fft64.v", 
                                                         152);
    vlSelfRef.__VdlySet__tb_fft64__DOT__start__v0 = 1U;
    Vtb_fft64___024root____VbeforeTrig_h39a3b97d__0(vlSelf, 
                                                    "@(posedge tb_fft64.clk)");
    co_await vlSelfRef.__VtrigSched_h39a3b97d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fft64.clk)", 
                                                         "tb_fft64.v", 
                                                         156);
    vlSelfRef.__VdlySet__tb_fft64__DOT__start__v1 = 1U;
    VL_WRITEF_NX("\nFFT STARTED...\n\n",0);
    while ((1U & (~ (IData)(vlSelfRef.tb_fft64__DOT__done)))) {
        Vtb_fft64___024root____VbeforeTrig_h8118c4eb__0(vlSelf, 
                                                        "@( tb_fft64.done)");
        co_await vlSelfRef.__VtrigSched_h8118c4eb__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_fft64.done)", 
                                                             "tb_fft64.v", 
                                                             168);
    }
    Vtb_fft64___024root____VbeforeTrig_h39a3b97d__0(vlSelf, 
                                                    "@(posedge tb_fft64.clk)");
    co_await vlSelfRef.__VtrigSched_h39a3b97d__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_fft64.clk)", 
                                                         "tb_fft64.v", 
                                                         170);
    VL_WRITEF_NX("\n==============================================\nFFT RESULT\n==============================================\n",0);
    vlSelfRef.tb_fft64__DOT__n = 0U;
    VL_WRITEF_NX("X[ 0] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[0U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[0U]);
    vlSelfRef.tb_fft64__DOT__n = 1U;
    VL_WRITEF_NX("X[ 1] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[1U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[1U]);
    vlSelfRef.tb_fft64__DOT__n = 2U;
    VL_WRITEF_NX("X[ 2] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[2U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[2U]);
    vlSelfRef.tb_fft64__DOT__n = 3U;
    VL_WRITEF_NX("X[ 3] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[3U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[3U]);
    vlSelfRef.tb_fft64__DOT__n = 4U;
    VL_WRITEF_NX("X[ 4] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[4U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[4U]);
    vlSelfRef.tb_fft64__DOT__n = 5U;
    VL_WRITEF_NX("X[ 5] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[5U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[5U]);
    vlSelfRef.tb_fft64__DOT__n = 6U;
    VL_WRITEF_NX("X[ 6] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[6U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[6U]);
    vlSelfRef.tb_fft64__DOT__n = 7U;
    VL_WRITEF_NX("X[ 7] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[7U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[7U]);
    vlSelfRef.tb_fft64__DOT__n = 8U;
    VL_WRITEF_NX("X[ 8] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[8U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[8U]);
    vlSelfRef.tb_fft64__DOT__n = 9U;
    VL_WRITEF_NX("X[ 9] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[9U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[9U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000000aU;
    VL_WRITEF_NX("X[10] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[10U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[10U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000000bU;
    VL_WRITEF_NX("X[11] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[11U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[11U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000000cU;
    VL_WRITEF_NX("X[12] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[12U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[12U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000000dU;
    VL_WRITEF_NX("X[13] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[13U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[13U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000000eU;
    VL_WRITEF_NX("X[14] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[14U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[14U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000000fU;
    VL_WRITEF_NX("X[15] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[15U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[15U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000010U;
    VL_WRITEF_NX("X[16] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[16U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[16U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000011U;
    VL_WRITEF_NX("X[17] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[17U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[17U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000012U;
    VL_WRITEF_NX("X[18] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[18U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[18U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000013U;
    VL_WRITEF_NX("X[19] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[19U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[19U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000014U;
    VL_WRITEF_NX("X[20] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[20U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[20U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000015U;
    VL_WRITEF_NX("X[21] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[21U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[21U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000016U;
    VL_WRITEF_NX("X[22] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[22U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[22U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000017U;
    VL_WRITEF_NX("X[23] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[23U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[23U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000018U;
    VL_WRITEF_NX("X[24] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[24U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[24U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000019U;
    VL_WRITEF_NX("X[25] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[25U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[25U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000001aU;
    VL_WRITEF_NX("X[26] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[26U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[26U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000001bU;
    VL_WRITEF_NX("X[27] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[27U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[27U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000001cU;
    VL_WRITEF_NX("X[28] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[28U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[28U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000001dU;
    VL_WRITEF_NX("X[29] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[29U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[29U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000001eU;
    VL_WRITEF_NX("X[30] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[30U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[30U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000001fU;
    VL_WRITEF_NX("X[31] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[31U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[31U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000020U;
    VL_WRITEF_NX("X[32] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[32U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[32U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000021U;
    VL_WRITEF_NX("X[33] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[33U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[33U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000022U;
    VL_WRITEF_NX("X[34] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[34U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[34U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000023U;
    VL_WRITEF_NX("X[35] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[35U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[35U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000024U;
    VL_WRITEF_NX("X[36] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[36U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[36U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000025U;
    VL_WRITEF_NX("X[37] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[37U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[37U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000026U;
    VL_WRITEF_NX("X[38] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[38U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[38U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000027U;
    VL_WRITEF_NX("X[39] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[39U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[39U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000028U;
    VL_WRITEF_NX("X[40] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[40U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[40U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000029U;
    VL_WRITEF_NX("X[41] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[41U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[41U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000002aU;
    VL_WRITEF_NX("X[42] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[42U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[42U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000002bU;
    VL_WRITEF_NX("X[43] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[43U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[43U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000002cU;
    VL_WRITEF_NX("X[44] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[44U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[44U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000002dU;
    VL_WRITEF_NX("X[45] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[45U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[45U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000002eU;
    VL_WRITEF_NX("X[46] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[46U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[46U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000002fU;
    VL_WRITEF_NX("X[47] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[47U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[47U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000030U;
    VL_WRITEF_NX("X[48] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[48U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[48U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000031U;
    VL_WRITEF_NX("X[49] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[49U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[49U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000032U;
    VL_WRITEF_NX("X[50] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[50U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[50U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000033U;
    VL_WRITEF_NX("X[51] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[51U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[51U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000034U;
    VL_WRITEF_NX("X[52] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[52U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[52U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000035U;
    VL_WRITEF_NX("X[53] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[53U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[53U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000036U;
    VL_WRITEF_NX("X[54] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[54U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[54U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000037U;
    VL_WRITEF_NX("X[55] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[55U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[55U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000038U;
    VL_WRITEF_NX("X[56] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[56U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[56U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000039U;
    VL_WRITEF_NX("X[57] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[57U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[57U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000003aU;
    VL_WRITEF_NX("X[58] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[58U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[58U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000003bU;
    VL_WRITEF_NX("X[59] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[59U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[59U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000003cU;
    VL_WRITEF_NX("X[60] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[60U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[60U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000003dU;
    VL_WRITEF_NX("X[61] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[61U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[61U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000003eU;
    VL_WRITEF_NX("X[62] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[62U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[62U]);
    vlSelfRef.tb_fft64__DOT__n = 0x0000003fU;
    VL_WRITEF_NX("X[63] = %12d + j%12d\n",2, '~',32,vlSelfRef.tb_fft64__DOT__out_real[63U]
                 , '~',32,vlSelfRef.tb_fft64__DOT__out_imag[63U]);
    vlSelfRef.tb_fft64__DOT__n = 0x00000040U;
    VL_WRITEF_NX("\n==============================================\nEXPECTED:\nLarge peak around bin 4\nLarge peak around bin 60\n==============================================\n\n",0);
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb_fft64.v", 
                                         200);
    VL_FINISH_MT("tb_fft64.v", 202, "");
    co_return;
}

bool Vtb_fft64___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___trigger_anySet__ico\n"); );
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

bool Vtb_fft64___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___trigger_anySet__act\n"); );
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

void Vtb_fft64___024root___nba_sequent__TOP__0(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___nba_sequent__TOP__0\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__half_size;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__half_size = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__step_size;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__step_size = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__tw_step;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__tw_step = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__group;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__group = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__k;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__k = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i0;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i0 = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i1;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i1 = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__tw_idx;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__tw_idx = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__ar;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__ar = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__ai;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__ai = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__br;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__br = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__bi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__bi = 0;
    SData/*15:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__wr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__wr = 0;
    SData/*15:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__wi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__wi = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_rr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_rr = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ii;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ii = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ri;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ri = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ir;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ir = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__temp_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__temp_real = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__temp_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__temp_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__vr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__vr = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__vi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__vi = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__sum_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__sum_real = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__sum_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__sum_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__diff_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__diff_real = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__diff_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__diff_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__half_size;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__half_size = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__step_size;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__step_size = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__tw_step;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__tw_step = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__group;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__group = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__k;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__k = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i0;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i0 = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i1;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i1 = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__tw_idx;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__tw_idx = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__ar;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__ar = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__ai;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__ai = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__br;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__br = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__bi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__bi = 0;
    SData/*15:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__wr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__wr = 0;
    SData/*15:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__wi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__wi = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_rr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_rr = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ii;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ii = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ri;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ri = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ir;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ir = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__temp_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__temp_real = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__temp_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__temp_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__vr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__vr = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__vi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__vi = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__sum_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__sum_real = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__sum_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__sum_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__diff_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__diff_real = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__diff_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__diff_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__half_size;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__half_size = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__step_size;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__step_size = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__tw_step;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__tw_step = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__group;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__group = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__k;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__k = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i0;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i0 = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i1;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i1 = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__tw_idx;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__tw_idx = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__ar;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__ar = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__ai;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__ai = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__br;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__br = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__bi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__bi = 0;
    SData/*15:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__wr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__wr = 0;
    SData/*15:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__wi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__wi = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_rr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_rr = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ii;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ii = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ri;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ri = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ir;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ir = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__temp_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__temp_real = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__temp_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__temp_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__vr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__vr = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__vi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__vi = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__sum_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__sum_real = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__sum_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__sum_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__diff_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__diff_real = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__diff_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__diff_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__half_size;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__half_size = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__step_size;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__step_size = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__tw_step;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__tw_step = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__group;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__group = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__k;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__k = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i0;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i0 = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i1;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i1 = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__tw_idx;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__tw_idx = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__ar;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__ar = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__ai;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__ai = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__br;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__br = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__bi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__bi = 0;
    SData/*15:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__wr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__wr = 0;
    SData/*15:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__wi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__wi = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_rr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_rr = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ii;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ii = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ri;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ri = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ir;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ir = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__temp_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__temp_real = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__temp_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__temp_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__vr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__vr = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__vi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__vi = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__sum_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__sum_real = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__sum_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__sum_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__diff_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__diff_real = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__diff_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__diff_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__half_size;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__half_size = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__step_size;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__step_size = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__tw_step;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__tw_step = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__group;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__group = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__k;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__k = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i0;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i0 = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i1;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i1 = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__tw_idx;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__tw_idx = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__ar;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__ar = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__ai;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__ai = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__br;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__br = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__bi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__bi = 0;
    SData/*15:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__wr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__wr = 0;
    SData/*15:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__wi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__wi = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_rr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_rr = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ii;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ii = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ri;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ri = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ir;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ir = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__temp_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__temp_real = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__temp_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__temp_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__vr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__vr = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__vi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__vi = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__sum_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__sum_real = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__sum_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__sum_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__diff_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__diff_real = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__diff_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__diff_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__half_size;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__half_size = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__step_size;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__step_size = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__tw_step;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__tw_step = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__group;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__group = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__k;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__k = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i0;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i0 = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i1;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i1 = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__tw_idx;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__tw_idx = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__ar;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__ar = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__ai;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__ai = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__br;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__br = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__bi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__bi = 0;
    SData/*15:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__wr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__wr = 0;
    SData/*15:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__wi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__wi = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_rr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_rr = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ii;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ii = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ri;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ri = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ir;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ir = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__temp_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__temp_real = 0;
    QData/*47:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__temp_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__temp_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__vr;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__vr = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__vi;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__vi = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__sum_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__sum_real = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__sum_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__sum_imag = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__diff_real;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__diff_real = 0;
    IData/*31:0*/ __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__diff_imag;
    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__diff_imag = 0;
    CData/*3:0*/ __Vdly__tb_fft64__DOT__dut__DOT__state;
    __Vdly__tb_fft64__DOT__dut__DOT__state = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v0;
    __VdlySet__tb_fft64__DOT__out_real__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v1;
    __VdlySet__tb_fft64__DOT__out_real__v1 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v2;
    __VdlySet__tb_fft64__DOT__out_real__v2 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v3;
    __VdlySet__tb_fft64__DOT__out_real__v3 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v4;
    __VdlySet__tb_fft64__DOT__out_real__v4 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v5;
    __VdlySet__tb_fft64__DOT__out_real__v5 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v6;
    __VdlySet__tb_fft64__DOT__out_real__v6 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v7;
    __VdlySet__tb_fft64__DOT__out_real__v7 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v8;
    __VdlySet__tb_fft64__DOT__out_real__v8 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v9;
    __VdlySet__tb_fft64__DOT__out_real__v9 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v10;
    __VdlySet__tb_fft64__DOT__out_real__v10 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v11;
    __VdlySet__tb_fft64__DOT__out_real__v11 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v12;
    __VdlySet__tb_fft64__DOT__out_real__v12 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v13;
    __VdlySet__tb_fft64__DOT__out_real__v13 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v14;
    __VdlySet__tb_fft64__DOT__out_real__v14 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v15;
    __VdlySet__tb_fft64__DOT__out_real__v15 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v16;
    __VdlySet__tb_fft64__DOT__out_real__v16 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v17;
    __VdlySet__tb_fft64__DOT__out_real__v17 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v18;
    __VdlySet__tb_fft64__DOT__out_real__v18 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v19;
    __VdlySet__tb_fft64__DOT__out_real__v19 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v20;
    __VdlySet__tb_fft64__DOT__out_real__v20 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v21;
    __VdlySet__tb_fft64__DOT__out_real__v21 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v22;
    __VdlySet__tb_fft64__DOT__out_real__v22 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v23;
    __VdlySet__tb_fft64__DOT__out_real__v23 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v24;
    __VdlySet__tb_fft64__DOT__out_real__v24 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v25;
    __VdlySet__tb_fft64__DOT__out_real__v25 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v26;
    __VdlySet__tb_fft64__DOT__out_real__v26 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v27;
    __VdlySet__tb_fft64__DOT__out_real__v27 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v28;
    __VdlySet__tb_fft64__DOT__out_real__v28 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v29;
    __VdlySet__tb_fft64__DOT__out_real__v29 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v30;
    __VdlySet__tb_fft64__DOT__out_real__v30 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v31;
    __VdlySet__tb_fft64__DOT__out_real__v31 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v32;
    __VdlySet__tb_fft64__DOT__out_real__v32 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v33;
    __VdlySet__tb_fft64__DOT__out_real__v33 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v34;
    __VdlySet__tb_fft64__DOT__out_real__v34 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v35;
    __VdlySet__tb_fft64__DOT__out_real__v35 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v36;
    __VdlySet__tb_fft64__DOT__out_real__v36 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v37;
    __VdlySet__tb_fft64__DOT__out_real__v37 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v38;
    __VdlySet__tb_fft64__DOT__out_real__v38 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v39;
    __VdlySet__tb_fft64__DOT__out_real__v39 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v40;
    __VdlySet__tb_fft64__DOT__out_real__v40 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v41;
    __VdlySet__tb_fft64__DOT__out_real__v41 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v42;
    __VdlySet__tb_fft64__DOT__out_real__v42 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v43;
    __VdlySet__tb_fft64__DOT__out_real__v43 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v44;
    __VdlySet__tb_fft64__DOT__out_real__v44 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v45;
    __VdlySet__tb_fft64__DOT__out_real__v45 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v46;
    __VdlySet__tb_fft64__DOT__out_real__v46 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v47;
    __VdlySet__tb_fft64__DOT__out_real__v47 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v48;
    __VdlySet__tb_fft64__DOT__out_real__v48 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v49;
    __VdlySet__tb_fft64__DOT__out_real__v49 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v50;
    __VdlySet__tb_fft64__DOT__out_real__v50 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v51;
    __VdlySet__tb_fft64__DOT__out_real__v51 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v52;
    __VdlySet__tb_fft64__DOT__out_real__v52 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v53;
    __VdlySet__tb_fft64__DOT__out_real__v53 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v54;
    __VdlySet__tb_fft64__DOT__out_real__v54 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v55;
    __VdlySet__tb_fft64__DOT__out_real__v55 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v56;
    __VdlySet__tb_fft64__DOT__out_real__v56 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v57;
    __VdlySet__tb_fft64__DOT__out_real__v57 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v58;
    __VdlySet__tb_fft64__DOT__out_real__v58 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v59;
    __VdlySet__tb_fft64__DOT__out_real__v59 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v60;
    __VdlySet__tb_fft64__DOT__out_real__v60 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v61;
    __VdlySet__tb_fft64__DOT__out_real__v61 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v62;
    __VdlySet__tb_fft64__DOT__out_real__v62 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v63;
    __VdlySet__tb_fft64__DOT__out_real__v63 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v64;
    __VdlyVal__tb_fft64__DOT__out_real__v64 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v64;
    __VdlySet__tb_fft64__DOT__out_real__v64 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v64;
    __VdlyVal__tb_fft64__DOT__out_imag__v64 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v65;
    __VdlyVal__tb_fft64__DOT__out_real__v65 = 0;
    CData/*0:0*/ __VdlySet__tb_fft64__DOT__out_real__v65;
    __VdlySet__tb_fft64__DOT__out_real__v65 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v65;
    __VdlyVal__tb_fft64__DOT__out_imag__v65 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v66;
    __VdlyVal__tb_fft64__DOT__out_real__v66 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v66;
    __VdlyVal__tb_fft64__DOT__out_imag__v66 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v67;
    __VdlyVal__tb_fft64__DOT__out_real__v67 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v67;
    __VdlyVal__tb_fft64__DOT__out_imag__v67 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v68;
    __VdlyVal__tb_fft64__DOT__out_real__v68 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v68;
    __VdlyVal__tb_fft64__DOT__out_imag__v68 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v69;
    __VdlyVal__tb_fft64__DOT__out_real__v69 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v69;
    __VdlyVal__tb_fft64__DOT__out_imag__v69 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v70;
    __VdlyVal__tb_fft64__DOT__out_real__v70 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v70;
    __VdlyVal__tb_fft64__DOT__out_imag__v70 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v71;
    __VdlyVal__tb_fft64__DOT__out_real__v71 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v71;
    __VdlyVal__tb_fft64__DOT__out_imag__v71 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v72;
    __VdlyVal__tb_fft64__DOT__out_real__v72 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v72;
    __VdlyVal__tb_fft64__DOT__out_imag__v72 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v73;
    __VdlyVal__tb_fft64__DOT__out_real__v73 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v73;
    __VdlyVal__tb_fft64__DOT__out_imag__v73 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v74;
    __VdlyVal__tb_fft64__DOT__out_real__v74 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v74;
    __VdlyVal__tb_fft64__DOT__out_imag__v74 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v75;
    __VdlyVal__tb_fft64__DOT__out_real__v75 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v75;
    __VdlyVal__tb_fft64__DOT__out_imag__v75 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v76;
    __VdlyVal__tb_fft64__DOT__out_real__v76 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v76;
    __VdlyVal__tb_fft64__DOT__out_imag__v76 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v77;
    __VdlyVal__tb_fft64__DOT__out_real__v77 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v77;
    __VdlyVal__tb_fft64__DOT__out_imag__v77 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v78;
    __VdlyVal__tb_fft64__DOT__out_real__v78 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v78;
    __VdlyVal__tb_fft64__DOT__out_imag__v78 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v79;
    __VdlyVal__tb_fft64__DOT__out_real__v79 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v79;
    __VdlyVal__tb_fft64__DOT__out_imag__v79 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v80;
    __VdlyVal__tb_fft64__DOT__out_real__v80 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v80;
    __VdlyVal__tb_fft64__DOT__out_imag__v80 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v81;
    __VdlyVal__tb_fft64__DOT__out_real__v81 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v81;
    __VdlyVal__tb_fft64__DOT__out_imag__v81 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v82;
    __VdlyVal__tb_fft64__DOT__out_real__v82 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v82;
    __VdlyVal__tb_fft64__DOT__out_imag__v82 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v83;
    __VdlyVal__tb_fft64__DOT__out_real__v83 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v83;
    __VdlyVal__tb_fft64__DOT__out_imag__v83 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v84;
    __VdlyVal__tb_fft64__DOT__out_real__v84 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v84;
    __VdlyVal__tb_fft64__DOT__out_imag__v84 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v85;
    __VdlyVal__tb_fft64__DOT__out_real__v85 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v85;
    __VdlyVal__tb_fft64__DOT__out_imag__v85 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v86;
    __VdlyVal__tb_fft64__DOT__out_real__v86 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v86;
    __VdlyVal__tb_fft64__DOT__out_imag__v86 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v87;
    __VdlyVal__tb_fft64__DOT__out_real__v87 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v87;
    __VdlyVal__tb_fft64__DOT__out_imag__v87 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v88;
    __VdlyVal__tb_fft64__DOT__out_real__v88 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v88;
    __VdlyVal__tb_fft64__DOT__out_imag__v88 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v89;
    __VdlyVal__tb_fft64__DOT__out_real__v89 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v89;
    __VdlyVal__tb_fft64__DOT__out_imag__v89 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v90;
    __VdlyVal__tb_fft64__DOT__out_real__v90 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v90;
    __VdlyVal__tb_fft64__DOT__out_imag__v90 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v91;
    __VdlyVal__tb_fft64__DOT__out_real__v91 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v91;
    __VdlyVal__tb_fft64__DOT__out_imag__v91 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v92;
    __VdlyVal__tb_fft64__DOT__out_real__v92 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v92;
    __VdlyVal__tb_fft64__DOT__out_imag__v92 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v93;
    __VdlyVal__tb_fft64__DOT__out_real__v93 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v93;
    __VdlyVal__tb_fft64__DOT__out_imag__v93 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v94;
    __VdlyVal__tb_fft64__DOT__out_real__v94 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v94;
    __VdlyVal__tb_fft64__DOT__out_imag__v94 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v95;
    __VdlyVal__tb_fft64__DOT__out_real__v95 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v95;
    __VdlyVal__tb_fft64__DOT__out_imag__v95 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v96;
    __VdlyVal__tb_fft64__DOT__out_real__v96 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v96;
    __VdlyVal__tb_fft64__DOT__out_imag__v96 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v97;
    __VdlyVal__tb_fft64__DOT__out_real__v97 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v97;
    __VdlyVal__tb_fft64__DOT__out_imag__v97 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v98;
    __VdlyVal__tb_fft64__DOT__out_real__v98 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v98;
    __VdlyVal__tb_fft64__DOT__out_imag__v98 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v99;
    __VdlyVal__tb_fft64__DOT__out_real__v99 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v99;
    __VdlyVal__tb_fft64__DOT__out_imag__v99 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v100;
    __VdlyVal__tb_fft64__DOT__out_real__v100 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v100;
    __VdlyVal__tb_fft64__DOT__out_imag__v100 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v101;
    __VdlyVal__tb_fft64__DOT__out_real__v101 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v101;
    __VdlyVal__tb_fft64__DOT__out_imag__v101 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v102;
    __VdlyVal__tb_fft64__DOT__out_real__v102 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v102;
    __VdlyVal__tb_fft64__DOT__out_imag__v102 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v103;
    __VdlyVal__tb_fft64__DOT__out_real__v103 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v103;
    __VdlyVal__tb_fft64__DOT__out_imag__v103 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v104;
    __VdlyVal__tb_fft64__DOT__out_real__v104 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v104;
    __VdlyVal__tb_fft64__DOT__out_imag__v104 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v105;
    __VdlyVal__tb_fft64__DOT__out_real__v105 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v105;
    __VdlyVal__tb_fft64__DOT__out_imag__v105 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v106;
    __VdlyVal__tb_fft64__DOT__out_real__v106 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v106;
    __VdlyVal__tb_fft64__DOT__out_imag__v106 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v107;
    __VdlyVal__tb_fft64__DOT__out_real__v107 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v107;
    __VdlyVal__tb_fft64__DOT__out_imag__v107 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v108;
    __VdlyVal__tb_fft64__DOT__out_real__v108 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v108;
    __VdlyVal__tb_fft64__DOT__out_imag__v108 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v109;
    __VdlyVal__tb_fft64__DOT__out_real__v109 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v109;
    __VdlyVal__tb_fft64__DOT__out_imag__v109 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v110;
    __VdlyVal__tb_fft64__DOT__out_real__v110 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v110;
    __VdlyVal__tb_fft64__DOT__out_imag__v110 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v111;
    __VdlyVal__tb_fft64__DOT__out_real__v111 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v111;
    __VdlyVal__tb_fft64__DOT__out_imag__v111 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v112;
    __VdlyVal__tb_fft64__DOT__out_real__v112 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v112;
    __VdlyVal__tb_fft64__DOT__out_imag__v112 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v113;
    __VdlyVal__tb_fft64__DOT__out_real__v113 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v113;
    __VdlyVal__tb_fft64__DOT__out_imag__v113 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v114;
    __VdlyVal__tb_fft64__DOT__out_real__v114 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v114;
    __VdlyVal__tb_fft64__DOT__out_imag__v114 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v115;
    __VdlyVal__tb_fft64__DOT__out_real__v115 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v115;
    __VdlyVal__tb_fft64__DOT__out_imag__v115 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v116;
    __VdlyVal__tb_fft64__DOT__out_real__v116 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v116;
    __VdlyVal__tb_fft64__DOT__out_imag__v116 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v117;
    __VdlyVal__tb_fft64__DOT__out_real__v117 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v117;
    __VdlyVal__tb_fft64__DOT__out_imag__v117 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v118;
    __VdlyVal__tb_fft64__DOT__out_real__v118 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v118;
    __VdlyVal__tb_fft64__DOT__out_imag__v118 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v119;
    __VdlyVal__tb_fft64__DOT__out_real__v119 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v119;
    __VdlyVal__tb_fft64__DOT__out_imag__v119 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v120;
    __VdlyVal__tb_fft64__DOT__out_real__v120 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v120;
    __VdlyVal__tb_fft64__DOT__out_imag__v120 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v121;
    __VdlyVal__tb_fft64__DOT__out_real__v121 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v121;
    __VdlyVal__tb_fft64__DOT__out_imag__v121 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v122;
    __VdlyVal__tb_fft64__DOT__out_real__v122 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v122;
    __VdlyVal__tb_fft64__DOT__out_imag__v122 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v123;
    __VdlyVal__tb_fft64__DOT__out_real__v123 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v123;
    __VdlyVal__tb_fft64__DOT__out_imag__v123 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v124;
    __VdlyVal__tb_fft64__DOT__out_real__v124 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v124;
    __VdlyVal__tb_fft64__DOT__out_imag__v124 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v125;
    __VdlyVal__tb_fft64__DOT__out_real__v125 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v125;
    __VdlyVal__tb_fft64__DOT__out_imag__v125 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v126;
    __VdlyVal__tb_fft64__DOT__out_real__v126 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v126;
    __VdlyVal__tb_fft64__DOT__out_imag__v126 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_real__v127;
    __VdlyVal__tb_fft64__DOT__out_real__v127 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__out_imag__v127;
    __VdlyVal__tb_fft64__DOT__out_imag__v127 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v64;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v64 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v64;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v64 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v64;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v64 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v64;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v64 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v65;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v65 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v65;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v65 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v65;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v65 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v65;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v65 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v66;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v66 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v66;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v66 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v66;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v66 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v66;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v66 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v67;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v67 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v67;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v67 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v67;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v67 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v67;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v67 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v68;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v68 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v68;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v68 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v68;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v68 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v68;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v68 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v69;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v69 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v69;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v69 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v69;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v69 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v69;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v69 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v70;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v70 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v70;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v70 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v70;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v70 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v70;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v70 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v71;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v71 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v71;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v71 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v71;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v71 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v71;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v71 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v72;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v72 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v72;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v72 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v72;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v72 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v72;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v72 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v73;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v73 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v73;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v73 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v73;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v73 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v73;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v73 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v74;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v74 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v74;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v74 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v74;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v74 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v74;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v74 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v75;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v75 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v75;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v75 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v75;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v75 = 0;
    CData/*5:0*/ __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v75;
    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v75 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v76;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v76 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v76;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v76 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v77;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v77 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v77;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v77 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v78;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v78 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v78;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v78 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v79;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v79 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v79;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v79 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v80;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v80 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v80;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v80 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v81;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v81 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v81;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v81 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v82;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v82 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v82;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v82 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v83;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v83 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v83;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v83 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v84;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v84 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v84;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v84 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v85;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v85 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v85;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v85 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v86;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v86 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v86;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v86 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v87;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v87 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v87;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v87 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v88;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v88 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v88;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v88 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v89;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v89 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v89;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v89 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v90;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v90 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v90;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v90 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v91;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v91 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v91;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v91 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v92;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v92 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v92;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v92 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v93;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v93 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v93;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v93 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v94;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v94 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v94;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v94 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v95;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v95 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v95;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v95 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v96;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v96 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v96;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v96 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v97;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v97 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v97;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v97 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v98;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v98 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v98;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v98 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v99;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v99 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v99;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v99 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v100;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v100 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v100;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v100 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v101;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v101 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v101;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v101 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v102;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v102 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v102;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v102 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v103;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v103 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v103;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v103 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v104;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v104 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v104;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v104 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v105;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v105 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v105;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v105 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v106;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v106 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v106;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v106 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v107;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v107 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v107;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v107 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v108;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v108 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v108;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v108 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v109;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v109 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v109;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v109 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v110;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v110 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v110;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v110 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v111;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v111 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v111;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v111 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v112;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v112 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v112;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v112 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v113;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v113 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v113;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v113 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v114;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v114 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v114;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v114 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v115;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v115 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v115;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v115 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v116;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v116 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v116;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v116 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v117;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v117 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v117;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v117 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v118;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v118 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v118;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v118 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v119;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v119 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v119;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v119 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v120;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v120 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v120;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v120 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v121;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v121 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v121;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v121 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v122;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v122 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v122;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v122 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v123;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v123 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v123;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v123 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v124;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v124 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v124;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v124 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v125;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v125 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v125;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v125 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v126;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v126 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v126;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v126 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v127;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v127 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v127;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v127 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v128;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v128 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v128;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v128 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v129;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v129 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v129;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v129 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v130;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v130 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v130;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v130 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v131;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v131 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v131;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v131 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v132;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v132 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v132;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v132 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v133;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v133 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v133;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v133 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v134;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v134 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v134;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v134 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v135;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v135 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v135;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v135 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v136;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v136 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v136;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v136 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v137;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v137 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v137;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v137 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v138;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v138 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v138;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v138 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v139;
    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v139 = 0;
    IData/*31:0*/ __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v139;
    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v139 = 0;
    // Body
    __Vdly__tb_fft64__DOT__dut__DOT__state = vlSelfRef.tb_fft64__DOT__dut__DOT__state;
    __VdlySet__tb_fft64__DOT__out_real__v0 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v1 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v2 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v3 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v4 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v5 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v6 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v7 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v8 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v9 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v10 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v11 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v12 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v13 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v14 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v15 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v16 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v17 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v18 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v19 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v20 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v21 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v22 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v23 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v24 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v25 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v26 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v27 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v28 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v29 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v30 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v31 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v32 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v33 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v34 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v35 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v36 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v37 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v38 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v39 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v40 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v41 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v42 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v43 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v44 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v45 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v46 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v47 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v48 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v49 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v50 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v51 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v52 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v53 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v54 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v55 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v56 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v57 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v58 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v59 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v60 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v61 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v62 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v63 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v64 = 0U;
    __VdlySet__tb_fft64__DOT__out_real__v65 = 0U;
    if (vlSelfRef.tb_fft64__DOT__rst) {
        vlSelfRef.tb_fft64__DOT__dut__DOT__load_index = 0U;
    }
    if (vlSelfRef.tb_fft64__DOT__rst) {
        vlSelfRef.tb_fft64__DOT__dut__DOT__n = 0x00000040U;
        __Vdly__tb_fft64__DOT__dut__DOT__state = 0U;
        vlSelfRef.tb_fft64__DOT__done = 0U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0U);
        __VdlySet__tb_fft64__DOT__out_real__v0 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 1U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 1U);
        __VdlySet__tb_fft64__DOT__out_real__v1 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 2U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 2U);
        __VdlySet__tb_fft64__DOT__out_real__v2 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 3U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 3U);
        __VdlySet__tb_fft64__DOT__out_real__v3 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 4U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 4U);
        __VdlySet__tb_fft64__DOT__out_real__v4 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 5U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 5U);
        __VdlySet__tb_fft64__DOT__out_real__v5 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 6U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 6U);
        __VdlySet__tb_fft64__DOT__out_real__v6 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 7U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 7U);
        __VdlySet__tb_fft64__DOT__out_real__v7 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 8U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 8U);
        __VdlySet__tb_fft64__DOT__out_real__v8 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 9U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 9U);
        __VdlySet__tb_fft64__DOT__out_real__v9 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x0aU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x0aU);
        __VdlySet__tb_fft64__DOT__out_real__v10 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x0bU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x0bU);
        __VdlySet__tb_fft64__DOT__out_real__v11 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x0cU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x0cU);
        __VdlySet__tb_fft64__DOT__out_real__v12 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x0dU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x0dU);
        __VdlySet__tb_fft64__DOT__out_real__v13 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x0eU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x0eU);
        __VdlySet__tb_fft64__DOT__out_real__v14 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x0fU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x0fU);
        __VdlySet__tb_fft64__DOT__out_real__v15 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x10U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x10U);
        __VdlySet__tb_fft64__DOT__out_real__v16 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x11U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x11U);
        __VdlySet__tb_fft64__DOT__out_real__v17 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x12U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x12U);
        __VdlySet__tb_fft64__DOT__out_real__v18 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x13U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x13U);
        __VdlySet__tb_fft64__DOT__out_real__v19 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x14U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x14U);
        __VdlySet__tb_fft64__DOT__out_real__v20 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x15U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x15U);
        __VdlySet__tb_fft64__DOT__out_real__v21 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x16U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x16U);
        __VdlySet__tb_fft64__DOT__out_real__v22 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x17U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x17U);
        __VdlySet__tb_fft64__DOT__out_real__v23 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x18U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x18U);
        __VdlySet__tb_fft64__DOT__out_real__v24 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x19U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x19U);
        __VdlySet__tb_fft64__DOT__out_real__v25 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x1aU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x1aU);
        __VdlySet__tb_fft64__DOT__out_real__v26 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x1bU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x1bU);
        __VdlySet__tb_fft64__DOT__out_real__v27 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x1cU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x1cU);
        __VdlySet__tb_fft64__DOT__out_real__v28 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x1dU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x1dU);
        __VdlySet__tb_fft64__DOT__out_real__v29 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x1eU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x1eU);
        __VdlySet__tb_fft64__DOT__out_real__v30 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x1fU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x1fU);
        __VdlySet__tb_fft64__DOT__out_real__v31 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x20U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x20U);
        __VdlySet__tb_fft64__DOT__out_real__v32 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x21U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x21U);
        __VdlySet__tb_fft64__DOT__out_real__v33 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x22U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x22U);
        __VdlySet__tb_fft64__DOT__out_real__v34 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x23U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x23U);
        __VdlySet__tb_fft64__DOT__out_real__v35 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x24U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x24U);
        __VdlySet__tb_fft64__DOT__out_real__v36 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x25U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x25U);
        __VdlySet__tb_fft64__DOT__out_real__v37 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x26U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x26U);
        __VdlySet__tb_fft64__DOT__out_real__v38 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x27U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x27U);
        __VdlySet__tb_fft64__DOT__out_real__v39 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x28U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x28U);
        __VdlySet__tb_fft64__DOT__out_real__v40 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x29U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x29U);
        __VdlySet__tb_fft64__DOT__out_real__v41 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x2aU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x2aU);
        __VdlySet__tb_fft64__DOT__out_real__v42 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x2bU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x2bU);
        __VdlySet__tb_fft64__DOT__out_real__v43 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x2cU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x2cU);
        __VdlySet__tb_fft64__DOT__out_real__v44 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x2dU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x2dU);
        __VdlySet__tb_fft64__DOT__out_real__v45 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x2eU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x2eU);
        __VdlySet__tb_fft64__DOT__out_real__v46 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x2fU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x2fU);
        __VdlySet__tb_fft64__DOT__out_real__v47 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x30U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x30U);
        __VdlySet__tb_fft64__DOT__out_real__v48 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x31U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x31U);
        __VdlySet__tb_fft64__DOT__out_real__v49 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x32U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x32U);
        __VdlySet__tb_fft64__DOT__out_real__v50 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x33U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x33U);
        __VdlySet__tb_fft64__DOT__out_real__v51 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x34U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x34U);
        __VdlySet__tb_fft64__DOT__out_real__v52 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x35U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x35U);
        __VdlySet__tb_fft64__DOT__out_real__v53 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x36U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x36U);
        __VdlySet__tb_fft64__DOT__out_real__v54 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x37U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x37U);
        __VdlySet__tb_fft64__DOT__out_real__v55 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x38U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x38U);
        __VdlySet__tb_fft64__DOT__out_real__v56 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x39U);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x39U);
        __VdlySet__tb_fft64__DOT__out_real__v57 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x3aU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x3aU);
        __VdlySet__tb_fft64__DOT__out_real__v58 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x3bU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x3bU);
        __VdlySet__tb_fft64__DOT__out_real__v59 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x3cU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x3cU);
        __VdlySet__tb_fft64__DOT__out_real__v60 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x3dU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x3dU);
        __VdlySet__tb_fft64__DOT__out_real__v61 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x3eU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x3eU);
        __VdlySet__tb_fft64__DOT__out_real__v62 = 1U;
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(0U, 0x3fU);
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(0U, 0x3fU);
        __VdlySet__tb_fft64__DOT__out_real__v63 = 1U;
    } else if ((8U & (IData)(vlSelfRef.tb_fft64__DOT__dut__DOT__state))) {
        if ((4U & (IData)(vlSelfRef.tb_fft64__DOT__dut__DOT__state))) {
            __Vdly__tb_fft64__DOT__dut__DOT__state = 0U;
            vlSelfRef.tb_fft64__DOT__done = 0U;
        } else if ((2U & (IData)(vlSelfRef.tb_fft64__DOT__dut__DOT__state))) {
            __Vdly__tb_fft64__DOT__dut__DOT__state = 0U;
            vlSelfRef.tb_fft64__DOT__done = 0U;
        } else if ((1U & (IData)(vlSelfRef.tb_fft64__DOT__dut__DOT__state))) {
            vlSelfRef.tb_fft64__DOT__done = 1U;
            __Vdly__tb_fft64__DOT__dut__DOT__state = 0U;
        } else {
            vlSelfRef.tb_fft64__DOT__dut__DOT__n = 0x00000040U;
            __VdlyVal__tb_fft64__DOT__out_real__v64 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[0U];
            __VdlySet__tb_fft64__DOT__out_real__v64 = 1U;
            __VdlyVal__tb_fft64__DOT__out_imag__v64 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[0U];
            __Vdly__tb_fft64__DOT__dut__DOT__state = 9U;
            __VdlyVal__tb_fft64__DOT__out_real__v65 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[1U];
            __VdlySet__tb_fft64__DOT__out_real__v65 = 1U;
            __VdlyVal__tb_fft64__DOT__out_imag__v65 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[1U];
            __VdlyVal__tb_fft64__DOT__out_real__v66 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[2U];
            __VdlyVal__tb_fft64__DOT__out_imag__v66 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[2U];
            __VdlyVal__tb_fft64__DOT__out_real__v67 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[3U];
            __VdlyVal__tb_fft64__DOT__out_imag__v67 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[3U];
            __VdlyVal__tb_fft64__DOT__out_real__v68 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[4U];
            __VdlyVal__tb_fft64__DOT__out_imag__v68 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[4U];
            __VdlyVal__tb_fft64__DOT__out_real__v69 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[5U];
            __VdlyVal__tb_fft64__DOT__out_imag__v69 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[5U];
            __VdlyVal__tb_fft64__DOT__out_real__v70 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[6U];
            __VdlyVal__tb_fft64__DOT__out_imag__v70 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[6U];
            __VdlyVal__tb_fft64__DOT__out_real__v71 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[7U];
            __VdlyVal__tb_fft64__DOT__out_imag__v71 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[7U];
            __VdlyVal__tb_fft64__DOT__out_real__v72 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[8U];
            __VdlyVal__tb_fft64__DOT__out_imag__v72 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[8U];
            __VdlyVal__tb_fft64__DOT__out_real__v73 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[9U];
            __VdlyVal__tb_fft64__DOT__out_imag__v73 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[9U];
            __VdlyVal__tb_fft64__DOT__out_real__v74 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[10U];
            __VdlyVal__tb_fft64__DOT__out_imag__v74 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[10U];
            __VdlyVal__tb_fft64__DOT__out_real__v75 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[11U];
            __VdlyVal__tb_fft64__DOT__out_imag__v75 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[11U];
            __VdlyVal__tb_fft64__DOT__out_real__v76 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[12U];
            __VdlyVal__tb_fft64__DOT__out_imag__v76 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[12U];
            __VdlyVal__tb_fft64__DOT__out_real__v77 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[13U];
            __VdlyVal__tb_fft64__DOT__out_imag__v77 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[13U];
            __VdlyVal__tb_fft64__DOT__out_real__v78 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[14U];
            __VdlyVal__tb_fft64__DOT__out_imag__v78 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[14U];
            __VdlyVal__tb_fft64__DOT__out_real__v79 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[15U];
            __VdlyVal__tb_fft64__DOT__out_imag__v79 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[15U];
            __VdlyVal__tb_fft64__DOT__out_real__v80 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[16U];
            __VdlyVal__tb_fft64__DOT__out_imag__v80 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[16U];
            __VdlyVal__tb_fft64__DOT__out_real__v81 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[17U];
            __VdlyVal__tb_fft64__DOT__out_imag__v81 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[17U];
            __VdlyVal__tb_fft64__DOT__out_real__v82 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[18U];
            __VdlyVal__tb_fft64__DOT__out_imag__v82 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[18U];
            __VdlyVal__tb_fft64__DOT__out_real__v83 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[19U];
            __VdlyVal__tb_fft64__DOT__out_imag__v83 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[19U];
            __VdlyVal__tb_fft64__DOT__out_real__v84 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[20U];
            __VdlyVal__tb_fft64__DOT__out_imag__v84 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[20U];
            __VdlyVal__tb_fft64__DOT__out_real__v85 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[21U];
            __VdlyVal__tb_fft64__DOT__out_imag__v85 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[21U];
            __VdlyVal__tb_fft64__DOT__out_real__v86 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[22U];
            __VdlyVal__tb_fft64__DOT__out_imag__v86 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[22U];
            __VdlyVal__tb_fft64__DOT__out_real__v87 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[23U];
            __VdlyVal__tb_fft64__DOT__out_imag__v87 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[23U];
            __VdlyVal__tb_fft64__DOT__out_real__v88 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[24U];
            __VdlyVal__tb_fft64__DOT__out_imag__v88 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[24U];
            __VdlyVal__tb_fft64__DOT__out_real__v89 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[25U];
            __VdlyVal__tb_fft64__DOT__out_imag__v89 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[25U];
            __VdlyVal__tb_fft64__DOT__out_real__v90 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[26U];
            __VdlyVal__tb_fft64__DOT__out_imag__v90 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[26U];
            __VdlyVal__tb_fft64__DOT__out_real__v91 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[27U];
            __VdlyVal__tb_fft64__DOT__out_imag__v91 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[27U];
            __VdlyVal__tb_fft64__DOT__out_real__v92 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[28U];
            __VdlyVal__tb_fft64__DOT__out_imag__v92 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[28U];
            __VdlyVal__tb_fft64__DOT__out_real__v93 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[29U];
            __VdlyVal__tb_fft64__DOT__out_imag__v93 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[29U];
            __VdlyVal__tb_fft64__DOT__out_real__v94 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[30U];
            __VdlyVal__tb_fft64__DOT__out_imag__v94 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[30U];
            __VdlyVal__tb_fft64__DOT__out_real__v95 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[31U];
            __VdlyVal__tb_fft64__DOT__out_imag__v95 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[31U];
            __VdlyVal__tb_fft64__DOT__out_real__v96 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[32U];
            __VdlyVal__tb_fft64__DOT__out_imag__v96 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[32U];
            __VdlyVal__tb_fft64__DOT__out_real__v97 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[33U];
            __VdlyVal__tb_fft64__DOT__out_imag__v97 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[33U];
            __VdlyVal__tb_fft64__DOT__out_real__v98 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[34U];
            __VdlyVal__tb_fft64__DOT__out_imag__v98 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[34U];
            __VdlyVal__tb_fft64__DOT__out_real__v99 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[35U];
            __VdlyVal__tb_fft64__DOT__out_imag__v99 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[35U];
            __VdlyVal__tb_fft64__DOT__out_real__v100 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[36U];
            __VdlyVal__tb_fft64__DOT__out_imag__v100 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[36U];
            __VdlyVal__tb_fft64__DOT__out_real__v101 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[37U];
            __VdlyVal__tb_fft64__DOT__out_imag__v101 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[37U];
            __VdlyVal__tb_fft64__DOT__out_real__v102 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[38U];
            __VdlyVal__tb_fft64__DOT__out_imag__v102 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[38U];
            __VdlyVal__tb_fft64__DOT__out_real__v103 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[39U];
            __VdlyVal__tb_fft64__DOT__out_imag__v103 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[39U];
            __VdlyVal__tb_fft64__DOT__out_real__v104 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[40U];
            __VdlyVal__tb_fft64__DOT__out_imag__v104 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[40U];
            __VdlyVal__tb_fft64__DOT__out_real__v105 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[41U];
            __VdlyVal__tb_fft64__DOT__out_imag__v105 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[41U];
            __VdlyVal__tb_fft64__DOT__out_real__v106 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[42U];
            __VdlyVal__tb_fft64__DOT__out_imag__v106 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[42U];
            __VdlyVal__tb_fft64__DOT__out_real__v107 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[43U];
            __VdlyVal__tb_fft64__DOT__out_imag__v107 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[43U];
            __VdlyVal__tb_fft64__DOT__out_real__v108 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[44U];
            __VdlyVal__tb_fft64__DOT__out_imag__v108 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[44U];
            __VdlyVal__tb_fft64__DOT__out_real__v109 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[45U];
            __VdlyVal__tb_fft64__DOT__out_imag__v109 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[45U];
            __VdlyVal__tb_fft64__DOT__out_real__v110 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[46U];
            __VdlyVal__tb_fft64__DOT__out_imag__v110 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[46U];
            __VdlyVal__tb_fft64__DOT__out_real__v111 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[47U];
            __VdlyVal__tb_fft64__DOT__out_imag__v111 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[47U];
            __VdlyVal__tb_fft64__DOT__out_real__v112 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[48U];
            __VdlyVal__tb_fft64__DOT__out_imag__v112 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[48U];
            __VdlyVal__tb_fft64__DOT__out_real__v113 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[49U];
            __VdlyVal__tb_fft64__DOT__out_imag__v113 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[49U];
            __VdlyVal__tb_fft64__DOT__out_real__v114 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[50U];
            __VdlyVal__tb_fft64__DOT__out_imag__v114 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[50U];
            __VdlyVal__tb_fft64__DOT__out_real__v115 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[51U];
            __VdlyVal__tb_fft64__DOT__out_imag__v115 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[51U];
            __VdlyVal__tb_fft64__DOT__out_real__v116 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[52U];
            __VdlyVal__tb_fft64__DOT__out_imag__v116 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[52U];
            __VdlyVal__tb_fft64__DOT__out_real__v117 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[53U];
            __VdlyVal__tb_fft64__DOT__out_imag__v117 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[53U];
            __VdlyVal__tb_fft64__DOT__out_real__v118 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[54U];
            __VdlyVal__tb_fft64__DOT__out_imag__v118 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[54U];
            __VdlyVal__tb_fft64__DOT__out_real__v119 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[55U];
            __VdlyVal__tb_fft64__DOT__out_imag__v119 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[55U];
            __VdlyVal__tb_fft64__DOT__out_real__v120 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[56U];
            __VdlyVal__tb_fft64__DOT__out_imag__v120 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[56U];
            __VdlyVal__tb_fft64__DOT__out_real__v121 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[57U];
            __VdlyVal__tb_fft64__DOT__out_imag__v121 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[57U];
            __VdlyVal__tb_fft64__DOT__out_real__v122 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[58U];
            __VdlyVal__tb_fft64__DOT__out_imag__v122 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[58U];
            __VdlyVal__tb_fft64__DOT__out_real__v123 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[59U];
            __VdlyVal__tb_fft64__DOT__out_imag__v123 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[59U];
            __VdlyVal__tb_fft64__DOT__out_real__v124 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[60U];
            __VdlyVal__tb_fft64__DOT__out_imag__v124 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[60U];
            __VdlyVal__tb_fft64__DOT__out_real__v125 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[61U];
            __VdlyVal__tb_fft64__DOT__out_imag__v125 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[61U];
            __VdlyVal__tb_fft64__DOT__out_real__v126 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[62U];
            __VdlyVal__tb_fft64__DOT__out_imag__v126 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[62U];
            __VdlyVal__tb_fft64__DOT__out_real__v127 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem[63U];
            __VdlyVal__tb_fft64__DOT__out_imag__v127 
                = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem[63U];
        }
    } else if ((4U & (IData)(vlSelfRef.tb_fft64__DOT__dut__DOT__state))) {
        if ((2U & (IData)(vlSelfRef.tb_fft64__DOT__dut__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.tb_fft64__DOT__dut__DOT__state))) {
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__k = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i0 = 0;
                __Vdly__tb_fft64__DOT__dut__DOT__state = 8U;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i1 = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__tw_idx = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__ar = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__ai = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__br = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__bi = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__wr = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__wi = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_rr = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ii = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ri = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ir = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__temp_real = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__temp_imag = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__vr = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__vi = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__sum_real = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__sum_imag = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__diff_real = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__diff_imag = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__half_size = 0x00000020U;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__step_size = 0x00000040U;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__tw_step = 1U;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__group = 0U;
                while (VL_LTS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__group, 
                                  VL_DIVS_III(32, (IData)(0x00000040U), __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__step_size))) {
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__k = 0U;
                    while (VL_LTS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__k, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__half_size)) {
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i0 
                            = (VL_MULS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__group, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__step_size) 
                               + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__k);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i1 
                            = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i0 
                               + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__half_size);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__tw_idx 
                            = VL_MULS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__k, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__tw_step);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__ar 
                            = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem
                            [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i0)];
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__ai 
                            = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem
                            [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i0)];
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__br 
                            = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem
                            [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i1)];
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__bi 
                            = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem
                            [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i1)];
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__wr 
                            = vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real
                            [(0x0000001fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__tw_idx)];
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__wi 
                            = vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag
                            [(0x0000001fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__tw_idx)];
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_rr 
                            = (0x0000ffffffffffffULL 
                               & VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__br)), 
                                             (0x0000ffffffffffffULL 
                                              & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__wr)))));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ii 
                            = (0x0000ffffffffffffULL 
                               & VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__bi)), 
                                             (0x0000ffffffffffffULL 
                                              & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__wi)))));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ri 
                            = (0x0000ffffffffffffULL 
                               & VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__br)), 
                                             (0x0000ffffffffffffULL 
                                              & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__wi)))));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ir 
                            = (0x0000ffffffffffffULL 
                               & VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__bi)), 
                                             (0x0000ffffffffffffULL 
                                              & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__wr)))));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__temp_real 
                            = (0x0000ffffffffffffULL 
                               & VL_SHIFTRS_QQI(48,48,32, 
                                                (0x0000ffffffffffffULL 
                                                 & (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_rr 
                                                    - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ii)), 0x0000000fU));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__temp_imag 
                            = (0x0000ffffffffffffULL 
                               & VL_SHIFTRS_QQI(48,48,32, 
                                                (0x0000ffffffffffffULL 
                                                 & (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ri 
                                                    + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__p_ir)), 0x0000000fU));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__vr 
                            = (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__temp_real);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__vi 
                            = (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__temp_imag);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__sum_real 
                            = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__ar 
                               + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__vr);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__sum_imag 
                            = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__ai 
                               + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__vi);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__diff_real 
                            = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__ar 
                               - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__vr);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__diff_imag 
                            = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__ai 
                               - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__vi);
                        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v64 
                            = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__sum_real;
                        __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v64 
                            = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i0);
                        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v64, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v64));
                        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v64 
                            = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__sum_imag;
                        __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v64 
                            = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i0);
                        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v64, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v64));
                        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v65 
                            = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__diff_real;
                        __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v65 
                            = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i1);
                        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v65, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v65));
                        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v65 
                            = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__diff_imag;
                        __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v65 
                            = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__i1);
                        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v65, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v65));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__k 
                            = ((IData)(1U) + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__k);
                    }
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__group 
                        = ((IData)(1U) + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__0__group);
                }
            } else {
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__k = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i0 = 0;
                __Vdly__tb_fft64__DOT__dut__DOT__state = 7U;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i1 = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__tw_idx = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__ar = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__ai = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__br = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__bi = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__wr = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__wi = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_rr = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ii = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ri = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ir = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__temp_real = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__temp_imag = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__vr = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__vi = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__sum_real = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__sum_imag = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__diff_real = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__diff_imag = 0;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__half_size = 0x00000010U;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__step_size = 0x00000020U;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__tw_step = 2U;
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__group = 0U;
                while (VL_LTS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__group, 
                                  VL_DIVS_III(32, (IData)(0x00000040U), __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__step_size))) {
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__k = 0U;
                    while (VL_LTS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__k, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__half_size)) {
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i0 
                            = (VL_MULS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__group, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__step_size) 
                               + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__k);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i1 
                            = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i0 
                               + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__half_size);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__tw_idx 
                            = VL_MULS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__k, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__tw_step);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__ar 
                            = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem
                            [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i0)];
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__ai 
                            = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem
                            [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i0)];
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__br 
                            = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem
                            [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i1)];
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__bi 
                            = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem
                            [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i1)];
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__wr 
                            = vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real
                            [(0x0000001fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__tw_idx)];
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__wi 
                            = vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag
                            [(0x0000001fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__tw_idx)];
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_rr 
                            = (0x0000ffffffffffffULL 
                               & VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__br)), 
                                             (0x0000ffffffffffffULL 
                                              & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__wr)))));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ii 
                            = (0x0000ffffffffffffULL 
                               & VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__bi)), 
                                             (0x0000ffffffffffffULL 
                                              & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__wi)))));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ri 
                            = (0x0000ffffffffffffULL 
                               & VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__br)), 
                                             (0x0000ffffffffffffULL 
                                              & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__wi)))));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ir 
                            = (0x0000ffffffffffffULL 
                               & VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                                  & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__bi)), 
                                             (0x0000ffffffffffffULL 
                                              & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__wr)))));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__temp_real 
                            = (0x0000ffffffffffffULL 
                               & VL_SHIFTRS_QQI(48,48,32, 
                                                (0x0000ffffffffffffULL 
                                                 & (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_rr 
                                                    - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ii)), 0x0000000fU));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__temp_imag 
                            = (0x0000ffffffffffffULL 
                               & VL_SHIFTRS_QQI(48,48,32, 
                                                (0x0000ffffffffffffULL 
                                                 & (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ri 
                                                    + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__p_ir)), 0x0000000fU));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__vr 
                            = (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__temp_real);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__vi 
                            = (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__temp_imag);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__sum_real 
                            = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__ar 
                               + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__vr);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__sum_imag 
                            = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__ai 
                               + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__vi);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__diff_real 
                            = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__ar 
                               - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__vr);
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__diff_imag 
                            = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__ai 
                               - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__vi);
                        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v66 
                            = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__sum_real;
                        __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v66 
                            = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i0);
                        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v66, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v66));
                        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v66 
                            = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__sum_imag;
                        __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v66 
                            = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i0);
                        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v66, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v66));
                        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v67 
                            = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__diff_real;
                        __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v67 
                            = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i1);
                        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v67, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v67));
                        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v67 
                            = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__diff_imag;
                        __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v67 
                            = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__i1);
                        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v67, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v67));
                        __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__k 
                            = ((IData)(1U) + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__k);
                    }
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__group 
                        = ((IData)(1U) + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__1__group);
                }
            }
        } else if ((1U & (IData)(vlSelfRef.tb_fft64__DOT__dut__DOT__state))) {
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__k = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i0 = 0;
            __Vdly__tb_fft64__DOT__dut__DOT__state = 6U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i1 = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__tw_idx = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__ar = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__ai = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__br = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__bi = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__wr = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__wi = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_rr = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ii = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ri = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ir = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__temp_real = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__temp_imag = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__vr = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__vi = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__sum_real = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__sum_imag = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__diff_real = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__diff_imag = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__half_size = 8U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__step_size = 0x00000010U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__tw_step = 4U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__group = 0U;
            while (VL_LTS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__group, 
                              VL_DIVS_III(32, (IData)(0x00000040U), __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__step_size))) {
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__k = 0U;
                while (VL_LTS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__k, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__half_size)) {
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i0 
                        = (VL_MULS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__group, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__step_size) 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__k);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i1 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i0 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__half_size);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__tw_idx 
                        = VL_MULS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__k, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__tw_step);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__ar 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i0)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__ai 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i0)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__br 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i1)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__bi 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i1)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__wr 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real
                        [(0x0000001fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__tw_idx)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__wi 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag
                        [(0x0000001fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__tw_idx)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_rr 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__br)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__wr)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ii 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__bi)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__wi)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ri 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__br)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__wi)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ir 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__bi)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__wr)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__temp_real 
                        = (0x0000ffffffffffffULL & 
                           VL_SHIFTRS_QQI(48,48,32, 
                                          (0x0000ffffffffffffULL 
                                           & (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_rr 
                                              - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ii)), 0x0000000fU));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__temp_imag 
                        = (0x0000ffffffffffffULL & 
                           VL_SHIFTRS_QQI(48,48,32, 
                                          (0x0000ffffffffffffULL 
                                           & (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ri 
                                              + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__p_ir)), 0x0000000fU));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__vr 
                        = (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__temp_real);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__vi 
                        = (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__temp_imag);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__sum_real 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__ar 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__vr);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__sum_imag 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__ai 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__vi);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__diff_real 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__ar 
                           - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__vr);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__diff_imag 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__ai 
                           - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__vi);
                    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v68 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__sum_real;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v68 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i0);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v68, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v68));
                    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v68 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__sum_imag;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v68 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i0);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v68, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v68));
                    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v69 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__diff_real;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v69 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i1);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v69, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v69));
                    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v69 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__diff_imag;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v69 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__i1);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v69, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v69));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__k 
                        = ((IData)(1U) + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__k);
                }
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__group 
                    = ((IData)(1U) + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__2__group);
            }
        } else {
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__k = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i0 = 0;
            __Vdly__tb_fft64__DOT__dut__DOT__state = 5U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i1 = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__tw_idx = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__ar = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__ai = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__br = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__bi = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__wr = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__wi = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_rr = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ii = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ri = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ir = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__temp_real = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__temp_imag = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__vr = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__vi = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__sum_real = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__sum_imag = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__diff_real = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__diff_imag = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__half_size = 4U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__step_size = 8U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__tw_step = 8U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__group = 0U;
            while (VL_LTS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__group, 
                              VL_DIVS_III(32, (IData)(0x00000040U), __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__step_size))) {
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__k = 0U;
                while (VL_LTS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__k, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__half_size)) {
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i0 
                        = (VL_MULS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__group, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__step_size) 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__k);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i1 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i0 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__half_size);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__tw_idx 
                        = VL_MULS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__k, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__tw_step);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__ar 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i0)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__ai 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i0)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__br 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i1)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__bi 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i1)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__wr 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real
                        [(0x0000001fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__tw_idx)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__wi 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag
                        [(0x0000001fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__tw_idx)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_rr 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__br)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__wr)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ii 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__bi)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__wi)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ri 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__br)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__wi)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ir 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__bi)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__wr)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__temp_real 
                        = (0x0000ffffffffffffULL & 
                           VL_SHIFTRS_QQI(48,48,32, 
                                          (0x0000ffffffffffffULL 
                                           & (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_rr 
                                              - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ii)), 0x0000000fU));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__temp_imag 
                        = (0x0000ffffffffffffULL & 
                           VL_SHIFTRS_QQI(48,48,32, 
                                          (0x0000ffffffffffffULL 
                                           & (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ri 
                                              + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__p_ir)), 0x0000000fU));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__vr 
                        = (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__temp_real);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__vi 
                        = (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__temp_imag);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__sum_real 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__ar 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__vr);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__sum_imag 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__ai 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__vi);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__diff_real 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__ar 
                           - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__vr);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__diff_imag 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__ai 
                           - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__vi);
                    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v70 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__sum_real;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v70 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i0);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v70, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v70));
                    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v70 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__sum_imag;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v70 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i0);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v70, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v70));
                    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v71 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__diff_real;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v71 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i1);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v71, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v71));
                    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v71 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__diff_imag;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v71 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__i1);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v71, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v71));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__k 
                        = ((IData)(1U) + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__k);
                }
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__group 
                    = ((IData)(1U) + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__3__group);
            }
        }
    } else if ((2U & (IData)(vlSelfRef.tb_fft64__DOT__dut__DOT__state))) {
        if ((1U & (IData)(vlSelfRef.tb_fft64__DOT__dut__DOT__state))) {
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__k = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i0 = 0;
            __Vdly__tb_fft64__DOT__dut__DOT__state = 4U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i1 = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__tw_idx = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__ar = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__ai = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__br = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__bi = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__wr = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__wi = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_rr = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ii = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ri = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ir = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__temp_real = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__temp_imag = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__vr = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__vi = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__sum_real = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__sum_imag = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__diff_real = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__diff_imag = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__half_size = 2U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__step_size = 4U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__tw_step = 0x00000010U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__group = 0U;
            while (VL_LTS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__group, 
                              VL_DIVS_III(32, (IData)(0x00000040U), __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__step_size))) {
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__k = 0U;
                while (VL_LTS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__k, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__half_size)) {
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i0 
                        = (VL_MULS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__group, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__step_size) 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__k);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i1 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i0 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__half_size);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__tw_idx 
                        = VL_MULS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__k, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__tw_step);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__ar 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i0)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__ai 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i0)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__br 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i1)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__bi 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i1)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__wr 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real
                        [(0x0000001fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__tw_idx)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__wi 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag
                        [(0x0000001fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__tw_idx)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_rr 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__br)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__wr)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ii 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__bi)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__wi)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ri 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__br)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__wi)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ir 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__bi)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__wr)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__temp_real 
                        = (0x0000ffffffffffffULL & 
                           VL_SHIFTRS_QQI(48,48,32, 
                                          (0x0000ffffffffffffULL 
                                           & (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_rr 
                                              - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ii)), 0x0000000fU));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__temp_imag 
                        = (0x0000ffffffffffffULL & 
                           VL_SHIFTRS_QQI(48,48,32, 
                                          (0x0000ffffffffffffULL 
                                           & (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ri 
                                              + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__p_ir)), 0x0000000fU));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__vr 
                        = (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__temp_real);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__vi 
                        = (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__temp_imag);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__sum_real 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__ar 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__vr);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__sum_imag 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__ai 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__vi);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__diff_real 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__ar 
                           - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__vr);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__diff_imag 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__ai 
                           - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__vi);
                    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v72 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__sum_real;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v72 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i0);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v72, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v72));
                    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v72 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__sum_imag;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v72 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i0);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v72, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v72));
                    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v73 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__diff_real;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v73 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i1);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v73, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v73));
                    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v73 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__diff_imag;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v73 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__i1);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v73, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v73));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__k 
                        = ((IData)(1U) + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__k);
                }
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__group 
                    = ((IData)(1U) + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__4__group);
            }
        } else {
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__k = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i0 = 0;
            __Vdly__tb_fft64__DOT__dut__DOT__state = 3U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i1 = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__tw_idx = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__ar = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__ai = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__br = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__bi = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__wr = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__wi = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_rr = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ii = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ri = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ir = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__temp_real = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__temp_imag = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__vr = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__vi = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__sum_real = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__sum_imag = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__diff_real = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__diff_imag = 0;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__half_size = 1U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__step_size = 2U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__tw_step = 0x00000020U;
            __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__group = 0U;
            while (VL_LTS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__group, 
                              VL_DIVS_III(32, (IData)(0x00000040U), __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__step_size))) {
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__k = 0U;
                while (VL_LTS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__k, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__half_size)) {
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i0 
                        = (VL_MULS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__group, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__step_size) 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__k);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i1 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i0 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__half_size);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__tw_idx 
                        = VL_MULS_III(32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__k, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__tw_step);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__ar 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i0)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__ai 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i0)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__br 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i1)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__bi 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem
                        [(0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i1)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__wr 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real
                        [(0x0000001fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__tw_idx)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__wi 
                        = vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag
                        [(0x0000001fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__tw_idx)];
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_rr 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__br)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__wr)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ii 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__bi)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__wi)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ri 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__br)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__wi)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ir 
                        = (0x0000ffffffffffffULL & 
                           VL_MULS_QQQ(48, (0x0000ffffffffffffULL 
                                            & VL_EXTENDS_QI(48,32, __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__bi)), 
                                       (0x0000ffffffffffffULL 
                                        & VL_EXTENDS_QI(48,16, (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__wr)))));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__temp_real 
                        = (0x0000ffffffffffffULL & 
                           VL_SHIFTRS_QQI(48,48,32, 
                                          (0x0000ffffffffffffULL 
                                           & (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_rr 
                                              - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ii)), 0x0000000fU));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__temp_imag 
                        = (0x0000ffffffffffffULL & 
                           VL_SHIFTRS_QQI(48,48,32, 
                                          (0x0000ffffffffffffULL 
                                           & (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ri 
                                              + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__p_ir)), 0x0000000fU));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__vr 
                        = (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__temp_real);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__vi 
                        = (IData)(__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__temp_imag);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__sum_real 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__ar 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__vr);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__sum_imag 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__ai 
                           + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__vi);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__diff_real 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__ar 
                           - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__vr);
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__diff_imag 
                        = (__Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__ai 
                           - __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__vi);
                    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v74 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__sum_real;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v74 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i0);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v74, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v74));
                    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v74 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__sum_imag;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v74 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i0);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v74, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v74));
                    __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v75 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__diff_real;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v75 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i1);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v75, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__real_mem__v75));
                    __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v75 
                        = __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__diff_imag;
                    __VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v75 
                        = (0x0000003fU & __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__i1);
                    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v75, (IData)(__VdlyDim0__tb_fft64__DOT__dut__DOT__imag_mem__v75));
                    __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__k 
                        = ((IData)(1U) + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__k);
                }
                __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__group 
                    = ((IData)(1U) + __Vtask_tb_fft64__DOT__dut__DOT__do_stage__5__group);
            }
        }
    } else if ((1U & (IData)(vlSelfRef.tb_fft64__DOT__dut__DOT__state))) {
        vlSelfRef.tb_fft64__DOT__dut__DOT__n = 0x00000040U;
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v76 
            = vlSelfRef.tb_fft64__DOT__in_real[0U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v76, 0U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v76 
            = vlSelfRef.tb_fft64__DOT__in_imag[0U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v76, 0U);
        __Vdly__tb_fft64__DOT__dut__DOT__state = 2U;
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v77 
            = vlSelfRef.tb_fft64__DOT__in_real[1U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v77, 0x20U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v77 
            = vlSelfRef.tb_fft64__DOT__in_imag[1U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v77, 0x20U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v78 
            = vlSelfRef.tb_fft64__DOT__in_real[2U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v78, 0x10U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v78 
            = vlSelfRef.tb_fft64__DOT__in_imag[2U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v78, 0x10U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v79 
            = vlSelfRef.tb_fft64__DOT__in_real[3U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v79, 0x30U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v79 
            = vlSelfRef.tb_fft64__DOT__in_imag[3U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v79, 0x30U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v80 
            = vlSelfRef.tb_fft64__DOT__in_real[4U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v80, 8U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v80 
            = vlSelfRef.tb_fft64__DOT__in_imag[4U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v80, 8U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v81 
            = vlSelfRef.tb_fft64__DOT__in_real[5U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v81, 0x28U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v81 
            = vlSelfRef.tb_fft64__DOT__in_imag[5U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v81, 0x28U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v82 
            = vlSelfRef.tb_fft64__DOT__in_real[6U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v82, 0x18U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v82 
            = vlSelfRef.tb_fft64__DOT__in_imag[6U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v82, 0x18U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v83 
            = vlSelfRef.tb_fft64__DOT__in_real[7U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v83, 0x38U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v83 
            = vlSelfRef.tb_fft64__DOT__in_imag[7U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v83, 0x38U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v84 
            = vlSelfRef.tb_fft64__DOT__in_real[8U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v84, 4U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v84 
            = vlSelfRef.tb_fft64__DOT__in_imag[8U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v84, 4U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v85 
            = vlSelfRef.tb_fft64__DOT__in_real[9U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v85, 0x24U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v85 
            = vlSelfRef.tb_fft64__DOT__in_imag[9U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v85, 0x24U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v86 
            = vlSelfRef.tb_fft64__DOT__in_real[10U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v86, 0x14U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v86 
            = vlSelfRef.tb_fft64__DOT__in_imag[10U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v86, 0x14U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v87 
            = vlSelfRef.tb_fft64__DOT__in_real[11U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v87, 0x34U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v87 
            = vlSelfRef.tb_fft64__DOT__in_imag[11U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v87, 0x34U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v88 
            = vlSelfRef.tb_fft64__DOT__in_real[12U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v88, 0x0cU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v88 
            = vlSelfRef.tb_fft64__DOT__in_imag[12U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v88, 0x0cU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v89 
            = vlSelfRef.tb_fft64__DOT__in_real[13U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v89, 0x2cU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v89 
            = vlSelfRef.tb_fft64__DOT__in_imag[13U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v89, 0x2cU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v90 
            = vlSelfRef.tb_fft64__DOT__in_real[14U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v90, 0x1cU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v90 
            = vlSelfRef.tb_fft64__DOT__in_imag[14U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v90, 0x1cU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v91 
            = vlSelfRef.tb_fft64__DOT__in_real[15U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v91, 0x3cU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v91 
            = vlSelfRef.tb_fft64__DOT__in_imag[15U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v91, 0x3cU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v92 
            = vlSelfRef.tb_fft64__DOT__in_real[16U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v92, 2U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v92 
            = vlSelfRef.tb_fft64__DOT__in_imag[16U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v92, 2U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v93 
            = vlSelfRef.tb_fft64__DOT__in_real[17U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v93, 0x22U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v93 
            = vlSelfRef.tb_fft64__DOT__in_imag[17U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v93, 0x22U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v94 
            = vlSelfRef.tb_fft64__DOT__in_real[18U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v94, 0x12U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v94 
            = vlSelfRef.tb_fft64__DOT__in_imag[18U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v94, 0x12U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v95 
            = vlSelfRef.tb_fft64__DOT__in_real[19U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v95, 0x32U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v95 
            = vlSelfRef.tb_fft64__DOT__in_imag[19U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v95, 0x32U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v96 
            = vlSelfRef.tb_fft64__DOT__in_real[20U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v96, 0x0aU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v96 
            = vlSelfRef.tb_fft64__DOT__in_imag[20U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v96, 0x0aU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v97 
            = vlSelfRef.tb_fft64__DOT__in_real[21U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v97, 0x2aU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v97 
            = vlSelfRef.tb_fft64__DOT__in_imag[21U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v97, 0x2aU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v98 
            = vlSelfRef.tb_fft64__DOT__in_real[22U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v98, 0x1aU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v98 
            = vlSelfRef.tb_fft64__DOT__in_imag[22U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v98, 0x1aU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v99 
            = vlSelfRef.tb_fft64__DOT__in_real[23U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v99, 0x3aU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v99 
            = vlSelfRef.tb_fft64__DOT__in_imag[23U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v99, 0x3aU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v100 
            = vlSelfRef.tb_fft64__DOT__in_real[24U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v100, 6U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v100 
            = vlSelfRef.tb_fft64__DOT__in_imag[24U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v100, 6U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v101 
            = vlSelfRef.tb_fft64__DOT__in_real[25U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v101, 0x26U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v101 
            = vlSelfRef.tb_fft64__DOT__in_imag[25U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v101, 0x26U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v102 
            = vlSelfRef.tb_fft64__DOT__in_real[26U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v102, 0x16U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v102 
            = vlSelfRef.tb_fft64__DOT__in_imag[26U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v102, 0x16U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v103 
            = vlSelfRef.tb_fft64__DOT__in_real[27U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v103, 0x36U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v103 
            = vlSelfRef.tb_fft64__DOT__in_imag[27U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v103, 0x36U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v104 
            = vlSelfRef.tb_fft64__DOT__in_real[28U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v104, 0x0eU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v104 
            = vlSelfRef.tb_fft64__DOT__in_imag[28U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v104, 0x0eU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v105 
            = vlSelfRef.tb_fft64__DOT__in_real[29U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v105, 0x2eU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v105 
            = vlSelfRef.tb_fft64__DOT__in_imag[29U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v105, 0x2eU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v106 
            = vlSelfRef.tb_fft64__DOT__in_real[30U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v106, 0x1eU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v106 
            = vlSelfRef.tb_fft64__DOT__in_imag[30U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v106, 0x1eU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v107 
            = vlSelfRef.tb_fft64__DOT__in_real[31U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v107, 0x3eU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v107 
            = vlSelfRef.tb_fft64__DOT__in_imag[31U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v107, 0x3eU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v108 
            = vlSelfRef.tb_fft64__DOT__in_real[32U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v108, 1U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v108 
            = vlSelfRef.tb_fft64__DOT__in_imag[32U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v108, 1U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v109 
            = vlSelfRef.tb_fft64__DOT__in_real[33U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v109, 0x21U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v109 
            = vlSelfRef.tb_fft64__DOT__in_imag[33U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v109, 0x21U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v110 
            = vlSelfRef.tb_fft64__DOT__in_real[34U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v110, 0x11U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v110 
            = vlSelfRef.tb_fft64__DOT__in_imag[34U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v110, 0x11U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v111 
            = vlSelfRef.tb_fft64__DOT__in_real[35U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v111, 0x31U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v111 
            = vlSelfRef.tb_fft64__DOT__in_imag[35U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v111, 0x31U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v112 
            = vlSelfRef.tb_fft64__DOT__in_real[36U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v112, 9U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v112 
            = vlSelfRef.tb_fft64__DOT__in_imag[36U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v112, 9U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v113 
            = vlSelfRef.tb_fft64__DOT__in_real[37U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v113, 0x29U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v113 
            = vlSelfRef.tb_fft64__DOT__in_imag[37U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v113, 0x29U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v114 
            = vlSelfRef.tb_fft64__DOT__in_real[38U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v114, 0x19U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v114 
            = vlSelfRef.tb_fft64__DOT__in_imag[38U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v114, 0x19U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v115 
            = vlSelfRef.tb_fft64__DOT__in_real[39U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v115, 0x39U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v115 
            = vlSelfRef.tb_fft64__DOT__in_imag[39U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v115, 0x39U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v116 
            = vlSelfRef.tb_fft64__DOT__in_real[40U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v116, 5U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v116 
            = vlSelfRef.tb_fft64__DOT__in_imag[40U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v116, 5U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v117 
            = vlSelfRef.tb_fft64__DOT__in_real[41U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v117, 0x25U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v117 
            = vlSelfRef.tb_fft64__DOT__in_imag[41U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v117, 0x25U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v118 
            = vlSelfRef.tb_fft64__DOT__in_real[42U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v118, 0x15U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v118 
            = vlSelfRef.tb_fft64__DOT__in_imag[42U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v118, 0x15U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v119 
            = vlSelfRef.tb_fft64__DOT__in_real[43U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v119, 0x35U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v119 
            = vlSelfRef.tb_fft64__DOT__in_imag[43U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v119, 0x35U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v120 
            = vlSelfRef.tb_fft64__DOT__in_real[44U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v120, 0x0dU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v120 
            = vlSelfRef.tb_fft64__DOT__in_imag[44U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v120, 0x0dU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v121 
            = vlSelfRef.tb_fft64__DOT__in_real[45U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v121, 0x2dU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v121 
            = vlSelfRef.tb_fft64__DOT__in_imag[45U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v121, 0x2dU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v122 
            = vlSelfRef.tb_fft64__DOT__in_real[46U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v122, 0x1dU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v122 
            = vlSelfRef.tb_fft64__DOT__in_imag[46U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v122, 0x1dU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v123 
            = vlSelfRef.tb_fft64__DOT__in_real[47U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v123, 0x3dU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v123 
            = vlSelfRef.tb_fft64__DOT__in_imag[47U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v123, 0x3dU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v124 
            = vlSelfRef.tb_fft64__DOT__in_real[48U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v124, 3U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v124 
            = vlSelfRef.tb_fft64__DOT__in_imag[48U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v124, 3U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v125 
            = vlSelfRef.tb_fft64__DOT__in_real[49U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v125, 0x23U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v125 
            = vlSelfRef.tb_fft64__DOT__in_imag[49U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v125, 0x23U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v126 
            = vlSelfRef.tb_fft64__DOT__in_real[50U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v126, 0x13U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v126 
            = vlSelfRef.tb_fft64__DOT__in_imag[50U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v126, 0x13U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v127 
            = vlSelfRef.tb_fft64__DOT__in_real[51U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v127, 0x33U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v127 
            = vlSelfRef.tb_fft64__DOT__in_imag[51U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v127, 0x33U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v128 
            = vlSelfRef.tb_fft64__DOT__in_real[52U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v128, 0x0bU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v128 
            = vlSelfRef.tb_fft64__DOT__in_imag[52U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v128, 0x0bU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v129 
            = vlSelfRef.tb_fft64__DOT__in_real[53U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v129, 0x2bU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v129 
            = vlSelfRef.tb_fft64__DOT__in_imag[53U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v129, 0x2bU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v130 
            = vlSelfRef.tb_fft64__DOT__in_real[54U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v130, 0x1bU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v130 
            = vlSelfRef.tb_fft64__DOT__in_imag[54U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v130, 0x1bU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v131 
            = vlSelfRef.tb_fft64__DOT__in_real[55U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v131, 0x3bU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v131 
            = vlSelfRef.tb_fft64__DOT__in_imag[55U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v131, 0x3bU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v132 
            = vlSelfRef.tb_fft64__DOT__in_real[56U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v132, 7U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v132 
            = vlSelfRef.tb_fft64__DOT__in_imag[56U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v132, 7U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v133 
            = vlSelfRef.tb_fft64__DOT__in_real[57U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v133, 0x27U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v133 
            = vlSelfRef.tb_fft64__DOT__in_imag[57U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v133, 0x27U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v134 
            = vlSelfRef.tb_fft64__DOT__in_real[58U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v134, 0x17U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v134 
            = vlSelfRef.tb_fft64__DOT__in_imag[58U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v134, 0x17U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v135 
            = vlSelfRef.tb_fft64__DOT__in_real[59U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v135, 0x37U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v135 
            = vlSelfRef.tb_fft64__DOT__in_imag[59U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v135, 0x37U);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v136 
            = vlSelfRef.tb_fft64__DOT__in_real[60U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v136, 0x0fU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v136 
            = vlSelfRef.tb_fft64__DOT__in_imag[60U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v136, 0x0fU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v137 
            = vlSelfRef.tb_fft64__DOT__in_real[61U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v137, 0x2fU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v137 
            = vlSelfRef.tb_fft64__DOT__in_imag[61U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v137, 0x2fU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v138 
            = vlSelfRef.tb_fft64__DOT__in_real[62U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v138, 0x1fU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v138 
            = vlSelfRef.tb_fft64__DOT__in_imag[62U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v138, 0x1fU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v139 
            = vlSelfRef.tb_fft64__DOT__in_real[63U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__real_mem__v139, 0x3fU);
        __VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v139 
            = vlSelfRef.tb_fft64__DOT__in_imag[63U];
        vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.enqueue(__VdlyVal__tb_fft64__DOT__dut__DOT__imag_mem__v139, 0x3fU);
    } else {
        vlSelfRef.tb_fft64__DOT__done = 0U;
        if (vlSelfRef.tb_fft64__DOT__start) {
            __Vdly__tb_fft64__DOT__dut__DOT__state = 1U;
        }
    }
    vlSelfRef.tb_fft64__DOT__dut__DOT__state = __Vdly__tb_fft64__DOT__dut__DOT__state;
    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__real_mem.commit(vlSelfRef.tb_fft64__DOT__dut__DOT__real_mem);
    vlSelfRef.__VdlyCommitQueuetb_fft64__DOT__dut__DOT__imag_mem.commit(vlSelfRef.tb_fft64__DOT__dut__DOT__imag_mem);
    if (__VdlySet__tb_fft64__DOT__out_real__v0) {
        vlSelfRef.tb_fft64__DOT__out_real[0U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[0U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v1) {
        vlSelfRef.tb_fft64__DOT__out_real[1U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[1U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v2) {
        vlSelfRef.tb_fft64__DOT__out_real[2U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[2U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v3) {
        vlSelfRef.tb_fft64__DOT__out_real[3U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[3U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v4) {
        vlSelfRef.tb_fft64__DOT__out_real[4U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[4U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v5) {
        vlSelfRef.tb_fft64__DOT__out_real[5U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[5U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v6) {
        vlSelfRef.tb_fft64__DOT__out_real[6U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[6U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v7) {
        vlSelfRef.tb_fft64__DOT__out_real[7U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[7U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v8) {
        vlSelfRef.tb_fft64__DOT__out_real[8U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[8U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v9) {
        vlSelfRef.tb_fft64__DOT__out_real[9U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[9U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v10) {
        vlSelfRef.tb_fft64__DOT__out_real[10U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[10U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v11) {
        vlSelfRef.tb_fft64__DOT__out_real[11U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[11U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v12) {
        vlSelfRef.tb_fft64__DOT__out_real[12U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[12U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v13) {
        vlSelfRef.tb_fft64__DOT__out_real[13U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[13U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v14) {
        vlSelfRef.tb_fft64__DOT__out_real[14U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[14U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v15) {
        vlSelfRef.tb_fft64__DOT__out_real[15U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[15U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v16) {
        vlSelfRef.tb_fft64__DOT__out_real[16U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[16U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v17) {
        vlSelfRef.tb_fft64__DOT__out_real[17U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[17U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v18) {
        vlSelfRef.tb_fft64__DOT__out_real[18U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[18U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v19) {
        vlSelfRef.tb_fft64__DOT__out_real[19U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[19U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v20) {
        vlSelfRef.tb_fft64__DOT__out_real[20U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[20U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v21) {
        vlSelfRef.tb_fft64__DOT__out_real[21U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[21U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v22) {
        vlSelfRef.tb_fft64__DOT__out_real[22U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[22U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v23) {
        vlSelfRef.tb_fft64__DOT__out_real[23U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[23U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v24) {
        vlSelfRef.tb_fft64__DOT__out_real[24U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[24U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v25) {
        vlSelfRef.tb_fft64__DOT__out_real[25U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[25U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v26) {
        vlSelfRef.tb_fft64__DOT__out_real[26U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[26U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v27) {
        vlSelfRef.tb_fft64__DOT__out_real[27U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[27U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v28) {
        vlSelfRef.tb_fft64__DOT__out_real[28U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[28U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v29) {
        vlSelfRef.tb_fft64__DOT__out_real[29U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[29U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v30) {
        vlSelfRef.tb_fft64__DOT__out_real[30U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[30U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v31) {
        vlSelfRef.tb_fft64__DOT__out_real[31U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[31U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v32) {
        vlSelfRef.tb_fft64__DOT__out_real[32U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[32U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v33) {
        vlSelfRef.tb_fft64__DOT__out_real[33U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[33U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v34) {
        vlSelfRef.tb_fft64__DOT__out_real[34U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[34U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v35) {
        vlSelfRef.tb_fft64__DOT__out_real[35U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[35U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v36) {
        vlSelfRef.tb_fft64__DOT__out_real[36U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[36U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v37) {
        vlSelfRef.tb_fft64__DOT__out_real[37U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[37U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v38) {
        vlSelfRef.tb_fft64__DOT__out_real[38U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[38U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v39) {
        vlSelfRef.tb_fft64__DOT__out_real[39U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[39U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v40) {
        vlSelfRef.tb_fft64__DOT__out_real[40U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[40U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v41) {
        vlSelfRef.tb_fft64__DOT__out_real[41U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[41U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v42) {
        vlSelfRef.tb_fft64__DOT__out_real[42U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[42U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v43) {
        vlSelfRef.tb_fft64__DOT__out_real[43U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[43U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v44) {
        vlSelfRef.tb_fft64__DOT__out_real[44U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[44U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v45) {
        vlSelfRef.tb_fft64__DOT__out_real[45U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[45U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v46) {
        vlSelfRef.tb_fft64__DOT__out_real[46U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[46U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v47) {
        vlSelfRef.tb_fft64__DOT__out_real[47U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[47U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v48) {
        vlSelfRef.tb_fft64__DOT__out_real[48U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[48U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v49) {
        vlSelfRef.tb_fft64__DOT__out_real[49U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[49U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v50) {
        vlSelfRef.tb_fft64__DOT__out_real[50U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[50U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v51) {
        vlSelfRef.tb_fft64__DOT__out_real[51U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[51U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v52) {
        vlSelfRef.tb_fft64__DOT__out_real[52U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[52U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v53) {
        vlSelfRef.tb_fft64__DOT__out_real[53U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[53U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v54) {
        vlSelfRef.tb_fft64__DOT__out_real[54U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[54U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v55) {
        vlSelfRef.tb_fft64__DOT__out_real[55U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[55U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v56) {
        vlSelfRef.tb_fft64__DOT__out_real[56U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[56U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v57) {
        vlSelfRef.tb_fft64__DOT__out_real[57U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[57U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v58) {
        vlSelfRef.tb_fft64__DOT__out_real[58U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[58U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v59) {
        vlSelfRef.tb_fft64__DOT__out_real[59U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[59U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v60) {
        vlSelfRef.tb_fft64__DOT__out_real[60U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[60U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v61) {
        vlSelfRef.tb_fft64__DOT__out_real[61U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[61U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v62) {
        vlSelfRef.tb_fft64__DOT__out_real[62U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[62U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v63) {
        vlSelfRef.tb_fft64__DOT__out_real[63U] = 0U;
        vlSelfRef.tb_fft64__DOT__out_imag[63U] = 0U;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v64) {
        vlSelfRef.tb_fft64__DOT__out_real[0U] = __VdlyVal__tb_fft64__DOT__out_real__v64;
        vlSelfRef.tb_fft64__DOT__out_imag[0U] = __VdlyVal__tb_fft64__DOT__out_imag__v64;
    }
    if (__VdlySet__tb_fft64__DOT__out_real__v65) {
        vlSelfRef.tb_fft64__DOT__out_real[1U] = __VdlyVal__tb_fft64__DOT__out_real__v65;
        vlSelfRef.tb_fft64__DOT__out_real[2U] = __VdlyVal__tb_fft64__DOT__out_real__v66;
        vlSelfRef.tb_fft64__DOT__out_real[3U] = __VdlyVal__tb_fft64__DOT__out_real__v67;
        vlSelfRef.tb_fft64__DOT__out_real[4U] = __VdlyVal__tb_fft64__DOT__out_real__v68;
        vlSelfRef.tb_fft64__DOT__out_real[5U] = __VdlyVal__tb_fft64__DOT__out_real__v69;
        vlSelfRef.tb_fft64__DOT__out_real[6U] = __VdlyVal__tb_fft64__DOT__out_real__v70;
        vlSelfRef.tb_fft64__DOT__out_real[7U] = __VdlyVal__tb_fft64__DOT__out_real__v71;
        vlSelfRef.tb_fft64__DOT__out_real[8U] = __VdlyVal__tb_fft64__DOT__out_real__v72;
        vlSelfRef.tb_fft64__DOT__out_real[9U] = __VdlyVal__tb_fft64__DOT__out_real__v73;
        vlSelfRef.tb_fft64__DOT__out_real[10U] = __VdlyVal__tb_fft64__DOT__out_real__v74;
        vlSelfRef.tb_fft64__DOT__out_real[11U] = __VdlyVal__tb_fft64__DOT__out_real__v75;
        vlSelfRef.tb_fft64__DOT__out_real[12U] = __VdlyVal__tb_fft64__DOT__out_real__v76;
        vlSelfRef.tb_fft64__DOT__out_real[13U] = __VdlyVal__tb_fft64__DOT__out_real__v77;
        vlSelfRef.tb_fft64__DOT__out_real[14U] = __VdlyVal__tb_fft64__DOT__out_real__v78;
        vlSelfRef.tb_fft64__DOT__out_real[15U] = __VdlyVal__tb_fft64__DOT__out_real__v79;
        vlSelfRef.tb_fft64__DOT__out_real[16U] = __VdlyVal__tb_fft64__DOT__out_real__v80;
        vlSelfRef.tb_fft64__DOT__out_real[17U] = __VdlyVal__tb_fft64__DOT__out_real__v81;
        vlSelfRef.tb_fft64__DOT__out_real[18U] = __VdlyVal__tb_fft64__DOT__out_real__v82;
        vlSelfRef.tb_fft64__DOT__out_real[19U] = __VdlyVal__tb_fft64__DOT__out_real__v83;
        vlSelfRef.tb_fft64__DOT__out_real[20U] = __VdlyVal__tb_fft64__DOT__out_real__v84;
        vlSelfRef.tb_fft64__DOT__out_real[21U] = __VdlyVal__tb_fft64__DOT__out_real__v85;
        vlSelfRef.tb_fft64__DOT__out_real[22U] = __VdlyVal__tb_fft64__DOT__out_real__v86;
        vlSelfRef.tb_fft64__DOT__out_real[23U] = __VdlyVal__tb_fft64__DOT__out_real__v87;
        vlSelfRef.tb_fft64__DOT__out_real[24U] = __VdlyVal__tb_fft64__DOT__out_real__v88;
        vlSelfRef.tb_fft64__DOT__out_real[25U] = __VdlyVal__tb_fft64__DOT__out_real__v89;
        vlSelfRef.tb_fft64__DOT__out_real[26U] = __VdlyVal__tb_fft64__DOT__out_real__v90;
        vlSelfRef.tb_fft64__DOT__out_real[27U] = __VdlyVal__tb_fft64__DOT__out_real__v91;
        vlSelfRef.tb_fft64__DOT__out_real[28U] = __VdlyVal__tb_fft64__DOT__out_real__v92;
        vlSelfRef.tb_fft64__DOT__out_real[29U] = __VdlyVal__tb_fft64__DOT__out_real__v93;
        vlSelfRef.tb_fft64__DOT__out_real[30U] = __VdlyVal__tb_fft64__DOT__out_real__v94;
        vlSelfRef.tb_fft64__DOT__out_real[31U] = __VdlyVal__tb_fft64__DOT__out_real__v95;
        vlSelfRef.tb_fft64__DOT__out_real[32U] = __VdlyVal__tb_fft64__DOT__out_real__v96;
        vlSelfRef.tb_fft64__DOT__out_real[33U] = __VdlyVal__tb_fft64__DOT__out_real__v97;
        vlSelfRef.tb_fft64__DOT__out_real[34U] = __VdlyVal__tb_fft64__DOT__out_real__v98;
        vlSelfRef.tb_fft64__DOT__out_real[35U] = __VdlyVal__tb_fft64__DOT__out_real__v99;
        vlSelfRef.tb_fft64__DOT__out_real[36U] = __VdlyVal__tb_fft64__DOT__out_real__v100;
        vlSelfRef.tb_fft64__DOT__out_real[37U] = __VdlyVal__tb_fft64__DOT__out_real__v101;
        vlSelfRef.tb_fft64__DOT__out_real[38U] = __VdlyVal__tb_fft64__DOT__out_real__v102;
        vlSelfRef.tb_fft64__DOT__out_real[39U] = __VdlyVal__tb_fft64__DOT__out_real__v103;
        vlSelfRef.tb_fft64__DOT__out_real[40U] = __VdlyVal__tb_fft64__DOT__out_real__v104;
        vlSelfRef.tb_fft64__DOT__out_real[41U] = __VdlyVal__tb_fft64__DOT__out_real__v105;
        vlSelfRef.tb_fft64__DOT__out_real[42U] = __VdlyVal__tb_fft64__DOT__out_real__v106;
        vlSelfRef.tb_fft64__DOT__out_real[43U] = __VdlyVal__tb_fft64__DOT__out_real__v107;
        vlSelfRef.tb_fft64__DOT__out_real[44U] = __VdlyVal__tb_fft64__DOT__out_real__v108;
        vlSelfRef.tb_fft64__DOT__out_real[45U] = __VdlyVal__tb_fft64__DOT__out_real__v109;
        vlSelfRef.tb_fft64__DOT__out_real[46U] = __VdlyVal__tb_fft64__DOT__out_real__v110;
        vlSelfRef.tb_fft64__DOT__out_real[47U] = __VdlyVal__tb_fft64__DOT__out_real__v111;
        vlSelfRef.tb_fft64__DOT__out_real[48U] = __VdlyVal__tb_fft64__DOT__out_real__v112;
        vlSelfRef.tb_fft64__DOT__out_real[49U] = __VdlyVal__tb_fft64__DOT__out_real__v113;
        vlSelfRef.tb_fft64__DOT__out_real[50U] = __VdlyVal__tb_fft64__DOT__out_real__v114;
        vlSelfRef.tb_fft64__DOT__out_real[51U] = __VdlyVal__tb_fft64__DOT__out_real__v115;
        vlSelfRef.tb_fft64__DOT__out_real[52U] = __VdlyVal__tb_fft64__DOT__out_real__v116;
        vlSelfRef.tb_fft64__DOT__out_real[53U] = __VdlyVal__tb_fft64__DOT__out_real__v117;
        vlSelfRef.tb_fft64__DOT__out_real[54U] = __VdlyVal__tb_fft64__DOT__out_real__v118;
        vlSelfRef.tb_fft64__DOT__out_real[55U] = __VdlyVal__tb_fft64__DOT__out_real__v119;
        vlSelfRef.tb_fft64__DOT__out_real[56U] = __VdlyVal__tb_fft64__DOT__out_real__v120;
        vlSelfRef.tb_fft64__DOT__out_real[57U] = __VdlyVal__tb_fft64__DOT__out_real__v121;
        vlSelfRef.tb_fft64__DOT__out_real[58U] = __VdlyVal__tb_fft64__DOT__out_real__v122;
        vlSelfRef.tb_fft64__DOT__out_real[59U] = __VdlyVal__tb_fft64__DOT__out_real__v123;
        vlSelfRef.tb_fft64__DOT__out_real[60U] = __VdlyVal__tb_fft64__DOT__out_real__v124;
        vlSelfRef.tb_fft64__DOT__out_real[61U] = __VdlyVal__tb_fft64__DOT__out_real__v125;
        vlSelfRef.tb_fft64__DOT__out_real[62U] = __VdlyVal__tb_fft64__DOT__out_real__v126;
        vlSelfRef.tb_fft64__DOT__out_real[63U] = __VdlyVal__tb_fft64__DOT__out_real__v127;
        vlSelfRef.tb_fft64__DOT__out_imag[1U] = __VdlyVal__tb_fft64__DOT__out_imag__v65;
        vlSelfRef.tb_fft64__DOT__out_imag[2U] = __VdlyVal__tb_fft64__DOT__out_imag__v66;
        vlSelfRef.tb_fft64__DOT__out_imag[3U] = __VdlyVal__tb_fft64__DOT__out_imag__v67;
        vlSelfRef.tb_fft64__DOT__out_imag[4U] = __VdlyVal__tb_fft64__DOT__out_imag__v68;
        vlSelfRef.tb_fft64__DOT__out_imag[5U] = __VdlyVal__tb_fft64__DOT__out_imag__v69;
        vlSelfRef.tb_fft64__DOT__out_imag[6U] = __VdlyVal__tb_fft64__DOT__out_imag__v70;
        vlSelfRef.tb_fft64__DOT__out_imag[7U] = __VdlyVal__tb_fft64__DOT__out_imag__v71;
        vlSelfRef.tb_fft64__DOT__out_imag[8U] = __VdlyVal__tb_fft64__DOT__out_imag__v72;
        vlSelfRef.tb_fft64__DOT__out_imag[9U] = __VdlyVal__tb_fft64__DOT__out_imag__v73;
        vlSelfRef.tb_fft64__DOT__out_imag[10U] = __VdlyVal__tb_fft64__DOT__out_imag__v74;
        vlSelfRef.tb_fft64__DOT__out_imag[11U] = __VdlyVal__tb_fft64__DOT__out_imag__v75;
        vlSelfRef.tb_fft64__DOT__out_imag[12U] = __VdlyVal__tb_fft64__DOT__out_imag__v76;
        vlSelfRef.tb_fft64__DOT__out_imag[13U] = __VdlyVal__tb_fft64__DOT__out_imag__v77;
        vlSelfRef.tb_fft64__DOT__out_imag[14U] = __VdlyVal__tb_fft64__DOT__out_imag__v78;
        vlSelfRef.tb_fft64__DOT__out_imag[15U] = __VdlyVal__tb_fft64__DOT__out_imag__v79;
        vlSelfRef.tb_fft64__DOT__out_imag[16U] = __VdlyVal__tb_fft64__DOT__out_imag__v80;
        vlSelfRef.tb_fft64__DOT__out_imag[17U] = __VdlyVal__tb_fft64__DOT__out_imag__v81;
        vlSelfRef.tb_fft64__DOT__out_imag[18U] = __VdlyVal__tb_fft64__DOT__out_imag__v82;
        vlSelfRef.tb_fft64__DOT__out_imag[19U] = __VdlyVal__tb_fft64__DOT__out_imag__v83;
        vlSelfRef.tb_fft64__DOT__out_imag[20U] = __VdlyVal__tb_fft64__DOT__out_imag__v84;
        vlSelfRef.tb_fft64__DOT__out_imag[21U] = __VdlyVal__tb_fft64__DOT__out_imag__v85;
        vlSelfRef.tb_fft64__DOT__out_imag[22U] = __VdlyVal__tb_fft64__DOT__out_imag__v86;
        vlSelfRef.tb_fft64__DOT__out_imag[23U] = __VdlyVal__tb_fft64__DOT__out_imag__v87;
        vlSelfRef.tb_fft64__DOT__out_imag[24U] = __VdlyVal__tb_fft64__DOT__out_imag__v88;
        vlSelfRef.tb_fft64__DOT__out_imag[25U] = __VdlyVal__tb_fft64__DOT__out_imag__v89;
        vlSelfRef.tb_fft64__DOT__out_imag[26U] = __VdlyVal__tb_fft64__DOT__out_imag__v90;
        vlSelfRef.tb_fft64__DOT__out_imag[27U] = __VdlyVal__tb_fft64__DOT__out_imag__v91;
        vlSelfRef.tb_fft64__DOT__out_imag[28U] = __VdlyVal__tb_fft64__DOT__out_imag__v92;
        vlSelfRef.tb_fft64__DOT__out_imag[29U] = __VdlyVal__tb_fft64__DOT__out_imag__v93;
        vlSelfRef.tb_fft64__DOT__out_imag[30U] = __VdlyVal__tb_fft64__DOT__out_imag__v94;
        vlSelfRef.tb_fft64__DOT__out_imag[31U] = __VdlyVal__tb_fft64__DOT__out_imag__v95;
        vlSelfRef.tb_fft64__DOT__out_imag[32U] = __VdlyVal__tb_fft64__DOT__out_imag__v96;
        vlSelfRef.tb_fft64__DOT__out_imag[33U] = __VdlyVal__tb_fft64__DOT__out_imag__v97;
        vlSelfRef.tb_fft64__DOT__out_imag[34U] = __VdlyVal__tb_fft64__DOT__out_imag__v98;
        vlSelfRef.tb_fft64__DOT__out_imag[35U] = __VdlyVal__tb_fft64__DOT__out_imag__v99;
        vlSelfRef.tb_fft64__DOT__out_imag[36U] = __VdlyVal__tb_fft64__DOT__out_imag__v100;
        vlSelfRef.tb_fft64__DOT__out_imag[37U] = __VdlyVal__tb_fft64__DOT__out_imag__v101;
        vlSelfRef.tb_fft64__DOT__out_imag[38U] = __VdlyVal__tb_fft64__DOT__out_imag__v102;
        vlSelfRef.tb_fft64__DOT__out_imag[39U] = __VdlyVal__tb_fft64__DOT__out_imag__v103;
        vlSelfRef.tb_fft64__DOT__out_imag[40U] = __VdlyVal__tb_fft64__DOT__out_imag__v104;
        vlSelfRef.tb_fft64__DOT__out_imag[41U] = __VdlyVal__tb_fft64__DOT__out_imag__v105;
        vlSelfRef.tb_fft64__DOT__out_imag[42U] = __VdlyVal__tb_fft64__DOT__out_imag__v106;
        vlSelfRef.tb_fft64__DOT__out_imag[43U] = __VdlyVal__tb_fft64__DOT__out_imag__v107;
        vlSelfRef.tb_fft64__DOT__out_imag[44U] = __VdlyVal__tb_fft64__DOT__out_imag__v108;
        vlSelfRef.tb_fft64__DOT__out_imag[45U] = __VdlyVal__tb_fft64__DOT__out_imag__v109;
        vlSelfRef.tb_fft64__DOT__out_imag[46U] = __VdlyVal__tb_fft64__DOT__out_imag__v110;
        vlSelfRef.tb_fft64__DOT__out_imag[47U] = __VdlyVal__tb_fft64__DOT__out_imag__v111;
        vlSelfRef.tb_fft64__DOT__out_imag[48U] = __VdlyVal__tb_fft64__DOT__out_imag__v112;
        vlSelfRef.tb_fft64__DOT__out_imag[49U] = __VdlyVal__tb_fft64__DOT__out_imag__v113;
        vlSelfRef.tb_fft64__DOT__out_imag[50U] = __VdlyVal__tb_fft64__DOT__out_imag__v114;
        vlSelfRef.tb_fft64__DOT__out_imag[51U] = __VdlyVal__tb_fft64__DOT__out_imag__v115;
        vlSelfRef.tb_fft64__DOT__out_imag[52U] = __VdlyVal__tb_fft64__DOT__out_imag__v116;
        vlSelfRef.tb_fft64__DOT__out_imag[53U] = __VdlyVal__tb_fft64__DOT__out_imag__v117;
        vlSelfRef.tb_fft64__DOT__out_imag[54U] = __VdlyVal__tb_fft64__DOT__out_imag__v118;
        vlSelfRef.tb_fft64__DOT__out_imag[55U] = __VdlyVal__tb_fft64__DOT__out_imag__v119;
        vlSelfRef.tb_fft64__DOT__out_imag[56U] = __VdlyVal__tb_fft64__DOT__out_imag__v120;
        vlSelfRef.tb_fft64__DOT__out_imag[57U] = __VdlyVal__tb_fft64__DOT__out_imag__v121;
        vlSelfRef.tb_fft64__DOT__out_imag[58U] = __VdlyVal__tb_fft64__DOT__out_imag__v122;
        vlSelfRef.tb_fft64__DOT__out_imag[59U] = __VdlyVal__tb_fft64__DOT__out_imag__v123;
        vlSelfRef.tb_fft64__DOT__out_imag[60U] = __VdlyVal__tb_fft64__DOT__out_imag__v124;
        vlSelfRef.tb_fft64__DOT__out_imag[61U] = __VdlyVal__tb_fft64__DOT__out_imag__v125;
        vlSelfRef.tb_fft64__DOT__out_imag[62U] = __VdlyVal__tb_fft64__DOT__out_imag__v126;
        vlSelfRef.tb_fft64__DOT__out_imag[63U] = __VdlyVal__tb_fft64__DOT__out_imag__v127;
    }
}

void Vtb_fft64___024root___timing_ready(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___timing_ready\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h39a3b97d__0.ready("@(posedge tb_fft64.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h8118c4eb__0.ready("@( tb_fft64.done)");
    }
}

void Vtb_fft64___024root___timing_resume(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___timing_resume\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h39a3b97d__0.moveToResumeQueue(
                                                          "@(posedge tb_fft64.clk)");
    vlSelfRef.__VtrigSched_h8118c4eb__0.moveToResumeQueue(
                                                          "@( tb_fft64.done)");
    vlSelfRef.__VtrigSched_h39a3b97d__0.resume("@(posedge tb_fft64.clk)");
    vlSelfRef.__VtrigSched_h8118c4eb__0.resume("@( tb_fft64.done)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_fft64___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_fft64___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_fft64___024root____VbeforeTrig_h39a3b97d__0(Vtb_fft64___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root____VbeforeTrig_h39a3b97d__0\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_fft64__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft64__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft64__DOT__clk__0 
        = vlSelfRef.tb_fft64__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h39a3b97d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h39a3b97d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h39a3b97d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_fft64___024root____VbeforeTrig_h8118c4eb__0(Vtb_fft64___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root____VbeforeTrig_h8118c4eb__0\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_fft64__DOT__done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_fft64__DOT__done__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft64__DOT__done__0 
        = vlSelfRef.tb_fft64__DOT__done;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h8118c4eb__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_fft64___024root___eval_debug_assertions(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_debug_assertions\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
