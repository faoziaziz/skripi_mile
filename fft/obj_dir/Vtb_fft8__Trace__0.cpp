// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_fft8__Syms.h"


void Vtb_fft8___024root__trace_chg_0_sub_0(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_fft8___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root__trace_chg_0\n"); );
    // Body
    Vtb_fft8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fft8___024root*>(voidSelf);
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_fft8___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_fft8___024root__trace_chg_dtype____0(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar);
void Vtb_fft8___024root__trace_chg_dtype____1(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar);
void Vtb_fft8___024root__trace_chg_dtype____2(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar);
void Vtb_fft8___024root__trace_chg_dtype____3(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar);
void Vtb_fft8___024root__trace_chg_dtype____4(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar);
void Vtb_fft8___024root__trace_chg_dtype____5(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar);
void Vtb_fft8___024root__trace_chg_dtype____6(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar);
void Vtb_fft8___024root__trace_chg_dtype____7(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar);

void Vtb_fft8___024root__trace_chg_0_sub_0(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root__trace_chg_0_sub_0\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY(((vlSelfRef.__Vm_traceActivity[1U] 
                      | vlSelfRef.__Vm_traceActivity[2U])))) {
        bufp->chgBit(oldp+0,(vlSelfRef.tb_fft8__DOT__reset));
        bufp->chgBit(oldp+1,(vlSelfRef.tb_fft8__DOT__start));
        bufp->chgSData(oldp+2,(vlSelfRef.tb_fft8__DOT__x0),16);
        bufp->chgSData(oldp+3,(vlSelfRef.tb_fft8__DOT__x1),16);
        bufp->chgSData(oldp+4,(vlSelfRef.tb_fft8__DOT__x2),16);
        bufp->chgSData(oldp+5,(vlSelfRef.tb_fft8__DOT__x3),16);
        bufp->chgSData(oldp+6,(vlSelfRef.tb_fft8__DOT__x4),16);
        bufp->chgSData(oldp+7,(vlSelfRef.tb_fft8__DOT__x5),16);
        bufp->chgSData(oldp+8,(vlSelfRef.tb_fft8__DOT__x6),16);
        bufp->chgSData(oldp+9,(vlSelfRef.tb_fft8__DOT__x7),16);
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgIData(oldp+10,(vlSelfRef.tb_fft8__DOT__y0_re),32);
        bufp->chgIData(oldp+11,(vlSelfRef.tb_fft8__DOT__y1_re),32);
        bufp->chgIData(oldp+12,(vlSelfRef.tb_fft8__DOT__y2_re),32);
        bufp->chgIData(oldp+13,(vlSelfRef.tb_fft8__DOT__y3_re),32);
        bufp->chgIData(oldp+14,(vlSelfRef.tb_fft8__DOT__y4_re),32);
        bufp->chgIData(oldp+15,(vlSelfRef.tb_fft8__DOT__y5_re),32);
        bufp->chgIData(oldp+16,(vlSelfRef.tb_fft8__DOT__y6_re),32);
        bufp->chgIData(oldp+17,(vlSelfRef.tb_fft8__DOT__y7_re),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_fft8__DOT__y0_im),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_fft8__DOT__y1_im),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_fft8__DOT__y2_im),32);
        bufp->chgIData(oldp+21,(vlSelfRef.tb_fft8__DOT__y3_im),32);
        bufp->chgIData(oldp+22,(vlSelfRef.tb_fft8__DOT__y4_im),32);
        bufp->chgIData(oldp+23,(vlSelfRef.tb_fft8__DOT__y5_im),32);
        bufp->chgIData(oldp+24,(vlSelfRef.tb_fft8__DOT__y6_im),32);
        bufp->chgIData(oldp+25,(vlSelfRef.tb_fft8__DOT__y7_im),32);
        bufp->chgBit(oldp+26,(vlSelfRef.tb_fft8__DOT__done));
        bufp->chgCData(oldp+27,(vlSelfRef.tb_fft8__DOT__dut__DOT__state),3);
        Vtb_fft8___024root__trace_chg_dtype____0(vlSelf, bufp, 28, vlSelfRef.tb_fft8__DOT__dut__DOT__s0_re);
        Vtb_fft8___024root__trace_chg_dtype____1(vlSelf, bufp, 36, vlSelfRef.tb_fft8__DOT__dut__DOT__s0_im);
        Vtb_fft8___024root__trace_chg_dtype____2(vlSelf, bufp, 44, vlSelfRef.tb_fft8__DOT__dut__DOT__s1_re);
        Vtb_fft8___024root__trace_chg_dtype____3(vlSelf, bufp, 52, vlSelfRef.tb_fft8__DOT__dut__DOT__s1_im);
        Vtb_fft8___024root__trace_chg_dtype____4(vlSelf, bufp, 60, vlSelfRef.tb_fft8__DOT__dut__DOT__s2_re);
        Vtb_fft8___024root__trace_chg_dtype____5(vlSelf, bufp, 68, vlSelfRef.tb_fft8__DOT__dut__DOT__s2_im);
        Vtb_fft8___024root__trace_chg_dtype____6(vlSelf, bufp, 76, vlSelfRef.tb_fft8__DOT__dut__DOT__s3_re);
        Vtb_fft8___024root__trace_chg_dtype____7(vlSelf, bufp, 84, vlSelfRef.tb_fft8__DOT__dut__DOT__s3_im);
        bufp->chgQData(oldp+92,(vlSelfRef.tb_fft8__DOT__dut__DOT__mult_re),64);
        bufp->chgQData(oldp+94,(vlSelfRef.tb_fft8__DOT__dut__DOT__mult_im),64);
        bufp->chgIData(oldp+96,(vlSelfRef.tb_fft8__DOT__dut__DOT__tw_re),32);
        bufp->chgIData(oldp+97,(vlSelfRef.tb_fft8__DOT__dut__DOT__tw_im),32);
        bufp->chgIData(oldp+98,(vlSelfRef.tb_fft8__DOT__dut__DOT__i),32);
    }
    bufp->chgBit(oldp+99,(vlSelfRef.tb_fft8__DOT__clk));
}

