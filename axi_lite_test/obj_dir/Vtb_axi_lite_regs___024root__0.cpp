// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_axi_lite_regs.h for the primary calling header

#include "Vtb_axi_lite_regs__pch.h"

VlCoroutine Vtb_axi_lite_regs___024root___eval_initial__TOP__Vtiming__0(Vtb_axi_lite_regs___024root* vlSelf);
VlCoroutine Vtb_axi_lite_regs___024root___eval_initial__TOP__Vtiming__1(Vtb_axi_lite_regs___024root* vlSelf);

void Vtb_axi_lite_regs___024root___eval_initial(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_initial\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("axi_lite_regs.vcd"s);
        VL_PRINTF_MT("-Info: tb_axi_lite_regs.v:278: $dumpvar ignored, as Verilated without --trace\n");
    }
    Vtb_axi_lite_regs___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_axi_lite_regs___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_axi_lite_regs___024root___eval_sample(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_sample\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_lite_regs___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_axi_lite_regs___024root___eval_ico(Vtb_axi_lite_regs___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_ico\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axi_lite_regs___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_axi_lite_regs___024root___timing_ready(Vtb_axi_lite_regs___024root* vlSelf);
void Vtb_axi_lite_regs___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_axi_lite_regs___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_axi_lite_regs___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);
void Vtb_axi_lite_regs___024root___timing_resume(Vtb_axi_lite_regs___024root* vlSelf);

bool Vtb_axi_lite_regs___024root___eval_act(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_act\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                           << 6U) 
                                                          | ((((IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_wready__0)) 
                                                              << 5U) 
                                                             | (((IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_rvalid__0)) 
                                                                << 4U))) 
                                                         | (((((IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid) 
                                                               != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_bvalid__0)) 
                                                              << 3U) 
                                                             | (((IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_awready__0)) 
                                                                << 2U)) 
                                                            | ((((IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready) 
                                                                 != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_arready__0)) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.tb_axi_lite_regs__DOT__aclk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__aclk__0))))))));
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
    }
    Vtb_axi_lite_regs___024root___timing_ready(vlSelf);
    Vtb_axi_lite_regs___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_axi_lite_regs___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_axi_lite_regs___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_axi_lite_regs___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vtb_axi_lite_regs___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_axi_lite_regs___024root___eval_inact(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_inact\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_axi_lite_regs.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_axi_lite_regs___024root___nba_sequent__TOP__0(Vtb_axi_lite_regs___024root* vlSelf);
void Vtb_axi_lite_regs___024root___nba_sequent__TOP__1(Vtb_axi_lite_regs___024root* vlSelf);
void Vtb_axi_lite_regs___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_axi_lite_regs___024root___eval_nba(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_nba\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_axi_lite_regs___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_axi_lite_regs___024root___nba_sequent__TOP__0(vlSelf);
            }
            if ((0x000000000000003fULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_axi_lite_regs___024root___nba_sequent__TOP__1(vlSelf);
            }
        }
        Vtb_axi_lite_regs___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_axi_lite_regs___024root___eval_obs(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_obs\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_axi_lite_regs___024root___eval_react(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_react\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_axi_lite_regs___024root___eval_postponed(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_postponed\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vtb_axi_lite_regs___024root___eval_initial__TOP__Vtiming__0(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_axi_lite_regs__DOT__aclk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_axi_lite_regs.v", 
                                             71);
        vlSelfRef.tb_axi_lite_regs__DOT__aclk = (1U 
                                                 & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__aclk)));
    }
    co_return;
}

void Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(Vtb_axi_lite_regs___024root* vlSelf, const char* __VeventDescription);
void Vtb_axi_lite_regs___024root____VbeforeTrig_h2bfb65d7__0(Vtb_axi_lite_regs___024root* vlSelf, const char* __VeventDescription);
void Vtb_axi_lite_regs___024root____VbeforeTrig_h7e7bb800__0(Vtb_axi_lite_regs___024root* vlSelf, const char* __VeventDescription);
void Vtb_axi_lite_regs___024root____VbeforeTrig_h08d6aa6d__0(Vtb_axi_lite_regs___024root* vlSelf, const char* __VeventDescription);
void Vtb_axi_lite_regs___024root____VbeforeTrig_h259b3b27__0(Vtb_axi_lite_regs___024root* vlSelf, const char* __VeventDescription);
void Vtb_axi_lite_regs___024root____VbeforeTrig_h2efec67d__0(Vtb_axi_lite_regs___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vtb_axi_lite_regs___024root___eval_initial__TOP__Vtiming__1(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ tb_axi_lite_regs__DOT__axi_write__Vstatic__addr;
    tb_axi_lite_regs__DOT__axi_write__Vstatic__addr = 0;
    IData/*31:0*/ tb_axi_lite_regs__DOT__axi_write__Vstatic__data;
    tb_axi_lite_regs__DOT__axi_write__Vstatic__data = 0;
    CData/*5:0*/ tb_axi_lite_regs__DOT__axi_read__Vstatic__addr;
    tb_axi_lite_regs__DOT__axi_read__Vstatic__addr = 0;
    IData/*31:0*/ tb_axi_lite_regs__DOT__unnamedblk1_1__DOT____Vrepeat0;
    tb_axi_lite_regs__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ tb_axi_lite_regs__DOT__unnamedblk1_2__DOT____Vrepeat1;
    tb_axi_lite_regs__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    CData/*5:0*/ __Vtask_tb_axi_lite_regs__DOT__axi_write__0__addr;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__0__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi_lite_regs__DOT__axi_write__0__data;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__0__data = 0;
    CData/*5:0*/ __Vtask_tb_axi_lite_regs__DOT__axi_read__1__addr;
    __Vtask_tb_axi_lite_regs__DOT__axi_read__1__addr = 0;
    CData/*5:0*/ __Vtask_tb_axi_lite_regs__DOT__axi_write__2__addr;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__2__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi_lite_regs__DOT__axi_write__2__data;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__2__data = 0;
    CData/*5:0*/ __Vtask_tb_axi_lite_regs__DOT__axi_read__3__addr;
    __Vtask_tb_axi_lite_regs__DOT__axi_read__3__addr = 0;
    CData/*5:0*/ __Vtask_tb_axi_lite_regs__DOT__axi_write__4__addr;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__4__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi_lite_regs__DOT__axi_write__4__data;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__4__data = 0;
    CData/*5:0*/ __Vtask_tb_axi_lite_regs__DOT__axi_read__5__addr;
    __Vtask_tb_axi_lite_regs__DOT__axi_read__5__addr = 0;
    CData/*5:0*/ __Vtask_tb_axi_lite_regs__DOT__axi_write__6__addr;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__6__addr = 0;
    IData/*31:0*/ __Vtask_tb_axi_lite_regs__DOT__axi_write__6__data;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__6__data = 0;
    CData/*5:0*/ __Vtask_tb_axi_lite_regs__DOT__axi_read__7__addr;
    __Vtask_tb_axi_lite_regs__DOT__axi_read__7__addr = 0;
    // Body
    vlSelfRef.tb_axi_lite_regs__DOT__aresetn = 0U;
    vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awaddr = 0U;
    vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awvalid = 0U;
    vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wdata = 0U;
    vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wstrb = 0U;
    vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wvalid = 0U;
    vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bready = 0U;
    vlSelfRef.tb_axi_lite_regs__DOT__s_axi_araddr = 0U;
    vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arvalid = 0U;
    vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rready = 0U;
    VL_WRITEF_NX("\n######################################\n# AXI-LITE REGISTER TEST\n######################################\n",0);
    tb_axi_lite_regs__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, tb_axi_lite_regs__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                                "@(posedge tb_axi_lite_regs.aclk)");
        co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi_lite_regs.aclk)", 
                                                             "tb_axi_lite_regs.v", 
                                                             217);
        tb_axi_lite_regs__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (tb_axi_lite_regs__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.tb_axi_lite_regs__DOT__aresetn = 1U;
    VL_WRITEF_NX("RESET RELEASED\n",0);
    __Vtask_tb_axi_lite_regs__DOT__axi_write__0__data = 0x12345678U;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__0__addr = 0U;
    tb_axi_lite_regs__DOT__axi_write__Vstatic__addr 
        = __Vtask_tb_axi_lite_regs__DOT__axi_write__0__addr;
    tb_axi_lite_regs__DOT__axi_write__Vstatic__data 
        = __Vtask_tb_axi_lite_regs__DOT__axi_write__0__data;
    VL_WRITEF_NX("\n======================================\nAXI WRITE\nADDR = 0x%08h\nDATA = 0x%08h\n======================================\n",2
                 , '#',6,tb_axi_lite_regs__DOT__axi_write__Vstatic__addr
                 , '#',32,tb_axi_lite_regs__DOT__axi_write__Vstatic__data);
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         94);
    vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v0 
        = tb_axi_lite_regs__DOT__axi_write__Vstatic__addr;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v0 = 1U;
    vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v0 
        = tb_axi_lite_regs__DOT__axi_write__Vstatic__data;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v0 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h2bfb65d7__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_awready)");
        co_await vlSelfRef.__VtrigSched_h2bfb65d7__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_awready)", 
                                                             "tb_axi_lite_regs.v", 
                                                             105);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         107);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v1 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h7e7bb800__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_wready)");
        co_await vlSelfRef.__VtrigSched_h7e7bb800__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_wready)", 
                                                             "tb_axi_lite_regs.v", 
                                                             112);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         114);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v0 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h08d6aa6d__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_bvalid)");
        co_await vlSelfRef.__VtrigSched_h08d6aa6d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_bvalid)", 
                                                             "tb_axi_lite_regs.v", 
                                                             121);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         123);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v1 = 1U;
    __Vtask_tb_axi_lite_regs__DOT__axi_read__1__addr = 0U;
    tb_axi_lite_regs__DOT__axi_read__Vstatic__addr 
        = __Vtask_tb_axi_lite_regs__DOT__axi_read__1__addr;
    if ((0U == (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bresp))) {
        VL_WRITEF_NX("WRITE RESPONSE: OKAY\n",0);
    } else {
        VL_WRITEF_NX("WRITE RESPONSE ERROR: %b\n",1
                     , '#',2,vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bresp);
    }
    VL_WRITEF_NX("\n======================================\nAXI READ\nADDR = 0x%08h\n======================================\n",1
                 , '#',6,tb_axi_lite_regs__DOT__axi_read__Vstatic__addr);
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         154);
    vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v0 
        = tb_axi_lite_regs__DOT__axi_read__Vstatic__addr;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v0 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v0 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h259b3b27__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_arready)");
        co_await vlSelfRef.__VtrigSched_h259b3b27__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_arready)", 
                                                             "tb_axi_lite_regs.v", 
                                                             159);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         161);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v0 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h2efec67d__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_rvalid)");
        co_await vlSelfRef.__VtrigSched_h2efec67d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_rvalid)", 
                                                             "tb_axi_lite_regs.v", 
                                                             167);
    }
    vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__data 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rdata;
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         171);
    VL_WRITEF_NX("READ DATA = 0x%08h\n",1, '#',32,vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__data);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v1 = 1U;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__2__data = 0xdeadbeefU;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__2__addr = 4U;
    tb_axi_lite_regs__DOT__axi_write__Vstatic__addr 
        = __Vtask_tb_axi_lite_regs__DOT__axi_write__2__addr;
    tb_axi_lite_regs__DOT__axi_write__Vstatic__data 
        = __Vtask_tb_axi_lite_regs__DOT__axi_write__2__data;
    if ((0U == (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rresp))) {
        VL_WRITEF_NX("READ RESPONSE: OKAY\n",0);
    } else {
        VL_WRITEF_NX("READ RESPONSE ERROR: %b\n",1, '#',2,vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rresp);
    }
    VL_WRITEF_NX("\n======================================\nAXI WRITE\nADDR = 0x%08h\nDATA = 0x%08h\n======================================\n",2
                 , '#',6,tb_axi_lite_regs__DOT__axi_write__Vstatic__addr
                 , '#',32,tb_axi_lite_regs__DOT__axi_write__Vstatic__data);
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         94);
    vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v1 
        = tb_axi_lite_regs__DOT__axi_write__Vstatic__addr;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v2 = 1U;
    vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v1 
        = tb_axi_lite_regs__DOT__axi_write__Vstatic__data;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v2 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h2bfb65d7__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_awready)");
        co_await vlSelfRef.__VtrigSched_h2bfb65d7__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_awready)", 
                                                             "tb_axi_lite_regs.v", 
                                                             105);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         107);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v3 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h7e7bb800__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_wready)");
        co_await vlSelfRef.__VtrigSched_h7e7bb800__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_wready)", 
                                                             "tb_axi_lite_regs.v", 
                                                             112);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         114);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v3 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v2 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h08d6aa6d__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_bvalid)");
        co_await vlSelfRef.__VtrigSched_h08d6aa6d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_bvalid)", 
                                                             "tb_axi_lite_regs.v", 
                                                             121);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         123);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v3 = 1U;
    __Vtask_tb_axi_lite_regs__DOT__axi_read__3__addr = 4U;
    tb_axi_lite_regs__DOT__axi_read__Vstatic__addr 
        = __Vtask_tb_axi_lite_regs__DOT__axi_read__3__addr;
    if ((0U == (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bresp))) {
        VL_WRITEF_NX("WRITE RESPONSE: OKAY\n",0);
    } else {
        VL_WRITEF_NX("WRITE RESPONSE ERROR: %b\n",1
                     , '#',2,vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bresp);
    }
    VL_WRITEF_NX("\n======================================\nAXI READ\nADDR = 0x%08h\n======================================\n",1
                 , '#',6,tb_axi_lite_regs__DOT__axi_read__Vstatic__addr);
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         154);
    vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v1 
        = tb_axi_lite_regs__DOT__axi_read__Vstatic__addr;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v1 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v2 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h259b3b27__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_arready)");
        co_await vlSelfRef.__VtrigSched_h259b3b27__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_arready)", 
                                                             "tb_axi_lite_regs.v", 
                                                             159);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         161);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v3 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v2 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h2efec67d__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_rvalid)");
        co_await vlSelfRef.__VtrigSched_h2efec67d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_rvalid)", 
                                                             "tb_axi_lite_regs.v", 
                                                             167);
    }
    vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__data 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rdata;
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         171);
    VL_WRITEF_NX("READ DATA = 0x%08h\n",1, '#',32,vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__data);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v3 = 1U;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__4__data = 0xcafebabeU;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__4__addr = 8U;
    tb_axi_lite_regs__DOT__axi_write__Vstatic__addr 
        = __Vtask_tb_axi_lite_regs__DOT__axi_write__4__addr;
    tb_axi_lite_regs__DOT__axi_write__Vstatic__data 
        = __Vtask_tb_axi_lite_regs__DOT__axi_write__4__data;
    if ((0U == (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rresp))) {
        VL_WRITEF_NX("READ RESPONSE: OKAY\n",0);
    } else {
        VL_WRITEF_NX("READ RESPONSE ERROR: %b\n",1, '#',2,vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rresp);
    }
    VL_WRITEF_NX("\n======================================\nAXI WRITE\nADDR = 0x%08h\nDATA = 0x%08h\n======================================\n",2
                 , '#',6,tb_axi_lite_regs__DOT__axi_write__Vstatic__addr
                 , '#',32,tb_axi_lite_regs__DOT__axi_write__Vstatic__data);
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         94);
    vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v2 
        = tb_axi_lite_regs__DOT__axi_write__Vstatic__addr;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v4 = 1U;
    vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v2 
        = tb_axi_lite_regs__DOT__axi_write__Vstatic__data;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v4 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h2bfb65d7__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_awready)");
        co_await vlSelfRef.__VtrigSched_h2bfb65d7__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_awready)", 
                                                             "tb_axi_lite_regs.v", 
                                                             105);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         107);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v5 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h7e7bb800__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_wready)");
        co_await vlSelfRef.__VtrigSched_h7e7bb800__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_wready)", 
                                                             "tb_axi_lite_regs.v", 
                                                             112);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         114);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v4 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h08d6aa6d__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_bvalid)");
        co_await vlSelfRef.__VtrigSched_h08d6aa6d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_bvalid)", 
                                                             "tb_axi_lite_regs.v", 
                                                             121);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         123);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v5 = 1U;
    __Vtask_tb_axi_lite_regs__DOT__axi_read__5__addr = 8U;
    tb_axi_lite_regs__DOT__axi_read__Vstatic__addr 
        = __Vtask_tb_axi_lite_regs__DOT__axi_read__5__addr;
    if ((0U == (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bresp))) {
        VL_WRITEF_NX("WRITE RESPONSE: OKAY\n",0);
    } else {
        VL_WRITEF_NX("WRITE RESPONSE ERROR: %b\n",1
                     , '#',2,vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bresp);
    }
    VL_WRITEF_NX("\n======================================\nAXI READ\nADDR = 0x%08h\n======================================\n",1
                 , '#',6,tb_axi_lite_regs__DOT__axi_read__Vstatic__addr);
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         154);
    vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v2 
        = tb_axi_lite_regs__DOT__axi_read__Vstatic__addr;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v2 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v4 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h259b3b27__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_arready)");
        co_await vlSelfRef.__VtrigSched_h259b3b27__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_arready)", 
                                                             "tb_axi_lite_regs.v", 
                                                             159);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         161);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v5 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v4 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h2efec67d__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_rvalid)");
        co_await vlSelfRef.__VtrigSched_h2efec67d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_rvalid)", 
                                                             "tb_axi_lite_regs.v", 
                                                             167);
    }
    vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__data 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rdata;
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         171);
    VL_WRITEF_NX("READ DATA = 0x%08h\n",1, '#',32,vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__data);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v5 = 1U;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__6__data = 0xa5a5a5a5U;
    __Vtask_tb_axi_lite_regs__DOT__axi_write__6__addr = 0x0cU;
    tb_axi_lite_regs__DOT__axi_write__Vstatic__addr 
        = __Vtask_tb_axi_lite_regs__DOT__axi_write__6__addr;
    tb_axi_lite_regs__DOT__axi_write__Vstatic__data 
        = __Vtask_tb_axi_lite_regs__DOT__axi_write__6__data;
    if ((0U == (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rresp))) {
        VL_WRITEF_NX("READ RESPONSE: OKAY\n",0);
    } else {
        VL_WRITEF_NX("READ RESPONSE ERROR: %b\n",1, '#',2,vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rresp);
    }
    VL_WRITEF_NX("\n======================================\nAXI WRITE\nADDR = 0x%08h\nDATA = 0x%08h\n======================================\n",2
                 , '#',6,tb_axi_lite_regs__DOT__axi_write__Vstatic__addr
                 , '#',32,tb_axi_lite_regs__DOT__axi_write__Vstatic__data);
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         94);
    vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v3 
        = tb_axi_lite_regs__DOT__axi_write__Vstatic__addr;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v3 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v6 = 1U;
    vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v3 
        = tb_axi_lite_regs__DOT__axi_write__Vstatic__data;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v3 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v3 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v6 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h2bfb65d7__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_awready)");
        co_await vlSelfRef.__VtrigSched_h2bfb65d7__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_awready)", 
                                                             "tb_axi_lite_regs.v", 
                                                             105);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         107);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v7 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h7e7bb800__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_wready)");
        co_await vlSelfRef.__VtrigSched_h7e7bb800__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_wready)", 
                                                             "tb_axi_lite_regs.v", 
                                                             112);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         114);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v7 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v6 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h08d6aa6d__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_bvalid)");
        co_await vlSelfRef.__VtrigSched_h08d6aa6d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_bvalid)", 
                                                             "tb_axi_lite_regs.v", 
                                                             121);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         123);
    if ((0U == (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bresp))) {
        VL_WRITEF_NX("WRITE RESPONSE: OKAY\n",0);
    } else {
        VL_WRITEF_NX("WRITE RESPONSE ERROR: %b\n",1
                     , '#',2,vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bresp);
    }
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v7 = 1U;
    __Vtask_tb_axi_lite_regs__DOT__axi_read__7__addr = 0x0cU;
    tb_axi_lite_regs__DOT__axi_read__Vstatic__addr 
        = __Vtask_tb_axi_lite_regs__DOT__axi_read__7__addr;
    VL_WRITEF_NX("\n======================================\nAXI READ\nADDR = 0x%08h\n======================================\n",1
                 , '#',6,tb_axi_lite_regs__DOT__axi_read__Vstatic__addr);
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         154);
    vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v3 
        = tb_axi_lite_regs__DOT__axi_read__Vstatic__addr;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v3 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v6 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h259b3b27__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_arready)");
        co_await vlSelfRef.__VtrigSched_h259b3b27__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_arready)", 
                                                             "tb_axi_lite_regs.v", 
                                                             159);
    }
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         161);
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v7 = 1U;
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v6 = 1U;
    while ((1U & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid)))) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h2efec67d__0(vlSelf, 
                                                                "@( tb_axi_lite_regs.s_axi_rvalid)");
        co_await vlSelfRef.__VtrigSched_h2efec67d__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( tb_axi_lite_regs.s_axi_rvalid)", 
                                                             "tb_axi_lite_regs.v", 
                                                             167);
    }
    vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__data 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rdata;
    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                            "@(posedge tb_axi_lite_regs.aclk)");
    co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_axi_lite_regs.aclk)", 
                                                         "tb_axi_lite_regs.v", 
                                                         171);
    VL_WRITEF_NX("READ DATA = 0x%08h\n",1, '#',32,vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__data);
    if ((0U == (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rresp))) {
        VL_WRITEF_NX("READ RESPONSE: OKAY\n",0);
    } else {
        VL_WRITEF_NX("READ RESPONSE ERROR: %b\n",1, '#',2,vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rresp);
    }
    vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v7 = 1U;
    tb_axi_lite_regs__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, tb_axi_lite_regs__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(vlSelf, 
                                                                "@(posedge tb_axi_lite_regs.aclk)");
        co_await vlSelfRef.__VtrigSched_h06e01d25__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_axi_lite_regs.aclk)", 
                                                             "tb_axi_lite_regs.v", 
                                                             260);
        tb_axi_lite_regs__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (tb_axi_lite_regs__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_WRITEF_NX("\n######################################\n# TEST FINISHED\n######################################\n",0);
    VL_FINISH_MT("tb_axi_lite_regs.v", 267, "");
    co_return;
}

