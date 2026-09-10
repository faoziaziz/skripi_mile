// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_axi_lite_regs__Syms.h"


VL_ATTR_COLD void Vtb_axi_lite_regs___024root__trace_init_sub__TOP__0(Vtb_axi_lite_regs___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root__trace_init_sub__TOP__0\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const int c = vlSymsp->__Vm_baseCode;
    VL_TRACE_PUSH_PREFIX(tracep, "tb_axi_lite_regs", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"aclk",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"aresetn",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"s_axi_awaddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"s_axi_awvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"s_axi_awready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"s_axi_wdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"s_axi_wstrb",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"s_axi_wvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"s_axi_wready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"s_axi_bresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"s_axi_bvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"s_axi_bready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"s_axi_araddr",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"s_axi_arvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"s_axi_arready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"s_axi_rdata",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"s_axi_rresp",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"s_axi_rvalid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"s_axi_rready",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+28,0,"axi_write__Vstatic__addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+29,0,"axi_write__Vstatic__data",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+30,0,"axi_read__Vstatic__addr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BUS(tracep,c+31,0,"axi_read__Vstatic__data",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_PUSH_PREFIX(tracep, "dut", VerilatedTracePrefixType::SCOPE_MODULE, 0, 0);
    VL_TRACE_DECL_BUS(tracep,c+32,0,"ADDR_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+33,0,"DATA_WIDTH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BIT(tracep,c+26,0,"aclk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+27,0,"aresetn",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+0,0,"s_axi_awaddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+1,0,"s_axi_awvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+9,0,"s_axi_awready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+2,0,"s_axi_wdata",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+3,0,"s_axi_wstrb",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+4,0,"s_axi_wvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+10,0,"s_axi_wready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+11,0,"s_axi_bresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+12,0,"s_axi_bvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+5,0,"s_axi_bready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+6,0,"s_axi_araddr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+7,0,"s_axi_arvalid",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+13,0,"s_axi_arready",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+14,0,"s_axi_rdata",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+15,0,"s_axi_rresp",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, 1,0);
    VL_TRACE_DECL_BIT(tracep,c+16,0,"s_axi_rvalid",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BIT(tracep,c+8,0,"s_axi_rready",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+17,0,"reg0",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+18,0,"reg1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+19,0,"reg2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+20,0,"reg3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+21,0,"awaddr_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 5,0);
    VL_TRACE_DECL_BIT(tracep,c+22,0,"awaddr_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_DECL_BUS(tracep,c+23,0,"wdata_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 31,0);
    VL_TRACE_DECL_BUS(tracep,c+24,0,"wstrb_reg",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, 3,0);
    VL_TRACE_DECL_BIT(tracep,c+25,0,"wdata_valid",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC);
    VL_TRACE_POP_PREFIX(tracep);
    VL_TRACE_POP_PREFIX(tracep);
}

VL_ATTR_COLD void Vtb_axi_lite_regs___024root__trace_init_top(Vtb_axi_lite_regs___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root__trace_init_top\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_axi_lite_regs___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtb_axi_lite_regs___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void Vtb_axi_lite_regs___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi_lite_regs___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtb_axi_lite_regs___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtb_axi_lite_regs___024root__trace_register(Vtb_axi_lite_regs___024root* vlSelf, VerilatedVcd* tracep) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root__trace_register\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    tracep->addConstCb(&Vtb_axi_lite_regs___024root__trace_const_0, 0, vlSelf);
    tracep->addFullCb(&Vtb_axi_lite_regs___024root__trace_full_0, 0, vlSelf);
    tracep->addChgCb(&Vtb_axi_lite_regs___024root__trace_chg_0, 0, vlSelf);
    tracep->addCleanupCb(&Vtb_axi_lite_regs___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtb_axi_lite_regs___024root__trace_const_0_sub_0(Vtb_axi_lite_regs___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axi_lite_regs___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root__trace_const_0\n"); );
    // Body
    Vtb_axi_lite_regs___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi_lite_regs___024root*>(voidSelf);
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_axi_lite_regs___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axi_lite_regs___024root__trace_const_0_sub_0(Vtb_axi_lite_regs___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root__trace_const_0_sub_0\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullIData(oldp+32,(6U),32);
    bufp->fullIData(oldp+33,(0x00000020U),32);
}

VL_ATTR_COLD void Vtb_axi_lite_regs___024root__trace_full_0_sub_0(Vtb_axi_lite_regs___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtb_axi_lite_regs___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root__trace_full_0\n"); );
    // Body
    Vtb_axi_lite_regs___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi_lite_regs___024root*>(voidSelf);
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    Vtb_axi_lite_regs___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtb_axi_lite_regs___024root__trace_full_0_sub_0(Vtb_axi_lite_regs___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root__trace_full_0_sub_0\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    bufp->fullCData(oldp+0,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awaddr),6);
    bufp->fullBit(oldp+1,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awvalid));
    bufp->fullIData(oldp+2,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wdata),32);
    bufp->fullCData(oldp+3,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wstrb),4);
    bufp->fullBit(oldp+4,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wvalid));
    bufp->fullBit(oldp+5,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bready));
    bufp->fullCData(oldp+6,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_araddr),6);
    bufp->fullBit(oldp+7,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arvalid));
    bufp->fullBit(oldp+8,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rready));
    bufp->fullBit(oldp+9,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready));
    bufp->fullBit(oldp+10,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready));
    bufp->fullCData(oldp+11,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bresp),2);
    bufp->fullBit(oldp+12,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid));
    bufp->fullBit(oldp+13,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready));
    bufp->fullIData(oldp+14,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rdata),32);
    bufp->fullCData(oldp+15,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rresp),2);
    bufp->fullBit(oldp+16,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid));
    bufp->fullIData(oldp+17,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg0),32);
    bufp->fullIData(oldp+18,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg1),32);
    bufp->fullIData(oldp+19,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg2),32);
    bufp->fullIData(oldp+20,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg3),32);
    bufp->fullCData(oldp+21,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg),6);
    bufp->fullBit(oldp+22,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid));
    bufp->fullIData(oldp+23,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg),32);
    bufp->fullCData(oldp+24,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg),4);
    bufp->fullBit(oldp+25,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_valid));
    bufp->fullBit(oldp+26,(vlSelfRef.tb_axi_lite_regs__DOT__aclk));
    bufp->fullBit(oldp+27,(vlSelfRef.tb_axi_lite_regs__DOT__aresetn));
    bufp->fullCData(oldp+28,(vlSelfRef.tb_axi_lite_regs__DOT__axi_write__Vstatic__addr),6);
    bufp->fullIData(oldp+29,(vlSelfRef.tb_axi_lite_regs__DOT__axi_write__Vstatic__data),32);
    bufp->fullCData(oldp+30,(vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__addr),6);
    bufp->fullIData(oldp+31,(vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__data),32);
}