void Vtb_fft8___024root__trace_chg_dtype____0(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root__trace_chg_dtype____0\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
}

void Vtb_fft8___024root__trace_chg_dtype____1(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root__trace_chg_dtype____1\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
}

void Vtb_fft8___024root__trace_chg_dtype____2(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root__trace_chg_dtype____2\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
}

void Vtb_fft8___024root__trace_chg_dtype____3(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root__trace_chg_dtype____3\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
}

void Vtb_fft8___024root__trace_chg_dtype____4(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root__trace_chg_dtype____4\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
}

void Vtb_fft8___024root__trace_chg_dtype____5(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root__trace_chg_dtype____5\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
}

void Vtb_fft8___024root__trace_chg_dtype____6(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root__trace_chg_dtype____6\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
}

void Vtb_fft8___024root__trace_chg_dtype____7(Vtb_fft8___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 8>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root__trace_chg_dtype____7\n"); );
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode +  offset);
    bufp->chgIData(oldp+0,(__VdtypeVar[0]),32);
    bufp->chgIData(oldp+1,(__VdtypeVar[1]),32);
    bufp->chgIData(oldp+2,(__VdtypeVar[2]),32);
    bufp->chgIData(oldp+3,(__VdtypeVar[3]),32);
    bufp->chgIData(oldp+4,(__VdtypeVar[4]),32);
    bufp->chgIData(oldp+5,(__VdtypeVar[5]),32);
    bufp->chgIData(oldp+6,(__VdtypeVar[6]),32);
    bufp->chgIData(oldp+7,(__VdtypeVar[7]),32);
}

void Vtb_fft8___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft8___024root__trace_cleanup\n"); );
    // Body
    Vtb_fft8___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fft8___024root*>(voidSelf);
    Vtb_fft8__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
