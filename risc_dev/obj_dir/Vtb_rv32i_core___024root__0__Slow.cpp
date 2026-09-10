// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_rv32i_core.h for the primary calling header

#include "Vtb_rv32i_core__pch.h"

VL_ATTR_COLD void Vtb_rv32i_core___024root___eval_static(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_static\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__Vtrigprevexpr___TOP__tb_rv32i_core__DOT__clk__0 
        = vlSelfRef.tb_rv32i_core__DOT__clk;
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rv32i_core___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vtb_rv32i_core___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);
VL_ATTR_COLD void Vtb_rv32i_core___024root___stl_sequent__TOP__0(Vtb_rv32i_core___024root* vlSelf);

VL_ATTR_COLD bool Vtb_rv32i_core___024root___eval_stl(Vtb_rv32i_core___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_stl\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_rv32i_core___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vtb_rv32i_core___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        {
            // Inlined CFunc: _eval_body__stl
            if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
                Vtb_rv32i_core___024root___stl_sequent__TOP__0(vlSelf);
                {
                    // Inlined CFunc: __Vm_traceActivitySetAll
                    vlSelfRef.__Vm_traceActivity[0U] = 1U;
                    vlSelfRef.__Vm_traceActivity[1U] = 1U;
                }
            }
        }
    }
    return (__VstlExecute);
}

VL_ATTR_COLD void Vtb_rv32i_core___024root___eval_dump_triggers__stl(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_dump_triggers__stl\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_rv32i_core___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rv32i_core___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_rv32i_core___024root___eval_dump_triggers__ico(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_dump_triggers__ico\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_rv32i_core___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rv32i_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_rv32i_core___024root___eval_dump_triggers__act(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_dump_triggers__act\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_rv32i_core___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_rv32i_core___024root___eval_dump_triggers__nba(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_dump_triggers__nba\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_rv32i_core___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_rv32i_core___024root___eval_dump_triggers__obs(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_dump_triggers__obs\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rv32i_core___024root___eval_dump_triggers__react(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_dump_triggers__react\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_rv32i_core___024root___eval_final(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___eval_final\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rv32i_core___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_rv32i_core___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_rv32i_core___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vtb_rv32i_core___024root___stl_sequent__TOP__0(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___stl_sequent__TOP__0\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_1;
    __VdfgRegularize_h6e95ff9d_0_1 = 0;
    IData/*31:0*/ __VdfgRegularize_h6e95ff9d_0_3;
    __VdfgRegularize_h6e95ff9d_0_3 = 0;
    IData/*31:0*/ __Vtemp_1;
    // Body
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

bool Vtb_rv32i_core___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rv32i_core___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_rv32i_core___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_rv32i_core___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_rv32i_core___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_rv32i_core___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_rv32i_core.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_rv32i_core___024root___ctor_var_reset(Vtb_rv32i_core___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root___ctor_var_reset\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_rv32i_core__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1768170836372404933ull);
    vlSelf->tb_rv32i_core__DOT__reset = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11461772013618163212ull);
    vlSelf->tb_rv32i_core__DOT__dmem_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11897885528775652991ull);
    vlSelf->tb_rv32i_core__DOT__dmem_write = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8760207528492796372ull);
    vlSelf->tb_rv32i_core__DOT__dmem_addr = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13162913919961357345ull);
    vlSelf->tb_rv32i_core__DOT__dmem_wdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 15374016541918574974ull);
    vlSelf->tb_rv32i_core__DOT__dmem_wstrb = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15417911996571839078ull);
    vlSelf->tb_rv32i_core__DOT__dut__DOT__imem_rdata = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 6752463912296207353ull);
    vlSelf->tb_rv32i_core__DOT__dut__DOT__pc = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13133233322331211387ull);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_rv32i_core__DOT__dut__DOT__regs[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 8506964370998316552ull);
    }
    vlSelf->tb_rv32i_core__DOT__dut__DOT__rs1_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13528791243292334028ull);
    vlSelf->tb_rv32i_core__DOT__dut__DOT__rs2_data = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 4060505843109403159ull);
    vlSelf->tb_rv32i_core__DOT__dut__DOT__imm_I = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10466388975030851611ull);
    vlSelf->tb_rv32i_core__DOT__dut__DOT__imm_B = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11431074944945828111ull);
    vlSelf->tb_rv32i_core__DOT__dut__DOT__alu_result = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 2627838121260285578ull);
    vlSelf->tb_rv32i_core__DOT__dut__DOT__i = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10999238744279160767ull);
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
    vlSelf->__Vtrigprevexpr___TOP__tb_rv32i_core__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
