// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rv32i_core.h for the primary calling header

#include "Vtb_rv32i_core__pch.h"

VlCoroutine Vtb_rv32i_core___024root___eval_initial__TOP__Vtiming__0(Vtb_rv32i_core___024root* vlSelf);
VlCoroutine Vtb_rv32i_core___024root___eval_initial__TOP__Vtiming__1(Vtb_rv32i_core___024root* vlSelf);

void Vtb_rv32i_core___024root___eval_initial(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_initial\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_rv32i_core___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_rv32i_core___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vtb_rv32i_core___024root___eval_sample(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_sample\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rv32i_core___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vtb_rv32i_core___024root___eval_ico(Vtb_rv32i_core___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_ico\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_rv32i_core___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vtb_rv32i_core___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rv32i_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vtb_rv32i_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vtb_rv32i_core___024root___eval_act(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_act\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 1U) 
                                                         | ((IData)(vlSelfRef.tb_rv32i_core__DOT__clk) 
                                                            & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_rv32i_core__DOT__clk__0))))));
        vlSelfRef.__Vtrigprevexpr___TOP__tb_rv32i_core__DOT__clk__0 
            = vlSelfRef.tb_rv32i_core__DOT__clk;
    }
    Vtb_rv32i_core___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_rv32i_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vtb_rv32i_core___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vtb_rv32i_core___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
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

bool Vtb_rv32i_core___024root___eval_inact(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_inact\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb_rv32i_core.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vtb_rv32i_core___024root___nba_sequent__TOP__0(Vtb_rv32i_core___024root* vlSelf);
void Vtb_rv32i_core___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vtb_rv32i_core___024root___eval_nba(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_nba\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vtb_rv32i_core___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
                Vtb_rv32i_core___024root___nba_sequent__TOP__0(vlSelf);
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
        }
        Vtb_rv32i_core___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vtb_rv32i_core___024root___eval_obs(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_obs\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vtb_rv32i_core___024root___eval_react(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_react\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vtb_rv32i_core___024root___eval_postponed(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_postponed\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vtb_rv32i_core___024root___eval_initial__TOP__Vtiming__0(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSymsp->_vm_contextp__->dumpfile("rv32i_core.vcd"s);
    vlSymsp->_traceDumpOpen();
    vlSelfRef.tb_rv32i_core__DOT__clk = 0U;
    vlSelfRef.tb_rv32i_core__DOT__reset = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb_rv32i_core.v", 
                                         121);
    vlSelfRef.tb_rv32i_core__DOT__reset = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000030d40ULL, 
                                         nullptr, "tb_rv32i_core.v", 
                                         125);
    VL_WRITEF_NX("----------------------------------\nRV32I simulation finished\n----------------------------------\nx1 = %d\nx2 = %d\nx3 = %d\nx4 = %d\nx5 = %d\nx6 = %d\nx7 = %d\n",7
                 , '#',32,vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[1U]
                 , '#',32,vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[2U]
                 , '#',32,vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[3U]
                 , '#',32,vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[4U]
                 , '#',32,vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[5U]
                 , '#',32,vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[6U]
                 , '#',32,vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[7U]);
    VL_FINISH_MT("tb_rv32i_core.v", 139, "");
    co_return;
}

VlCoroutine Vtb_rv32i_core___024root___eval_initial__TOP__Vtiming__1(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb_rv32i_core.v", 
                                             49);
        vlSelfRef.tb_rv32i_core__DOT__clk = (1U & (~ (IData)(vlSelfRef.tb_rv32i_core__DOT__clk)));
    }
    co_return;
}

bool Vtb_rv32i_core___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___trigger_anySet__ico\n"); );
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

bool Vtb_rv32i_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___trigger_anySet__act\n"); );
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

extern const VlWide<18>/*575:0*/ Vtb_rv32i_core__ConstPool__CONST_hd45c95f9_0;
extern const VlUnpacked<IData/*31:0*/, 9> Vtb_rv32i_core__ConstPool__TABLE_hb522d5d0_0;