bool Vtb_axi_lite_regs___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___trigger_anySet__ico\n"); );
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

bool Vtb_axi_lite_regs___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___trigger_anySet__act\n"); );
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

void Vtb_axi_lite_regs___024root___nba_sequent__TOP__0(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___nba_sequent__TOP__0\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*5:0*/ __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg;
    __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg = 0;
    CData/*0:0*/ __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid;
    __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid = 0;
    IData/*31:0*/ __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_reg;
    __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_reg = 0;
    CData/*3:0*/ __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg;
    __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg = 0;
    CData/*0:0*/ __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_valid;
    __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_valid = 0;
    CData/*0:0*/ __Vdly__tb_axi_lite_regs__DOT__s_axi_bvalid;
    __Vdly__tb_axi_lite_regs__DOT__s_axi_bvalid = 0;
    CData/*0:0*/ __Vdly__tb_axi_lite_regs__DOT__s_axi_rvalid;
    __Vdly__tb_axi_lite_regs__DOT__s_axi_rvalid = 0;
    // Body
    __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg 
        = vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg;
    __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid 
        = vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid;
    __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_reg 
        = vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg;
    __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg 
        = vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg;
    __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_valid 
        = vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_valid;
    __Vdly__tb_axi_lite_regs__DOT__s_axi_bvalid = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid;
    __Vdly__tb_axi_lite_regs__DOT__s_axi_rvalid = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid;
    if (vlSelfRef.tb_axi_lite_regs__DOT__aresetn) {
        if (vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid) {
            vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready = 0U;
        } else {
            vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready = 1U;
            if (vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arvalid) {
                vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rdata 
                    = ((0x00000020U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_araddr))
                        ? 0U : ((0x00000010U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_araddr))
                                 ? 0U : ((8U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_araddr))
                                          ? ((4U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_araddr))
                                              ? vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg3
                                              : vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg2)
                                          : ((4U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_araddr))
                                              ? vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg1
                                              : vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg0))));
                vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rresp = 0U;
                __Vdly__tb_axi_lite_regs__DOT__s_axi_rvalid = 1U;
                vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready = 0U;
            }
        }
        if (((IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid) 
             & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rready))) {
            __Vdly__tb_axi_lite_regs__DOT__s_axi_rvalid = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid)) 
                   & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid))))) {
            vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready = 1U;
            if (vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awvalid) {
                __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg 
                    = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awaddr;
                __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid = 1U;
                vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready = 0U;
            }
        } else {
            vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready = 0U;
        }
        if ((1U & ((~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_valid)) 
                   & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid))))) {
            vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready = 1U;
            if (vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wvalid) {
                __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_reg 
                    = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wdata;
                __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg 
                    = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wstrb;
                __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_valid = 1U;
                vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready = 0U;
            }
        } else {
            vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready = 0U;
        }
        if ((((IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid) 
              & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_valid)) 
             & (~ (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid)))) {
            if ((1U & (~ ((IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg) 
                          >> 5U)))) {
                if ((1U & (~ ((IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg) 
                              >> 4U)))) {
                    if ((8U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg))) {
                        if ((4U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg))) {
                            if ((1U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                                vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg3 
                                    = ((0xffffff00U 
                                        & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg3) 
                                       | (0x000000ffU 
                                          & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                            }
                            if ((2U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                                vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg3 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg3) 
                                       | (0x0000ff00U 
                                          & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                            }
                            if ((4U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                                vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg3 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg3) 
                                       | (0x00ff0000U 
                                          & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                            }
                            if ((8U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                                vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg3 
                                    = ((0x00ffffffU 
                                        & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg3) 
                                       | (0xff000000U 
                                          & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                            }
                        } else {
                            if ((1U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                                vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg2 
                                    = ((0xffffff00U 
                                        & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg2) 
                                       | (0x000000ffU 
                                          & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                            }
                            if ((2U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                                vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg2 
                                    = ((0xffff00ffU 
                                        & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg2) 
                                       | (0x0000ff00U 
                                          & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                            }
                            if ((4U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                                vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg2 
                                    = ((0xff00ffffU 
                                        & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg2) 
                                       | (0x00ff0000U 
                                          & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                            }
                            if ((8U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                                vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg2 
                                    = ((0x00ffffffU 
                                        & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg2) 
                                       | (0xff000000U 
                                          & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                            }
                        }
                    } else if ((4U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg))) {
                        if ((1U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                            vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg1 
                                = ((0xffffff00U & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg1) 
                                   | (0x000000ffU & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                        }
                        if ((2U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                            vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg1 
                                = ((0xffff00ffU & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg1) 
                                   | (0x0000ff00U & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                        }
                        if ((4U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                            vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg1 
                                = ((0xff00ffffU & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg1) 
                                   | (0x00ff0000U & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                        }
                        if ((8U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                            vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg1 
                                = ((0x00ffffffU & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg1) 
                                   | (0xff000000U & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                        }
                    } else {
                        if ((1U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                            vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg0 
                                = ((0xffffff00U & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg0) 
                                   | (0x000000ffU & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                        }
                        if ((2U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                            vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg0 
                                = ((0xffff00ffU & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg0) 
                                   | (0x0000ff00U & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                        }
                        if ((4U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                            vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg0 
                                = ((0xff00ffffU & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg0) 
                                   | (0x00ff0000U & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                        }
                        if ((8U & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg))) {
                            vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg0 
                                = ((0x00ffffffU & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg0) 
                                   | (0xff000000U & vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg));
                        }
                    }
                }
            }
            vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bresp = 0U;
            __Vdly__tb_axi_lite_regs__DOT__s_axi_bvalid = 1U;
            __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid = 0U;
            __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_valid = 0U;
        }
        if (((IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid) 
             & (IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bready))) {
            __Vdly__tb_axi_lite_regs__DOT__s_axi_bvalid = 0U;
        }
    } else {
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready = 0U;
        __Vdly__tb_axi_lite_regs__DOT__s_axi_rvalid = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rdata = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rresp = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready = 0U;
        __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg = 0U;
        __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid = 0U;
        __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_reg = 0U;
        __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg = 0U;
        __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_valid = 0U;
        __Vdly__tb_axi_lite_regs__DOT__s_axi_bvalid = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bresp = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg0 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg1 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg2 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg3 = 0U;
    }
    vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid = __Vdly__tb_axi_lite_regs__DOT__s_axi_rvalid;
    vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg 
        = __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg;
    vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid 
        = __Vdly__tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid;
    vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg 
        = __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_reg;
    vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg 
        = __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg;
    vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_valid 
        = __Vdly__tb_axi_lite_regs__DOT__dut__DOT__wdata_valid;
    vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid = __Vdly__tb_axi_lite_regs__DOT__s_axi_bvalid;
}

void Vtb_axi_lite_regs___024root___nba_sequent__TOP__1(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___nba_sequent__TOP__1\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v0) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v0 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_araddr 
            = vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v0;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v1) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v1 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_araddr 
            = vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v1;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v2) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v2 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_araddr 
            = vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v2;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v3) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v3 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_araddr 
            = vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v3;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v0) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v0 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v1) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v1 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v2) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v2 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v3) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v3 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v4) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v4 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v5) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v5 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v6) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v6 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v7) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v7 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v0) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v0 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rready = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v1) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v1 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rready = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v2) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v2 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rready = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v3) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v3 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rready = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v4) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v4 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rready = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v5) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v5 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rready = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v6) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v6 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rready = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v7) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v7 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rready = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v0) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v0 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wstrb = 0x0fU;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v1) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v1 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wstrb = 0x0fU;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v2) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v2 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wstrb = 0x0fU;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v3) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v3 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wstrb = 0x0fU;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v0) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v0 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awaddr 
            = vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v0;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v1) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v1 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awaddr 
            = vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v1;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v2) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v2 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awaddr 
            = vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v2;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v3) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v3 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awaddr 
            = vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v3;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v0) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v0 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wdata 
            = vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v0;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v1) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v1 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wdata 
            = vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v1;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v2) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v2 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wdata 
            = vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v2;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v3) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v3 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wdata 
            = vlSelfRef.__VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v3;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v0) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v0 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v1) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v1 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v2) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v2 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v3) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v3 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v4) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v4 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v5) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v5 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v6) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v6 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v7) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v7 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v0) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v0 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v1) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v1 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v2) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v2 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v3) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v3 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v4) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v4 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v5) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v5 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v6) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v6 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wvalid = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v7) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v7 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wvalid = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v0) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v0 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bready = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v1) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v1 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bready = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v2) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v2 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bready = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v3) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v3 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bready = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v4) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v4 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bready = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v5) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v5 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bready = 0U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v6) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v6 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bready = 1U;
    }
    if (vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v7) {
        vlSelfRef.__VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v7 = 0U;
        vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bready = 0U;
    }
}

