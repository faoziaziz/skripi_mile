// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi_lite_regs.h for the primary calling header

#include "Vtb_axi_lite_regs__pch.h"

void Vtb_axi_lite_regs___024root___timing_ready(Vtb_axi_lite_regs___024root* vlSelf);

VL_ATTR_COLD void Vtb_axi_lite_regs___024root___eval_static(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_static\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_static__TOP
        const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
        vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2541231246918707799ull);
    }
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000010ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (0x0000000000000020ULL 
                                     | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__aclk__0 
        = vlSelfRef.tb_axi_lite_regs__DOT__aclk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_arready__0 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_awready__0 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_bvalid__0 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_rvalid__0 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_wready__0 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready;
    Vtb_axi_lite_regs___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_lite_regs___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_axi_lite_regs___024root___eval_stl(Vtb_axi_lite_regs___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_stl\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axi_lite_regs___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    return (0U);
}

VL_ATTR_COLD void Vtb_axi_lite_regs___024root___eval_dump_triggers__stl(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_dump_triggers__stl\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_axi_lite_regs___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_lite_regs___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axi_lite_regs___024root___eval_dump_triggers__ico(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_dump_triggers__ico\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_axi_lite_regs___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_lite_regs___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axi_lite_regs___024root___eval_dump_triggers__act(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_dump_triggers__act\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_axi_lite_regs___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_axi_lite_regs___024root___eval_dump_triggers__nba(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_dump_triggers__nba\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_axi_lite_regs___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_axi_lite_regs___024root___eval_dump_triggers__obs(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_dump_triggers__obs\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_axi_lite_regs___024root___eval_dump_triggers__react(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_dump_triggers__react\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_axi_lite_regs___024root___eval_final(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_final\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD bool Vtb_axi_lite_regs___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_lite_regs___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_axi_lite_regs___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_axi_lite_regs___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___trigger_anySet__stl\n"); );
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

bool Vtb_axi_lite_regs___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_lite_regs___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_axi_lite_regs___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_axi_lite_regs___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_lite_regs___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_axi_lite_regs___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_axi_lite_regs.aclk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( tb_axi_lite_regs.s_axi_arready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( tb_axi_lite_regs.s_axi_awready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( tb_axi_lite_regs.s_axi_bvalid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 4U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 4 is active: @( tb_axi_lite_regs.s_axi_rvalid)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 5U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 5 is active: @( tb_axi_lite_regs.s_axi_wready)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 6U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 6 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_axi_lite_regs___024root___ctor_var_reset(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___ctor_var_reset\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_axi_lite_regs__DOT__aclk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2492956686666921577ull);
    vlSelf->tb_axi_lite_regs__DOT__aresetn = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16345213924643452290ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_awaddr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 6164262425027568199ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_awvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13591885919961903587ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_awready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18163068478944395817ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5745590405982704399ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16989387059155990140ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_wvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8529731791442577569ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_wready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1159717896060183669ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_bresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12759760799092774240ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_bvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3050310469015719668ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_bready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17876258909563717834ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_araddr = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 3032819288798095604ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_arvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3195265435055625715ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_arready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8794086392074026836ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16411532033649490448ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_rresp = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3175561549635287939ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_rvalid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 416856244760513245ull);
    vlSelf->tb_axi_lite_regs__DOT__s_axi_rready = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6152969083872194369ull);
    vlSelf->tb_axi_lite_regs__DOT__dut__DOT__reg0 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6472916083551281826ull);
    vlSelf->tb_axi_lite_regs__DOT__dut__DOT__reg1 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10790809124163280791ull);
    vlSelf->tb_axi_lite_regs__DOT__dut__DOT__reg2 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16220086189716601675ull);
    vlSelf->tb_axi_lite_regs__DOT__dut__DOT__reg3 = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16594228141944706050ull);
    vlSelf->tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 8809788152120654747ull);
    vlSelf->tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14779870337638988130ull);
    vlSelf->tb_axi_lite_regs__DOT__dut__DOT__wdata_reg = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15156812231309409262ull);
    vlSelf->tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 18263998677889742898ull);
    vlSelf->tb_axi_lite_regs__DOT__dut__DOT__wdata_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15380995260223874993ull);
    vlSelf->__VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v0 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v0 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v0 = 0;
    vlSelf->__VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v0 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v0 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v0 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v0 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v1 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v1 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v0 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v1 = 0;
    vlSelf->__VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v0 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v0 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v0 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v1 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v0 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v1 = 0;
    vlSelf->__VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v1 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v1 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v2 = 0;
    vlSelf->__VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v1 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v1 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v1 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v2 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v3 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v3 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v2 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v3 = 0;
    vlSelf->__VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v1 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v1 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v2 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v3 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v2 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v3 = 0;
    vlSelf->__VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v2 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v2 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v4 = 0;
    vlSelf->__VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v2 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v2 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v2 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v4 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v5 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v5 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v4 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v5 = 0;
    vlSelf->__VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v2 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v2 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v4 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v5 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v4 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v5 = 0;
    vlSelf->__VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v3 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v3 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v6 = 0;
    vlSelf->__VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v3 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v3 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v3 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v6 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v7 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v7 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v6 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v7 = 0;
    vlSelf->__VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v3 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v3 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v6 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v7 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v6 = 0;
    vlSelf->__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v7 = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__aclk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_arready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_awready__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_bvalid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_rvalid__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_wready__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
