// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fft8.h for the primary calling header

#include "Vtb_fft8__pch.h"

VL_ATTR_COLD void Vtb_fft8___024root___eval_static(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_static\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft8__DOT__clk__0 
        = vlSelfRef.tb_fft8__DOT__clk;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft8___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_fft8___024root___eval_stl(Vtb_fft8___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_stl\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fft8___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    return (0U);
}

VL_ATTR_COLD void Vtb_fft8___024root___eval_dump_triggers__stl(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_dump_triggers__stl\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_fft8___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft8___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fft8___024root___eval_dump_triggers__ico(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_dump_triggers__ico\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_fft8___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft8___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fft8___024root___eval_dump_triggers__act(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_dump_triggers__act\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_fft8___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_fft8___024root___eval_dump_triggers__nba(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_dump_triggers__nba\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_fft8___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_fft8___024root___eval_dump_triggers__obs(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_dump_triggers__obs\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_fft8___024root___eval_dump_triggers__react(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_dump_triggers__react\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_fft8___024root___eval_final(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___eval_final\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD bool Vtb_fft8___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft8___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fft8___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_fft8___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___trigger_anySet__stl\n"); );
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

bool Vtb_fft8___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft8___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fft8___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_fft8___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft8___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fft8___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_fft8.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fft8___024root___ctor_var_reset(Vtb_fft8___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root___ctor_var_reset\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_fft8__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15180367274838951694ull);
    vlSelf->tb_fft8__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12081581406318827103ull);
    vlSelf->tb_fft8__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11850509530015490529ull);
    vlSelf->tb_fft8__DOT__x0 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12013350690958144203ull);
    vlSelf->tb_fft8__DOT__x1 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5823252673001927283ull);
    vlSelf->tb_fft8__DOT__x2 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12090694965282624891ull);
    vlSelf->tb_fft8__DOT__x3 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16299255882904456056ull);
    vlSelf->tb_fft8__DOT__x4 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9757882708027031917ull);
    vlSelf->tb_fft8__DOT__x5 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15894568850912914638ull);
    vlSelf->tb_fft8__DOT__x6 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6539709130444033300ull);
    vlSelf->tb_fft8__DOT__x7 = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15795391982457402907ull);
    vlSelf->tb_fft8__DOT__y0_re = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13843162602305046696ull);
    vlSelf->tb_fft8__DOT__y1_re = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7488714195309827148ull);
    vlSelf->tb_fft8__DOT__y2_re = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7652360948229373822ull);
    vlSelf->tb_fft8__DOT__y3_re = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6012984495828562756ull);
    vlSelf->tb_fft8__DOT__y4_re = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8948856037465218803ull);
    vlSelf->tb_fft8__DOT__y5_re = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12068725776171880814ull);
    vlSelf->tb_fft8__DOT__y6_re = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16490468855711726388ull);
    vlSelf->tb_fft8__DOT__y7_re = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16571703687281590265ull);
    vlSelf->tb_fft8__DOT__y0_im = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 3741566532940294ull);
    vlSelf->tb_fft8__DOT__y1_im = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4443119066324719859ull);
    vlSelf->tb_fft8__DOT__y2_im = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5572312569795423887ull);
    vlSelf->tb_fft8__DOT__y3_im = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11457783988535254319ull);
    vlSelf->tb_fft8__DOT__y4_im = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14311243608822131498ull);
    vlSelf->tb_fft8__DOT__y5_im = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7833919673009388642ull);
    vlSelf->tb_fft8__DOT__y6_im = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1288849960260478807ull);
    vlSelf->tb_fft8__DOT__y7_im = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 7593801675344388946ull);
    vlSelf->tb_fft8__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10139917142010925545ull);
    vlSelf->tb_fft8__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(3, __VscopeHash, 1463260502323447700ull);
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_fft8__DOT__dut__DOT__s0_re[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5469265825212039355ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_fft8__DOT__dut__DOT__s0_im[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5655398314008854027ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_fft8__DOT__dut__DOT__s1_re[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8392483076733338650ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_fft8__DOT__dut__DOT__s1_im[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12607989165400961798ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_fft8__DOT__dut__DOT__s2_re[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6451304454299359771ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_fft8__DOT__dut__DOT__s2_im[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17898579495253841647ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_fft8__DOT__dut__DOT__s3_re[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14837283730097960346ull);
    }
    for (int __Vi0 = 0; __Vi0 < 8; ++__Vi0) {
        vlSelf->tb_fft8__DOT__dut__DOT__s3_im[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8188635601433235148ull);
    }
    vlSelf->tb_fft8__DOT__dut__DOT__mult_re = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 16799614399386382367ull);
    vlSelf->tb_fft8__DOT__dut__DOT__mult_im = VL_SCOPED_RAND_RESET_Q(64, __VscopeHash, 18043092106921279407ull);
    vlSelf->tb_fft8__DOT__dut__DOT__tw_re = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 1443496478156488051ull);
    vlSelf->tb_fft8__DOT__dut__DOT__tw_im = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10676558461898623896ull);
    vlSelf->tb_fft8__DOT__dut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10825261400285058441ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VicoTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__tb_fft8__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
