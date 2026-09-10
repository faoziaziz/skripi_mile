// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals

#include "verilated_vcd_c.h"
#include "Vtb_rv32i_core__Syms.h"


void Vtb_rv32i_core___024root__trace_chg_0_sub_0(Vtb_rv32i_core___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vtb_rv32i_core___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root__trace_chg_0\n"); );
    // Body
    Vtb_rv32i_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rv32i_core___024root*>(voidSelf);
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    Vtb_rv32i_core___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void Vtb_rv32i_core___024root__trace_chg_dtype____0(Vtb_rv32i_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar);

void Vtb_rv32i_core___024root__trace_chg_0_sub_0(Vtb_rv32i_core___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root__trace_chg_0_sub_0\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 0);
    if (VL_UNLIKELY((vlSelfRef.__Vm_traceActivity[1U]))) {
        bufp->chgIData(oldp+0,(vlSelfRef.tb_rv32i_core__DOT__dut__DOT__pc),32);
        bufp->chgIData(oldp+1,(vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata),32);
        bufp->chgBit(oldp+2,(vlSelfRef.tb_rv32i_core__DOT__dmem_valid));
        bufp->chgBit(oldp+3,(vlSelfRef.tb_rv32i_core__DOT__dmem_write));
        bufp->chgIData(oldp+4,(vlSelfRef.tb_rv32i_core__DOT__dmem_addr),32);
        bufp->chgIData(oldp+5,(vlSelfRef.tb_rv32i_core__DOT__dmem_wdata),32);
        bufp->chgCData(oldp+6,(vlSelfRef.tb_rv32i_core__DOT__dmem_wstrb),4);
        Vtb_rv32i_core___024root__trace_chg_dtype____0(vlSelf, bufp, 7, vlSelfRef.tb_rv32i_core__DOT__dut__DOT__regs);
        bufp->chgCData(oldp+39,((0x0000001fU & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                >> 0x0000000fU))),5);
        bufp->chgCData(oldp+40,((0x0000001fU & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                >> 0x00000014U))),5);
        bufp->chgCData(oldp+41,((0x0000001fU & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                >> 7U))),5);
        bufp->chgIData(oldp+42,(vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs1_data),32);
        bufp->chgIData(oldp+43,(vlSelfRef.tb_rv32i_core__DOT__dut__DOT__rs2_data),32);
        bufp->chgCData(oldp+44,((0x0000007fU & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)),7);
        bufp->chgCData(oldp+45,((7U & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                       >> 0x0000000cU))),3);
        bufp->chgCData(oldp+46,((vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                 >> 0x00000019U)),7);
        bufp->chgIData(oldp+47,(vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imm_I),32);
        bufp->chgIData(oldp+48,((((- (IData)((vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                              >> 0x0000001fU))) 
                                  << 0x0000000cU) | 
                                 ((0x00000fe0U & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                  >> 0x00000014U)) 
                                  | (0x0000001fU & 
                                     (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                      >> 7U))))),32);
        bufp->chgIData(oldp+49,(vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imm_B),32);
        bufp->chgIData(oldp+50,((0xfffff000U & vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata)),32);
        bufp->chgIData(oldp+51,(((((0x00000ffeU & (
                                                   (- (IData)(
                                                              (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                                               >> 0x0000001fU))) 
                                                   << 1U)) 
                                   | (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                      >> 0x0000001fU)) 
                                  << 0x00000014U) | 
                                 ((((0x000001feU & 
                                     (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                      >> 0x0000000bU)) 
                                    | (1U & (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                             >> 0x00000014U))) 
                                   << 0x0000000bU) 
                                  | (0x000007feU & 
                                     (vlSelfRef.tb_rv32i_core__DOT__dut__DOT__imem_rdata 
                                      >> 0x00000014U))))),32);
        bufp->chgIData(oldp+52,(vlSelfRef.tb_rv32i_core__DOT__dut__DOT__alu_result),32);
        bufp->chgIData(oldp+53,(vlSelfRef.tb_rv32i_core__DOT__dut__DOT__i),32);
    }
    bufp->chgBit(oldp+54,(vlSelfRef.tb_rv32i_core__DOT__clk));
    bufp->chgBit(oldp+55,(vlSelfRef.tb_rv32i_core__DOT__reset));
}

void Vtb_rv32i_core___024root__trace_chg_dtype____0(Vtb_rv32i_core___024root* vlSelf, VerilatedVcd::Buffer* bufp, uint32_t offset, const VlUnpacked<IData/*31:0*/, 32>& __VdtypeVar) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root__trace_chg_dtype____0\n"); );
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    bufp->chgIData(oldp+8,(__VdtypeVar[8]),32);
    bufp->chgIData(oldp+9,(__VdtypeVar[9]),32);
    bufp->chgIData(oldp+10,(__VdtypeVar[10]),32);
    bufp->chgIData(oldp+11,(__VdtypeVar[11]),32);
    bufp->chgIData(oldp+12,(__VdtypeVar[12]),32);
    bufp->chgIData(oldp+13,(__VdtypeVar[13]),32);
    bufp->chgIData(oldp+14,(__VdtypeVar[14]),32);
    bufp->chgIData(oldp+15,(__VdtypeVar[15]),32);
    bufp->chgIData(oldp+16,(__VdtypeVar[16]),32);
    bufp->chgIData(oldp+17,(__VdtypeVar[17]),32);
    bufp->chgIData(oldp+18,(__VdtypeVar[18]),32);
    bufp->chgIData(oldp+19,(__VdtypeVar[19]),32);
    bufp->chgIData(oldp+20,(__VdtypeVar[20]),32);
    bufp->chgIData(oldp+21,(__VdtypeVar[21]),32);
    bufp->chgIData(oldp+22,(__VdtypeVar[22]),32);
    bufp->chgIData(oldp+23,(__VdtypeVar[23]),32);
    bufp->chgIData(oldp+24,(__VdtypeVar[24]),32);
    bufp->chgIData(oldp+25,(__VdtypeVar[25]),32);
    bufp->chgIData(oldp+26,(__VdtypeVar[26]),32);
    bufp->chgIData(oldp+27,(__VdtypeVar[27]),32);
    bufp->chgIData(oldp+28,(__VdtypeVar[28]),32);
    bufp->chgIData(oldp+29,(__VdtypeVar[29]),32);
    bufp->chgIData(oldp+30,(__VdtypeVar[30]),32);
    bufp->chgIData(oldp+31,(__VdtypeVar[31]),32);
}

void Vtb_rv32i_core___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_rv32i_core___024root__trace_cleanup\n"); );
    // Body
    Vtb_rv32i_core___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb_rv32i_core___024root*>(voidSelf);
    Vtb_rv32i_core__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
