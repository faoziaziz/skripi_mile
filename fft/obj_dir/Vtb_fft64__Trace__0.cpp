// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_fft64__Syms.h"


void Vtb_fft64___024root__trace_chg_0_sub_0(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_fft64___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_chg_0\n"); );
    // Body
    Vtb_fft64___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fft64___024root*>(voidSelf);
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_fft64___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_fft64___024root__trace_chg_dtype____0(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 32>& __VdtypeVar);
void Vtb_fft64___024root__trace_chg_dtype____1(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 32>& __VdtypeVar);

void Vtb_fft64___024root__trace_chg_0_sub_0(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_chg_0_sub_0\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgDouble(oldp+0,(vlSelfRef.tb_fft64__DOT__pi));
        bufp->chgDouble(oldp+2,(vlSelfRef.tb_fft64__DOT__angle));
        bufp->chgDouble(oldp+4,(vlSelfRef.tb_fft64__DOT__sample));
        Vtb_fft64___024root__trace_chg_dtype____0(vlSelf, bufp, 6, vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real);
        Vtb_fft64___024root__trace_chg_dtype____1(vlSelf, bufp, 38, vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[2U]))) {
        bufp->chgBit(oldp+70,(vlSelfRef.tb_fft64__DOT__done));
        bufp->chgCData(oldp+71,(vlSelfRef.tb_fft64__DOT__dut__DOT__state),4);
        bufp->chgIData(oldp+72,(vlSelfRef.tb_fft64__DOT__dut__DOT__n),32);
        bufp->chgCData(oldp+73,(vlSelfRef.tb_fft64__DOT__dut__DOT__load_index),6);
    }
    bufp->chgBit(oldp+74,(vlSelfRef.tb_fft64__DOT__clk));
    bufp->chgBit(oldp+75,(vlSelfRef.tb_fft64__DOT__rst));
    bufp->chgBit(oldp+76,(vlSelfRef.tb_fft64__DOT__start));
    bufp->chgIData(oldp+77,(vlSelfRef.tb_fft64__DOT__n),32);
}

void Vtb_fft64___024root__trace_chg_dtype____0(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_chg_dtype____0\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->chgSData(oldp+3,(__VdtypeVar[3]),16);
    bufp->chgSData(oldp+4,(__VdtypeVar[4]),16);
    bufp->chgSData(oldp+5,(__VdtypeVar[5]),16);
    bufp->chgSData(oldp+6,(__VdtypeVar[6]),16);
    bufp->chgSData(oldp+7,(__VdtypeVar[7]),16);
    bufp->chgSData(oldp+8,(__VdtypeVar[8]),16);
    bufp->chgSData(oldp+9,(__VdtypeVar[9]),16);
    bufp->chgSData(oldp+10,(__VdtypeVar[10]),16);
    bufp->chgSData(oldp+11,(__VdtypeVar[11]),16);
    bufp->chgSData(oldp+12,(__VdtypeVar[12]),16);
    bufp->chgSData(oldp+13,(__VdtypeVar[13]),16);
    bufp->chgSData(oldp+14,(__VdtypeVar[14]),16);
    bufp->chgSData(oldp+15,(__VdtypeVar[15]),16);
    bufp->chgSData(oldp+16,(__VdtypeVar[16]),16);
    bufp->chgSData(oldp+17,(__VdtypeVar[17]),16);
    bufp->chgSData(oldp+18,(__VdtypeVar[18]),16);
    bufp->chgSData(oldp+19,(__VdtypeVar[19]),16);
    bufp->chgSData(oldp+20,(__VdtypeVar[20]),16);
    bufp->chgSData(oldp+21,(__VdtypeVar[21]),16);
    bufp->chgSData(oldp+22,(__VdtypeVar[22]),16);
    bufp->chgSData(oldp+23,(__VdtypeVar[23]),16);
    bufp->chgSData(oldp+24,(__VdtypeVar[24]),16);
    bufp->chgSData(oldp+25,(__VdtypeVar[25]),16);
    bufp->chgSData(oldp+26,(__VdtypeVar[26]),16);
    bufp->chgSData(oldp+27,(__VdtypeVar[27]),16);
    bufp->chgSData(oldp+28,(__VdtypeVar[28]),16);
    bufp->chgSData(oldp+29,(__VdtypeVar[29]),16);
    bufp->chgSData(oldp+30,(__VdtypeVar[30]),16);
    bufp->chgSData(oldp+31,(__VdtypeVar[31]),16);
}

void Vtb_fft64___024root__trace_chg_dtype____1(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_chg_dtype____1\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->chgSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->chgSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->chgSData(oldp+3,(__VdtypeVar[3]),16);
    bufp->chgSData(oldp+4,(__VdtypeVar[4]),16);
    bufp->chgSData(oldp+5,(__VdtypeVar[5]),16);
    bufp->chgSData(oldp+6,(__VdtypeVar[6]),16);
    bufp->chgSData(oldp+7,(__VdtypeVar[7]),16);
    bufp->chgSData(oldp+8,(__VdtypeVar[8]),16);
    bufp->chgSData(oldp+9,(__VdtypeVar[9]),16);
    bufp->chgSData(oldp+10,(__VdtypeVar[10]),16);
    bufp->chgSData(oldp+11,(__VdtypeVar[11]),16);
    bufp->chgSData(oldp+12,(__VdtypeVar[12]),16);
    bufp->chgSData(oldp+13,(__VdtypeVar[13]),16);
    bufp->chgSData(oldp+14,(__VdtypeVar[14]),16);
    bufp->chgSData(oldp+15,(__VdtypeVar[15]),16);
    bufp->chgSData(oldp+16,(__VdtypeVar[16]),16);
    bufp->chgSData(oldp+17,(__VdtypeVar[17]),16);
    bufp->chgSData(oldp+18,(__VdtypeVar[18]),16);
    bufp->chgSData(oldp+19,(__VdtypeVar[19]),16);
    bufp->chgSData(oldp+20,(__VdtypeVar[20]),16);
    bufp->chgSData(oldp+21,(__VdtypeVar[21]),16);
    bufp->chgSData(oldp+22,(__VdtypeVar[22]),16);
    bufp->chgSData(oldp+23,(__VdtypeVar[23]),16);
    bufp->chgSData(oldp+24,(__VdtypeVar[24]),16);
    bufp->chgSData(oldp+25,(__VdtypeVar[25]),16);
    bufp->chgSData(oldp+26,(__VdtypeVar[26]),16);
    bufp->chgSData(oldp+27,(__VdtypeVar[27]),16);
    bufp->chgSData(oldp+28,(__VdtypeVar[28]),16);
    bufp->chgSData(oldp+29,(__VdtypeVar[29]),16);
    bufp->chgSData(oldp+30,(__VdtypeVar[30]),16);
    bufp->chgSData(oldp+31,(__VdtypeVar[31]),16);
}

void Vtb_fft64___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_cleanup\n"); );
    // Body
    Vtb_fft64___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fft64___024root*>(voidSelf);
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
