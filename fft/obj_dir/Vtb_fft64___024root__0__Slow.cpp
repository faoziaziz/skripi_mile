// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fft64.h for the primary calling header

#include "Vtb_fft64__pch.h"

void Vtb_fft64___024root___timing_ready(Vtb_fft64___024root* vlSelf);

VL_ATTR_COLD void Vtb_fft64___024root___eval_static(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_static\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft64__DOT__clk__0 
        = vlSelfRef.tb_fft64__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__tb_fft64__DOT__done__0 
        = vlSelfRef.tb_fft64__DOT__done;
    Vtb_fft64___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft64___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_fft64___024root___eval_stl(Vtb_fft64___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_stl\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_fft64___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    return (0U);
}

VL_ATTR_COLD void Vtb_fft64___024root___eval_dump_triggers__stl(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_dump_triggers__stl\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_fft64___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft64___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fft64___024root___eval_dump_triggers__ico(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_dump_triggers__ico\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_fft64___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
#endif
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft64___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fft64___024root___eval_dump_triggers__act(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_dump_triggers__act\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_fft64___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
}

VL_ATTR_COLD void Vtb_fft64___024root___eval_dump_triggers__nba(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_dump_triggers__nba\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
#ifdef VL_DEBUG
    Vtb_fft64___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
}

VL_ATTR_COLD void Vtb_fft64___024root___eval_dump_triggers__obs(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_dump_triggers__obs\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_fft64___024root___eval_dump_triggers__react(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_dump_triggers__react\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_fft64___024root___eval_final(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_final\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vtb_fft64___024root___eval_initial__TOP(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___eval_initial__TOP\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_fft64__DOT__pi = 3.14159265358979312e+00;
    vlSelfRef.tb_fft64__DOT__in_real[0U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_imag[0U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[1U] = 0x000011f0U;
    vlSelfRef.tb_fft64__DOT__in_imag[1U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[2U] = 0x00002125U;
    vlSelfRef.tb_fft64__DOT__in_imag[2U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[3U] = 0x00002b4eU;
    vlSelfRef.tb_fft64__DOT__in_imag[3U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[4U] = 0x00002ee0U;
    vlSelfRef.tb_fft64__DOT__in_imag[4U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[5U] = 0x00002b4eU;
    vlSelfRef.tb_fft64__DOT__in_imag[5U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[6U] = 0x00002125U;
    vlSelfRef.tb_fft64__DOT__in_imag[6U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[7U] = 0x000011f0U;
    vlSelfRef.tb_fft64__DOT__in_imag[7U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[8U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_imag[8U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[9U] = 0xffffee10U;
    vlSelfRef.tb_fft64__DOT__in_imag[9U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[10U] = 0xffffdedbU;
    vlSelfRef.tb_fft64__DOT__in_imag[10U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[11U] = 0xffffd4b2U;
    vlSelfRef.tb_fft64__DOT__in_imag[11U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[12U] = 0xffffd120U;
    vlSelfRef.tb_fft64__DOT__in_imag[12U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[13U] = 0xffffd4b2U;
    vlSelfRef.tb_fft64__DOT__in_imag[13U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[14U] = 0xffffdedbU;
    vlSelfRef.tb_fft64__DOT__in_imag[14U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[15U] = 0xffffee10U;
    vlSelfRef.tb_fft64__DOT__in_imag[15U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[16U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_imag[16U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[17U] = 0x000011f0U;
    vlSelfRef.tb_fft64__DOT__in_imag[17U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[18U] = 0x00002125U;
    vlSelfRef.tb_fft64__DOT__in_imag[18U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[19U] = 0x00002b4eU;
    vlSelfRef.tb_fft64__DOT__in_imag[19U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[20U] = 0x00002ee0U;
    vlSelfRef.tb_fft64__DOT__in_imag[20U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[21U] = 0x00002b4eU;
    vlSelfRef.tb_fft64__DOT__in_imag[21U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[22U] = 0x00002125U;
    vlSelfRef.tb_fft64__DOT__in_imag[22U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[23U] = 0x000011f0U;
    vlSelfRef.tb_fft64__DOT__in_imag[23U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[24U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_imag[24U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[25U] = 0xffffee10U;
    vlSelfRef.tb_fft64__DOT__in_imag[25U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[26U] = 0xffffdedbU;
    vlSelfRef.tb_fft64__DOT__in_imag[26U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[27U] = 0xffffd4b2U;
    vlSelfRef.tb_fft64__DOT__in_imag[27U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[28U] = 0xffffd120U;
    vlSelfRef.tb_fft64__DOT__in_imag[28U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[29U] = 0xffffd4b2U;
    vlSelfRef.tb_fft64__DOT__in_imag[29U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[30U] = 0xffffdedbU;
    vlSelfRef.tb_fft64__DOT__in_imag[30U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[31U] = 0xffffee10U;
    vlSelfRef.tb_fft64__DOT__in_imag[31U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[32U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_imag[32U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[33U] = 0x000011f0U;
    vlSelfRef.tb_fft64__DOT__in_imag[33U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[34U] = 0x00002125U;
    vlSelfRef.tb_fft64__DOT__in_imag[34U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[35U] = 0x00002b4eU;
    vlSelfRef.tb_fft64__DOT__in_imag[35U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[36U] = 0x00002ee0U;
    vlSelfRef.tb_fft64__DOT__in_imag[36U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[37U] = 0x00002b4eU;
    vlSelfRef.tb_fft64__DOT__in_imag[37U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[38U] = 0x00002125U;
    vlSelfRef.tb_fft64__DOT__in_imag[38U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[39U] = 0x000011f0U;
    vlSelfRef.tb_fft64__DOT__in_imag[39U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[40U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_imag[40U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[41U] = 0xffffee10U;
    vlSelfRef.tb_fft64__DOT__in_imag[41U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[42U] = 0xffffdedbU;
    vlSelfRef.tb_fft64__DOT__in_imag[42U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[43U] = 0xffffd4b2U;
    vlSelfRef.tb_fft64__DOT__in_imag[43U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[44U] = 0xffffd120U;
    vlSelfRef.tb_fft64__DOT__in_imag[44U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[45U] = 0xffffd4b2U;
    vlSelfRef.tb_fft64__DOT__in_imag[45U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[46U] = 0xffffdedbU;
    vlSelfRef.tb_fft64__DOT__in_imag[46U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[47U] = 0xffffee10U;
    vlSelfRef.tb_fft64__DOT__in_imag[47U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[48U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_imag[48U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[49U] = 0x000011f0U;
    vlSelfRef.tb_fft64__DOT__in_imag[49U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[50U] = 0x00002125U;
    vlSelfRef.tb_fft64__DOT__in_imag[50U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[51U] = 0x00002b4eU;
    vlSelfRef.tb_fft64__DOT__in_imag[51U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[52U] = 0x00002ee0U;
    vlSelfRef.tb_fft64__DOT__in_imag[52U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[53U] = 0x00002b4eU;
    vlSelfRef.tb_fft64__DOT__in_imag[53U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[54U] = 0x00002125U;
    vlSelfRef.tb_fft64__DOT__in_imag[54U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[55U] = 0x000011f0U;
    vlSelfRef.tb_fft64__DOT__in_imag[55U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[56U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_imag[56U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[57U] = 0xffffee10U;
    vlSelfRef.tb_fft64__DOT__in_imag[57U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[58U] = 0xffffdedbU;
    vlSelfRef.tb_fft64__DOT__in_imag[58U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[59U] = 0xffffd4b2U;
    vlSelfRef.tb_fft64__DOT__in_imag[59U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[60U] = 0xffffd120U;
    vlSelfRef.tb_fft64__DOT__in_imag[60U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[61U] = 0xffffd4b2U;
    vlSelfRef.tb_fft64__DOT__in_imag[61U] = 0U;
    vlSelfRef.tb_fft64__DOT__in_real[62U] = 0xffffdedbU;
    vlSelfRef.tb_fft64__DOT__in_imag[62U] = 0U;
    vlSelfRef.tb_fft64__DOT__angle = 2.47400421470196221e+01;
    vlSelfRef.tb_fft64__DOT__sample = -4.59220118838107373e+03;
    vlSelfRef.tb_fft64__DOT__in_real[63U] = 0xffffee10U;
    vlSelfRef.tb_fft64__DOT__in_imag[63U] = 0U;
    vlSelfRef.tb_fft64__DOT__n = 0x00000040U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[0U] = 0x7fffU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[0U] = 0U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[1U] = 0x7f62U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[1U] = 0xf374U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[2U] = 0x7d8aU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[2U] = 0xe707U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[3U] = 0x7a7dU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[3U] = 0xdad8U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[4U] = 0x7641U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[4U] = 0xcf05U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[5U] = 0x70e2U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[5U] = 0xc3aaU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[6U] = 0x6a6dU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[6U] = 0xb8e4U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[7U] = 0x62f1U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[7U] = 0xae8aU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[8U] = 0x5a82U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[8U] = 0xa57eU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[9U] = 0x5176U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[9U] = 0x9d0fU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[10U] = 0x471cU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[10U] = 0x9593U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[11U] = 0x3c56U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[11U] = 0x8f1eU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[12U] = 0x30fbU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[12U] = 0x89bfU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[13U] = 0x2528U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[13U] = 0x8583U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[14U] = 0x18f9U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[14U] = 0x8276U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[15U] = 0x0c8cU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[15U] = 0x809eU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[16U] = 0U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[16U] = 0x8000U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[17U] = 0xf374U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[17U] = 0x809eU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[18U] = 0xe707U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[18U] = 0x8276U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[19U] = 0xdad8U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[19U] = 0x8583U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[20U] = 0xcf05U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[20U] = 0x89bfU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[21U] = 0xc3aaU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[21U] = 0x8f1eU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[22U] = 0xb8e4U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[22U] = 0x9593U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[23U] = 0xae8aU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[23U] = 0x9d0fU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[24U] = 0xa57eU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[24U] = 0xa57eU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[25U] = 0x9d0fU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[25U] = 0xae8aU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[26U] = 0x9593U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[26U] = 0xb8e4U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[27U] = 0x8f1eU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[27U] = 0xc3aaU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[28U] = 0x89bfU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[28U] = 0xcf05U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[29U] = 0x8583U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[29U] = 0xdad8U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[30U] = 0x8276U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[30U] = 0xe707U;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real[31U] = 0x809eU;
    vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag[31U] = 0xf374U;
}

VL_ATTR_COLD bool Vtb_fft64___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft64___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fft64___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vtb_fft64___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___trigger_anySet__stl\n"); );
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

bool Vtb_fft64___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft64___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___dump_triggers__ico\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fft64___024root___trigger_anySet__ico(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'ico' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

bool Vtb_fft64___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_fft64___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vtb_fft64___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge tb_fft64.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( tb_fft64.done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vtb_fft64___024root___ctor_var_reset(Vtb_fft64___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root___ctor_var_reset\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->tb_fft64__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3582223811743222147ull);
    vlSelf->tb_fft64__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2138483664405702527ull);
    vlSelf->tb_fft64__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2711306645064117606ull);
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_fft64__DOT__in_real[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 14415378416624668246ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_fft64__DOT__in_imag[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 11895466326350022452ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_fft64__DOT__out_real[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10832559611588741868ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_fft64__DOT__out_imag[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 5767795912117003996ull);
    }
    vlSelf->tb_fft64__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17803373571162452544ull);
    vlSelf->tb_fft64__DOT__n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 608844298510465933ull);
    vlSelf->tb_fft64__DOT__pi = 0;
    vlSelf->tb_fft64__DOT__angle = 0;
    vlSelf->tb_fft64__DOT__sample = 0;
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_fft64__DOT__dut__DOT__real_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 17972247452442460110ull);
    }
    for (int __Vi0 = 0; __Vi0 < 64; ++__Vi0) {
        vlSelf->tb_fft64__DOT__dut__DOT__imag_mem[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 18425817423655133605ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_fft64__DOT__dut__DOT__tw_real[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15060634610476197539ull);
    }
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->tb_fft64__DOT__dut__DOT__tw_imag[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12863885350129149847ull);
    }
    vlSelf->tb_fft64__DOT__dut__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13805732720188747247ull);
    vlSelf->tb_fft64__DOT__dut__DOT__n = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13711565867435877695ull);
    vlSelf->tb_fft64__DOT__dut__DOT__load_index = VL_SCOPED_RAND_RESET_I(6, __VscopeHash, 7650962518656702677ull);
    vlSelf->__VdlySet__tb_fft64__DOT__start__v0 = 0;
    vlSelf->__VdlySet__tb_fft64__DOT__start__v1 = 0;
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
    vlSelf->__Vtrigprevexpr___TOP__tb_fft64__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__tb_fft64__DOT__done__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
    for (int __Vi0 = 0; __Vi0 < 3; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