void Vtb_axi_lite_regs___024root___timing_ready(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___timing_ready\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h06e01d25__0.ready("@(posedge tb_axi_lite_regs.aclk)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h2bfb65d7__0.ready("@( tb_axi_lite_regs.s_axi_awready)");
    }
    if ((0x0000000000000020ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7e7bb800__0.ready("@( tb_axi_lite_regs.s_axi_wready)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h08d6aa6d__0.ready("@( tb_axi_lite_regs.s_axi_bvalid)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h259b3b27__0.ready("@( tb_axi_lite_regs.s_axi_arready)");
    }
    if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h2efec67d__0.ready("@( tb_axi_lite_regs.s_axi_rvalid)");
    }
}

void Vtb_axi_lite_regs___024root___timing_resume(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___timing_resume\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h06e01d25__0.moveToResumeQueue(
                                                          "@(posedge tb_axi_lite_regs.aclk)");
    vlSelfRef.__VtrigSched_h2bfb65d7__0.moveToResumeQueue(
                                                          "@( tb_axi_lite_regs.s_axi_awready)");
    vlSelfRef.__VtrigSched_h7e7bb800__0.moveToResumeQueue(
                                                          "@( tb_axi_lite_regs.s_axi_wready)");
    vlSelfRef.__VtrigSched_h08d6aa6d__0.moveToResumeQueue(
                                                          "@( tb_axi_lite_regs.s_axi_bvalid)");
    vlSelfRef.__VtrigSched_h259b3b27__0.moveToResumeQueue(
                                                          "@( tb_axi_lite_regs.s_axi_arready)");
    vlSelfRef.__VtrigSched_h2efec67d__0.moveToResumeQueue(
                                                          "@( tb_axi_lite_regs.s_axi_rvalid)");
    vlSelfRef.__VtrigSched_h06e01d25__0.resume("@(posedge tb_axi_lite_regs.aclk)");
    vlSelfRef.__VtrigSched_h2bfb65d7__0.resume("@( tb_axi_lite_regs.s_axi_awready)");
    vlSelfRef.__VtrigSched_h7e7bb800__0.resume("@( tb_axi_lite_regs.s_axi_wready)");
    vlSelfRef.__VtrigSched_h08d6aa6d__0.resume("@( tb_axi_lite_regs.s_axi_bvalid)");
    vlSelfRef.__VtrigSched_h259b3b27__0.resume("@( tb_axi_lite_regs.s_axi_arready)");
    vlSelfRef.__VtrigSched_h2efec67d__0.resume("@( tb_axi_lite_regs.s_axi_rvalid)");
    if ((0x0000000000000040ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_axi_lite_regs___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_axi_lite_regs___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

void Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0(Vtb_axi_lite_regs___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root____VbeforeTrig_h06e01d25__0\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.tb_axi_lite_regs__DOT__aclk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__aclk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__aclk__0 
        = vlSelfRef.tb_axi_lite_regs__DOT__aclk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h06e01d25__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi_lite_regs___024root____VbeforeTrig_h2bfb65d7__0(Vtb_axi_lite_regs___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root____VbeforeTrig_h2bfb65d7__0\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_awready__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_awready__0 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h2bfb65d7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2bfb65d7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2bfb65d7__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2bfb65d7__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi_lite_regs___024root____VbeforeTrig_h7e7bb800__0(Vtb_axi_lite_regs___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root____VbeforeTrig_h7e7bb800__0\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_wready__0)) 
                                  << 5U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_wready__0 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready;
    if ((0x0000000000000020ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7e7bb800__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7e7bb800__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7e7bb800__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h7e7bb800__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi_lite_regs___024root____VbeforeTrig_h08d6aa6d__0(Vtb_axi_lite_regs___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root____VbeforeTrig_h08d6aa6d__0\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_bvalid__0)) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_bvalid__0 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h08d6aa6d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h08d6aa6d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h08d6aa6d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h08d6aa6d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi_lite_regs___024root____VbeforeTrig_h259b3b27__0(Vtb_axi_lite_regs___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root____VbeforeTrig_h259b3b27__0\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_arready__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_arready__0 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h259b3b27__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h259b3b27__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h259b3b27__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h259b3b27__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vtb_axi_lite_regs___024root____VbeforeTrig_h2efec67d__0(Vtb_axi_lite_regs___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root____VbeforeTrig_h2efec67d__0\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_rvalid__0)) 
                                  << 4U)));
    vlSelfRef.__Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_rvalid__0 
        = vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid;
    if ((0x0000000000000010ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h2efec67d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2efec67d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2efec67d__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h2efec67d__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vtb_axi_lite_regs___024root___eval_debug_assertions(Vtb_axi_lite_regs___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root___eval_debug_assertions\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
