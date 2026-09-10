// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_fft64__Syms.h"


VL_ATTR_COLD void Vtb_fft64___024root__trace_init_dtype____0(Vtb_fft64___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);
VL_ATTR_COLD void Vtb_fft64___024root__trace_init_dtype____1(Vtb_fft64___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_fft64___024root__trace_init_sub__TOP__0(Vtb_fft64___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_init_sub__TOP__0\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_fft64", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"clk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"rst",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"start",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+70,0,"done",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+77,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_DOUBLE(tracep,c+0,0,"pi",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+2,0,"angle",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_DECL_DOUBLE(tracep,c+4,0,"sample",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::DOUBLE);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+78,0,"DATA_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+79,0,"TW_W",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+74,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+75,0,"rst",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+76,0,"start",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+70,0,"done",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);

    Vtb_fft64___024root__trace_init_dtype____0(vlSelf, tracep, "tw_real", 0, c+6, VerilatedTraceSigDirection::NONE);

    Vtb_fft64___024root__trace_init_dtype____1(vlSelf, tracep, "tw_imag", 0, c+38, VerilatedTraceSigDirection::NONE);
    VL_TRACE_DECL_BUS(tracep,c+80,0,"STATE_IDLE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+81,0,"STATE_LOAD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+82,0,"STATE_STAGE0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+83,0,"STATE_STAGE1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+84,0,"STATE_STAGE2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+85,0,"STATE_STAGE3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+86,0,"STATE_STAGE4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+87,0,"STATE_STAGE5",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+88,0,"STATE_OUTPUT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+89,0,"STATE_DONE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+71,0,"state",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BUS(tracep,c+72,0,"n",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::INTEGER, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+73,0,"load_index",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_fft64___024root__trace_init_dtype_sub____0(Vtb_fft64___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_fft64___024root__trace_init_dtype____0(Vtb_fft64___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_init_dtype____0\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fft64___024root__trace_init_dtype_sub____0(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_fft64___024root__trace_init_dtype_sub____0(Vtb_fft64___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_init_dtype_sub____0\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 15,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_fft64___024root__trace_init_dtype_sub____1(Vtb_fft64___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction);

VL_ATTR_COLD void Vtb_fft64___024root__trace_init_dtype____1(Vtb_fft64___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_init_dtype____1\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fft64___024root__trace_init_dtype_sub____1(vlSelf, tracep, name, fidx, c, direction);
}

VL_ATTR_COLD void Vtb_fft64___024root__trace_init_dtype_sub____1(Vtb_fft64___024root* vlSelf, VerilatedVcd* tracep, const char* name, uint32_t fidx, uint32_t c, VerilatedTraceSigDirection direction) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_init_dtype_sub____1\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VL_TRACE_PUSH_PREFIX(tracep, name, VerilatedTracePrefixType::ARRAY_UNPACKED, 0, 31);
    for (int i = 0; i < 32; ++i) {
        VL_TRACE_DECL_BUS_ARRAY(tracep,c+0+i*1,fidx,"",-1, direction, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, (i + 0), 15,0);
    }
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_fft64___024root__trace_init_top(Vtb_fft64___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_init_top\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_fft64___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_fft64___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_fft64___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_fft64___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_fft64___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_fft64___024root__trace_register(Vtb_fft64___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_register\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_fft64___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_fft64___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_fft64___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_fft64___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_fft64___024root__trace_const_0_sub_0(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_fft64___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_const_0\n"); );
    // Body
    Vtb_fft64___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fft64___024root*>(voidSelf);
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_fft64___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_fft64___024root__trace_const_0_sub_0(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_const_0_sub_0\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+78,(0x00000020U),32);
    bufp->fullIData(oldp+79,(0x00000010U),32);
    bufp->fullCData(oldp+80,(0U),4);
    bufp->fullCData(oldp+81,(1U),4);
    bufp->fullCData(oldp+82,(2U),4);
    bufp->fullCData(oldp+83,(3U),4);
    bufp->fullCData(oldp+84,(4U),4);
    bufp->fullCData(oldp+85,(5U),4);
    bufp->fullCData(oldp+86,(6U),4);
    bufp->fullCData(oldp+87,(7U),4);
    bufp->fullCData(oldp+88,(8U),4);
    bufp->fullCData(oldp+89,(9U),4);
}

VL_ATTR_COLD void Vtb_fft64___024root__trace_full_0_sub_0(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_fft64___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_full_0\n"); );
    // Body
    Vtb_fft64___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_fft64___024root*>(voidSelf);
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_fft64___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_fft64___024root__trace_full_dtype____0(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 32>& __VdtypeVar);
VL_ATTR_COLD void Vtb_fft64___024root__trace_full_dtype____1(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 32>& __VdtypeVar);

VL_ATTR_COLD void Vtb_fft64___024root__trace_full_0_sub_0(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_full_0_sub_0\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullDouble(oldp+0,(vlSelfRef.tb_fft64__DOT__pi));
    bufp->fullDouble(oldp+2,(vlSelfRef.tb_fft64__DOT__angle));
    bufp->fullDouble(oldp+4,(vlSelfRef.tb_fft64__DOT__sample));
    Vtb_fft64___024root__trace_full_dtype____0(vlSelf, bufp, 6, vlSelfRef.tb_fft64__DOT__dut__DOT__tw_real);
    Vtb_fft64___024root__trace_full_dtype____1(vlSelf, bufp, 38, vlSelfRef.tb_fft64__DOT__dut__DOT__tw_imag);
    bufp->fullBit(oldp+70,(vlSelfRef.tb_fft64__DOT__done));
    bufp->fullCData(oldp+71,(vlSelfRef.tb_fft64__DOT__dut__DOT__state),4);
    bufp->fullIData(oldp+72,(vlSelfRef.tb_fft64__DOT__dut__DOT__n),32);
    bufp->fullCData(oldp+73,(vlSelfRef.tb_fft64__DOT__dut__DOT__load_index),6);
    bufp->fullBit(oldp+74,(vlSelfRef.tb_fft64__DOT__clk));
    bufp->fullBit(oldp+75,(vlSelfRef.tb_fft64__DOT__rst));
    bufp->fullBit(oldp+76,(vlSelfRef.tb_fft64__DOT__start));
    bufp->fullIData(oldp+77,(vlSelfRef.tb_fft64__DOT__n),32);
}

VL_ATTR_COLD void Vtb_fft64___024root__trace_full_dtype____0(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_full_dtype____0\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->fullSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->fullSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->fullSData(oldp+3,(__VdtypeVar[3]),16);
    bufp->fullSData(oldp+4,(__VdtypeVar[4]),16);
    bufp->fullSData(oldp+5,(__VdtypeVar[5]),16);
    bufp->fullSData(oldp+6,(__VdtypeVar[6]),16);
    bufp->fullSData(oldp+7,(__VdtypeVar[7]),16);
    bufp->fullSData(oldp+8,(__VdtypeVar[8]),16);
    bufp->fullSData(oldp+9,(__VdtypeVar[9]),16);
    bufp->fullSData(oldp+10,(__VdtypeVar[10]),16);
    bufp->fullSData(oldp+11,(__VdtypeVar[11]),16);
    bufp->fullSData(oldp+12,(__VdtypeVar[12]),16);
    bufp->fullSData(oldp+13,(__VdtypeVar[13]),16);
    bufp->fullSData(oldp+14,(__VdtypeVar[14]),16);
    bufp->fullSData(oldp+15,(__VdtypeVar[15]),16);
    bufp->fullSData(oldp+16,(__VdtypeVar[16]),16);
    bufp->fullSData(oldp+17,(__VdtypeVar[17]),16);
    bufp->fullSData(oldp+18,(__VdtypeVar[18]),16);
    bufp->fullSData(oldp+19,(__VdtypeVar[19]),16);
    bufp->fullSData(oldp+20,(__VdtypeVar[20]),16);
    bufp->fullSData(oldp+21,(__VdtypeVar[21]),16);
    bufp->fullSData(oldp+22,(__VdtypeVar[22]),16);
    bufp->fullSData(oldp+23,(__VdtypeVar[23]),16);
    bufp->fullSData(oldp+24,(__VdtypeVar[24]),16);
    bufp->fullSData(oldp+25,(__VdtypeVar[25]),16);
    bufp->fullSData(oldp+26,(__VdtypeVar[26]),16);
    bufp->fullSData(oldp+27,(__VdtypeVar[27]),16);
    bufp->fullSData(oldp+28,(__VdtypeVar[28]),16);
    bufp->fullSData(oldp+29,(__VdtypeVar[29]),16);
    bufp->fullSData(oldp+30,(__VdtypeVar[30]),16);
    bufp->fullSData(oldp+31,(__VdtypeVar[31]),16);
}

VL_ATTR_COLD void Vtb_fft64___024root__trace_full_dtype____1(Vtb_fft64___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<SData/*15:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_fft64___024root__trace_full_dtype____1\n"); );
    Vtb_fft64__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + offset);
    bufp->fullSData(oldp+0,(__VdtypeVar[0]),16);
    bufp->fullSData(oldp+1,(__VdtypeVar[1]),16);
    bufp->fullSData(oldp+2,(__VdtypeVar[2]),16);
    bufp->fullSData(oldp+3,(__VdtypeVar[3]),16);
    bufp->fullSData(oldp+4,(__VdtypeVar[4]),16);
    bufp->fullSData(oldp+5,(__VdtypeVar[5]),16);
    bufp->fullSData(oldp+6,(__VdtypeVar[6]),16);
    bufp->fullSData(oldp+7,(__VdtypeVar[7]),16);
    bufp->fullSData(oldp+8,(__VdtypeVar[8]),16);
    bufp->fullSData(oldp+9,(__VdtypeVar[9]),16);
    bufp->fullSData(oldp+10,(__VdtypeVar[10]),16);
    bufp->fullSData(oldp+11,(__VdtypeVar[11]),16);
    bufp->fullSData(oldp+12,(__VdtypeVar[12]),16);
    bufp->fullSData(oldp+13,(__VdtypeVar[13]),16);
    bufp->fullSData(oldp+14,(__VdtypeVar[14]),16);
    bufp->fullSData(oldp+15,(__VdtypeVar[15]),16);
    bufp->fullSData(oldp+16,(__VdtypeVar[16]),16);
    bufp->fullSData(oldp+17,(__VdtypeVar[17]),16);
    bufp->fullSData(oldp+18,(__VdtypeVar[18]),16);
    bufp->fullSData(oldp+19,(__VdtypeVar[19]),16);
    bufp->fullSData(oldp+20,(__VdtypeVar[20]),16);
    bufp->fullSData(oldp+21,(__VdtypeVar[21]),16);
    bufp->fullSData(oldp+22,(__VdtypeVar[22]),16);
    bufp->fullSData(oldp+23,(__VdtypeVar[23]),16);
    bufp->fullSData(oldp+24,(__VdtypeVar[24]),16);
    bufp->fullSData(oldp+25,(__VdtypeVar[25]),16);
    bufp->fullSData(oldp+26,(__VdtypeVar[26]),16);
    bufp->fullSData(oldp+27,(__VdtypeVar[27]),16);
    bufp->fullSData(oldp+28,(__VdtypeVar[28]),16);
    bufp->fullSData(oldp+29,(__VdtypeVar[29]),16);
    bufp->fullSData(oldp+30,(__VdtypeVar[30]),16);
    bufp->fullSData(oldp+31,(__VdtypeVar[31]),16);
}