void Vtb_rv32i_core___024root___nba_sequent__TOP__0(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___nba_sequent__TOP__0\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    IData/*31:0*/ __Vdly__tb_rv32i_core__DOT__dut__DOT__pc;
    __Vdly__tb_rv32i_core__DOT__dut__DOT__pc = 0;
    CData/*0:0*/ __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v0;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v32;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v32 = 0;
    IData/*31:0*/ __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v33;
    __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v33 = 0;
    CData/*4:0*/ __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v33;
    __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v33 = 0;
    CData/*0:0*/ __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v33;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v33 = 0;
    IData/*31:0*/ __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v34;
    __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v34 = 0;
    CData/*4:0*/ __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v34;
    __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v34 = 0;
    CData/*0:0*/ __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v34;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v34 = 0;
    IData/*31:0*/ __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v35;
    __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v35 = 0;
    CData/*4:0*/ __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v35;
    __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v35 = 0;
    CData/*0:0*/ __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v35;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v35 = 0;
    IData/*31:0*/ __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v36;
    __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v36 = 0;
    CData/*4:0*/ __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v36;
    __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v36 = 0;
    CData/*0:0*/ __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v36;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v36 = 0;
    IData/*31:0*/ __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v37;
    __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v37 = 0;
    CData/*4:0*/ __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v37;
    __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v37 = 0;
    CData/*0:0*/ __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v37;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v37 = 0;
    IData/*31:0*/ __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v38;
    __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v38 = 0;
    CData/*4:0*/ __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v38;
    __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v38 = 0;
    CData/*0:0*/ __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v38;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v38 = 0;
    CData/*4:0*/ __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v39;
    __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v39 = 0;
    CData/*0:0*/ __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v39;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v39 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v0 = 0U;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v32 = 0U;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v33 = 0U;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v34 = 0U;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v35 = 0U;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v36 = 0U;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v37 = 0U;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v38 = 0U;
    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v39 = 0U;
    __Vdly__tb_rv32i_core__DOT__dut__DOT__pc = vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc;
    if (vlSelfRef.tb_rv32i_core__DOT__reset) {
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__i = 0x00000020U;
        __Vdly__tb_rv32i_core__DOT__dut__DOT__pc = 0U;
        __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v0 = 1U;
        vlSelfRef.tb_rv32i_core__DOT__dmem_write = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dmem_valid = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dmem_wstrb = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dmem_addr = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dmem_wdata = 0U;
    } else {
        __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v32 = 1U;
        if ((0x00000040U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
            if ((0x00000020U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                if ((0x00000010U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                    __Vdly__tb_rv32i_core__DOT__dut__DOT__pc 
                        = ((IData)(4U) + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc);
                } else if ((8U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                    if ((4U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                        if ((2U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                            if ((1U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                                if ((0U != (0x0000001fU 
                                            & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                               >> 7U)))) {
                                    __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v33 
                                        = ((IData)(4U) 
                                           + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc);
                                    __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v33 
                                        = (0x0000001fU 
                                           & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                              >> 7U));
                                    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v33 = 1U;
                                }
                                __Vdly__tb_rv32i_core__DOT__dut__DOT__pc 
                                    = (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc 
                                       + ((((0x00000ffeU 
                                             & ((- (IData)(
                                                           (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                            >> 0x0000001fU))) 
                                                << 1U)) 
                                            | (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                               >> 0x0000001fU)) 
                                           << 0x00000014U) 
                                          | ((((0x000001feU 
                                                & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                   >> 0x0000000bU)) 
                                               | (1U 
                                                  & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                     >> 0x00000014U))) 
                                              << 0x0000000bU) 
                                             | (0x000007feU 
                                                & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                   >> 0x00000014U)))));
                            } else {
                                __Vdly__tb_rv32i_core__DOT__dut__DOT__pc 
                                    = ((IData)(4U) 
                                       + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc);
                            }
                        } else {
                            __Vdly__tb_rv32i_core__DOT__dut__DOT__pc 
                                = ((IData)(4U) + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc);
                        }
                    } else {
                        __Vdly__tb_rv32i_core__DOT__dut__DOT__pc 
                            = ((IData)(4U) + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc);
                    }
                } else if ((4U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                    if ((2U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                        if ((1U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                            if ((0U != (0x0000001fU 
                                        & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                           >> 7U)))) {
                                __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v34 
                                    = ((IData)(4U) 
                                       + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc);
                                __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v34 
                                    = (0x0000001fU 
                                       & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                          >> 7U));
                                __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v34 = 1U;
                            }
                            __Vdly__tb_rv32i_core__DOT__dut__DOT__pc 
                                = (0xfffffffeU & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                                                  + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imm_I));
                        } else {
                            __Vdly__tb_rv32i_core__DOT__dut__DOT__pc 
                                = ((IData)(4U) + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc);
                        }
                    } else {
                        __Vdly__tb_rv32i_core__DOT__dut__DOT__pc 
                            = ((IData)(4U) + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc);
                    }
                } else {
                    __Vdly__tb_rv32i_core__DOT__dut__DOT__pc 
                        = ((2U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
                            ? ((1U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
                                ? ((0U == (7U & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                 >> 0x0000000cU)))
                                    ? ((vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                                        == vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs2_data)
                                        ? (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc 
                                           + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imm_B)
                                        : ((IData)(4U) 
                                           + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc))
                                    : ((1U == (7U & 
                                               (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                >> 0x0000000cU)))
                                        ? ((vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                                            != vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs2_data)
                                            ? (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc 
                                               + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imm_B)
                                            : ((IData)(4U) 
                                               + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc))
                                        : ((IData)(4U) 
                                           + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc)))
                                : ((IData)(4U) + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc))
                            : ((IData)(4U) + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc));
                }
            } else {
                __Vdly__tb_rv32i_core__DOT__dut__DOT__pc 
                    = ((IData)(4U) + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc);
            }
        } else {
            if ((0x00000020U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                if ((0x00000010U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                    if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                  >> 3U)))) {
                        if ((4U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                            if ((2U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                                if ((1U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                                    if ((0U != (0x0000001fU 
                                                & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                   >> 7U)))) {
                                        __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v35 
                                            = (0xfffff000U 
                                               & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata);
                                        __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v35 
                                            = (0x0000001fU 
                                               & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                  >> 7U));
                                        __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v35 = 1U;
                                    }
                                }
                            }
                        } else if ((2U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                            if ((1U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                                if ((0U != (0x0000001fU 
                                            & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                               >> 7U)))) {
                                    __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v36 
                                        = vlSelfRef.tb_rv32i_core__DOT__dut__DOT__alu_result;
                                    __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v36 
                                        = (0x0000001fU 
                                           & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                              >> 7U));
                                    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v36 = 1U;
                                }
                            }
                        }
                    }
                }
            } else if ((0x00000010U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                              >> 3U)))) {
                    if ((4U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                        if ((2U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                            if ((1U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                                if ((0U != (0x0000001fU 
                                            & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                               >> 7U)))) {
                                    __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v37 
                                        = (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc 
                                           + (0xfffff000U 
                                              & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata));
                                    __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v37 
                                        = (0x0000001fU 
                                           & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                              >> 7U));
                                    __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v37 = 1U;
                                }
                            }
                        }
                    } else if ((2U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                        if ((1U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                            if ((0U != (0x0000001fU 
                                        & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                           >> 7U)))) {
                                __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v38 
                                    = vlSelfRef.tb_rv32i_core__DOT__dut__DOT__alu_result;
                                __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v38 
                                    = (0x0000001fU 
                                       & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                          >> 7U));
                                __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v38 = 1U;
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                 >> 3U)))) {
                if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                              >> 2U)))) {
                    if ((2U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                        if ((1U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                            if ((0U != (0x0000001fU 
                                        & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                           >> 7U)))) {
                                __VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v39 
                                    = (0x0000001fU 
                                       & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                          >> 7U));
                                __VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v39 = 1U;
                            }
                        }
                    }
                }
            }
            __Vdly__tb_rv32i_core__DOT__dut__DOT__pc 
                = ((IData)(4U) + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc);
        }
        vlSelfRef.tb_rv32i_core__DOT__dmem_write = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dmem_valid = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dmem_wstrb = 0U;
        if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                      >> 6U)))) {
            if ((0x00000020U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                              >> 4U)))) {
                    if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                  >> 3U)))) {
                        if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                      >> 2U)))) {
                            if ((2U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                                if ((1U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                                    vlSelfRef.tb_rv32i_core__DOT__dmem_write = 1U;
                                    vlSelfRef.tb_rv32i_core__DOT__dmem_wstrb = 0x0fU;
                                    vlSelfRef.tb_rv32i_core__DOT__dmem_wdata 
                                        = vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs2_data;
                                }
                            }
                        }
                    }
                }
            } else if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                 >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                            if ((1U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                                vlSelfRef.tb_rv32i_core__DOT__dmem_write = 0U;
                            }
                        }
                    }
                }
            }
            if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                          >> 4U)))) {
                if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                              >> 3U)))) {
                    if ((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                  >> 2U)))) {
                        if ((2U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                            if ((1U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) {
                                vlSelfRef.tb_rv32i_core__DOT__dmem_valid = 1U;
                                vlSelfRef.tb_rv32i_core__DOT__dmem_addr 
                                    = vlSelfRef.tb_rv32i_core__DOT__dut__DOT__alu_result;
                            }
                        }
                    }
                }
            }
        }
    }
    if (__VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v0) {
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[0U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[1U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[2U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[3U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[4U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[5U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[6U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[7U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[8U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[9U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[10U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[11U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[12U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[13U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[14U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[15U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[16U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[17U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[18U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[19U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[20U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[21U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[22U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[23U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[24U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[25U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[26U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[27U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[28U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[29U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[30U] = 0U;
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[31U] = 0U;
    }
    if (__VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v32) {
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[0U] = 0U;
    }
    if (__VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v33) {
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[__VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v33] 
            = __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v33;
    }
    if (__VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v34) {
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[__VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v34] 
            = __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v34;
    }
    if (__VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v35) {
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[__VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v35] 
            = __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v35;
    }
    if (__VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v36) {
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[__VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v36] 
            = __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v36;
    }
    if (__VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v37) {
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[__VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v37] 
            = __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v37;
    }
    if (__VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v38) {
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[__VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v38] 
            = __VdlyVal__tb_rv32i_core__DOT__dut__DOT__regs__v38;
    }
    if (__VdlySet__tb_rv32i_core__DOT__dut__DOT__regs__v39) {
        vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs[__VdlyDim0__tb_rv32i_core__DOT__dut__DOT__regs__v39] = 0U;
    }
    vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc = __Vdly__tb_rv32i_core__DOT__dut__DOT__pc;
    __Vtemp_1 = VL_MATCHMASKED_I(32, vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc, Vtb_rv32i_core__ConstPool__CONST_hd45c95f9_0);
    vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
        = Vtb_rv32i_core__ConstPool__TABLE_hb522d5d0_0
        [__Vtemp_1];
    vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imm_B = 
        (((- (IData)((vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                      >> 0x0000001fU))) << 0x0000000dU) 
         | ((((2U & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                     >> 0x0000001eU)) | (1U & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                               >> 7U))) 
             << 0x0000000bU) | ((0x000007e0U & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                >> 0x00000014U)) 
                                | (0x0000001eU & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                  >> 7U)))));
    __VdfgRegularize_h6e95ff9d_0_3 = (- (IData)((IData)(
                                                        (3U 
                                                         == 
                                                         (0x0000000fU 
                                                          & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)))));
    vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs2_data 
        = ((0U == (0x0000001fU & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                  >> 0x00000014U)))
            ? 0U : vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs
           [(0x0000001fU & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                            >> 0x00000014U))]);
    vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imm_I = 
        (((- (IData)((vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                      >> 0x0000001fU))) << 0x0000000cU) 
         | (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
            >> 0x00000014U));
    vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
        = ((0U == (0x0000001fU & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                  >> 0x0000000fU)))
            ? 0U : vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs
           [(0x0000001fU & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                            >> 0x0000000fU))]);
    __VdfgRegularize_h6e95ff9d_0_1 = (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                                      + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imm_I);
    vlSelfRef.tb_rv32i_core__DOT__dut__DOT__alu_result 
        = (((0x00000020U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
             ? ((0x00000010U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
                 ? (((4U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
                      ? (0xfffff000U & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                        & (- (IData)(
                                                     (3U 
                                                      == 
                                                      (3U 
                                                       & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata))))))
                      : (((0x00004000U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
                           ? ((0x00002000U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
                               ? ((0x00001000U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
                                   ? (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                                      & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs2_data)
                                   : (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                                      | vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs2_data))
                               : ((vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                                   ^ vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs2_data) 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                    >> 0x0000000cU)))))))
                           : ((- (IData)((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                   >> 0x0000000cU))))) 
                              & (((0x20U == (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                             >> 0x00000019U))
                                   ? (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                                      - vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs2_data)
                                   : (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                                      + vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs2_data)) 
                                 & (- (IData)((1U & 
                                               (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                   >> 0x0000000dU)))))))) 
                         & (- (IData)((3U == (3U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)))))) 
                    & (- (IData)((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                           >> 3U))))))
                 : ((vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                     + (((- (IData)((vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                     >> 0x0000001fU))) 
                         << 0x0000000cU) | ((0x00000fe0U 
                                             & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                >> 0x00000014U)) 
                                            | (0x0000001fU 
                                               & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                  >> 7U))))) 
                    & __VdfgRegularize_h6e95ff9d_0_3))
             : ((0x00000010U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
                 ? (((4U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
                      ? ((vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc 
                          + (0xfffff000U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)) 
                         & (- (IData)((3U == (3U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)))))
                      : (((0x00004000U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
                           ? ((0x00002000U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
                               ? ((0x00001000U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)
                                   ? (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                                      & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imm_I)
                                   : (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                                      | vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imm_I))
                               : ((vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data 
                                   ^ vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imm_I) 
                                  & (- (IData)((1U 
                                                & (~ 
                                                   (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                    >> 0x0000000cU)))))))
                           : (__VdfgRegularize_h6e95ff9d_0_1 
                              & ((- (IData)((1U & (~ 
                                                   (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                    >> 0x0000000dU))))) 
                                 & (- (IData)((1U & 
                                               (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                   >> 0x0000000cU)))))))) 
                         & (- (IData)((3U == (3U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)))))) 
                    & (- (IData)((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                           >> 3U))))))
                 : (__VdfgRegularize_h6e95ff9d_0_1 
                    & __VdfgRegularize_h6e95ff9d_0_3))) 
           & (- (IData)((1U & (~ (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                  >> 6U))))));
}

void Vtb_rv32i_core___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vtb_rv32i_core___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___trigger_clear__act\n"); );
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
void Vtb_rv32i_core___024root___eval_debug_assertions(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_debug_assertions\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
