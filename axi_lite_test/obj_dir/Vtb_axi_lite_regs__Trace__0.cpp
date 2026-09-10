// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_axi_lite_regs__Syms.h"


void Vtb_axi_lite_regs___024root__trace_chg_0_sub_0(Vtb_axi_lite_regs___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_axi_lite_regs___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root__trace_chg_0\n"); );
    // Body
    Vtb_axi_lite_regs___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi_lite_regs___024root*>(voidSelf);
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_axi_lite_regs___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_axi_lite_regs___024root__trace_chg_0_sub_0(Vtb_axi_lite_regs___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root__trace_chg_0_sub_0\n"); );
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((((vlSelfRef.__Vm_traceActivity[1U] 
                       | vlSelfRef.__Vm_traceActivity[2U]) 
                      | vlSelfRef.__Vm_traceActivity[4U])))) {
        bufp->chgCData(oldp+0,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awaddr),6);
        bufp->chgBit(oldp+1,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awvalid));
        bufp->chgIData(oldp+2,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wdata),32);
        bufp->chgCData(oldp+3,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wstrb),4);
        bufp->chgBit(oldp+4,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wvalid));
        bufp->chgBit(oldp+5,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bready));
        bufp->chgCData(oldp+6,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_araddr),6);
        bufp->chgBit(oldp+7,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arvalid));
        bufp->chgBit(oldp+8,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rready));
    }
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+9,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_awready));
        bufp->chgBit(oldp+10,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_wready));
        bufp->chgCData(oldp+11,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bresp),2);
        bufp->chgBit(oldp+12,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_bvalid));
        bufp->chgBit(oldp+13,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_arready));
        bufp->chgIData(oldp+14,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rdata),32);
        bufp->chgCData(oldp+15,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rresp),2);
        bufp->chgBit(oldp+16,(vlSelfRef.tb_axi_lite_regs__DOT__s_axi_rvalid));
        bufp->chgIData(oldp+17,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg0),32);
        bufp->chgIData(oldp+18,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg1),32);
        bufp->chgIData(oldp+19,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg2),32);
        bufp->chgIData(oldp+20,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__reg3),32);
        bufp->chgCData(oldp+21,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg),6);
        bufp->chgBit(oldp+22,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid));
        bufp->chgIData(oldp+23,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_reg),32);
        bufp->chgCData(oldp+24,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg),4);
        bufp->chgBit(oldp+25,(vlSelfRef.tb_axi_lite_regs__DOT__dut__DOT__wdata_valid));
    }
    bufp->chgBit(oldp+26,(vlSelfRef.tb_axi_lite_regs__DOT__aclk));
    bufp->chgBit(oldp+27,(vlSelfRef.tb_axi_lite_regs__DOT__aresetn));
    bufp->chgCData(oldp+28,(vlSelfRef.tb_axi_lite_regs__DOT__axi_write__Vstatic__addr),6);
    bufp->chgIData(oldp+29,(vlSelfRef.tb_axi_lite_regs__DOT__axi_write__Vstatic__data),32);
    bufp->chgCData(oldp+30,(vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__addr),6);
    bufp->chgIData(oldp+31,(vlSelfRef.tb_axi_lite_regs__DOT__axi_read__Vstatic__data),32);
}

void Vtb_axi_lite_regs___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_axi_lite_regs___024root__trace_cleanup\n"); );
    // Body
    Vtb_axi_lite_regs___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_axi_lite_regs___024root*>(voidSelf);
    Vtb_axi_lite_regs__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[4U] = 0U;
}
