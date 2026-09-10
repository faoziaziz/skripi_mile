// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtb_axi_lite_regs.h for the primary calling header

#ifndef VERILATED_VTB_AXI_LITE_REGS___024ROOT_H_
#define VERILATED_VTB_AXI_LITE_REGS___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtb_axi_lite_regs__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtb_axi_lite_regs___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ tb_axi_lite_regs__DOT__aclk;
        CData/*0:0*/ tb_axi_lite_regs__DOT__aresetn;
        CData/*5:0*/ tb_axi_lite_regs__DOT__s_axi_awaddr;
        CData/*0:0*/ tb_axi_lite_regs__DOT__s_axi_awvalid;
        CData/*0:0*/ tb_axi_lite_regs__DOT__s_axi_awready;
        CData/*3:0*/ tb_axi_lite_regs__DOT__s_axi_wstrb;
        CData/*0:0*/ tb_axi_lite_regs__DOT__s_axi_wvalid;
        CData/*0:0*/ tb_axi_lite_regs__DOT__s_axi_wready;
        CData/*1:0*/ tb_axi_lite_regs__DOT__s_axi_bresp;
        CData/*0:0*/ tb_axi_lite_regs__DOT__s_axi_bvalid;
        CData/*0:0*/ tb_axi_lite_regs__DOT__s_axi_bready;
        CData/*5:0*/ tb_axi_lite_regs__DOT__s_axi_araddr;
        CData/*0:0*/ tb_axi_lite_regs__DOT__s_axi_arvalid;
        CData/*0:0*/ tb_axi_lite_regs__DOT__s_axi_arready;
        CData/*1:0*/ tb_axi_lite_regs__DOT__s_axi_rresp;
        CData/*0:0*/ tb_axi_lite_regs__DOT__s_axi_rvalid;
        CData/*0:0*/ tb_axi_lite_regs__DOT__s_axi_rready;
        CData/*5:0*/ tb_axi_lite_regs__DOT__axi_write__Vstatic__addr;
        CData/*5:0*/ tb_axi_lite_regs__DOT__axi_read__Vstatic__addr;
        CData/*5:0*/ tb_axi_lite_regs__DOT__dut__DOT__awaddr_reg;
        CData/*0:0*/ tb_axi_lite_regs__DOT__dut__DOT__awaddr_valid;
        CData/*3:0*/ tb_axi_lite_regs__DOT__dut__DOT__wstrb_reg;
        CData/*0:0*/ tb_axi_lite_regs__DOT__dut__DOT__wdata_valid;
        CData/*5:0*/ __VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v0;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v0;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v0;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v0;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v0;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v0;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v1;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v1;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v0;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v1;
        CData/*5:0*/ __VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v0;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v0;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v0;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v1;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v0;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v1;
        CData/*5:0*/ __VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v1;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v1;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v2;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v1;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v1;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v2;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v3;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v3;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v2;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v3;
        CData/*5:0*/ __VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v1;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v1;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v2;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v3;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v2;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v3;
        CData/*5:0*/ __VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v2;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v2;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v4;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v2;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v2;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v4;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v5;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v5;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v4;
    };
    struct {
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v5;
        CData/*5:0*/ __VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v2;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v2;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v4;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v5;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v4;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v5;
        CData/*5:0*/ __VdlyVal__tb_axi_lite_regs__DOT__s_axi_awaddr__v3;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_awaddr__v3;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v6;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wdata__v3;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wstrb__v3;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v6;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_awvalid__v7;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_wvalid__v7;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v6;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_bready__v7;
        CData/*5:0*/ __VdlyVal__tb_axi_lite_regs__DOT__s_axi_araddr__v3;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_araddr__v3;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v6;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_arvalid__v7;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v6;
        CData/*0:0*/ __VdlySet__tb_axi_lite_regs__DOT__s_axi_rready__v7;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__aclk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_arready__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_awready__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_bvalid__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_rvalid__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__tb_axi_lite_regs__DOT__s_axi_wready__0;
        IData/*31:0*/ tb_axi_lite_regs__DOT__s_axi_wdata;
        IData/*31:0*/ tb_axi_lite_regs__DOT__s_axi_rdata;
        IData/*31:0*/ tb_axi_lite_regs__DOT__axi_write__Vstatic__data;
        IData/*31:0*/ tb_axi_lite_regs__DOT__axi_read__Vstatic__data;
        IData/*31:0*/ tb_axi_lite_regs__DOT__dut__DOT__reg0;
        IData/*31:0*/ tb_axi_lite_regs__DOT__dut__DOT__reg1;
        IData/*31:0*/ tb_axi_lite_regs__DOT__dut__DOT__reg2;
        IData/*31:0*/ tb_axi_lite_regs__DOT__dut__DOT__reg3;
        IData/*31:0*/ tb_axi_lite_regs__DOT__dut__DOT__wdata_reg;
        IData/*31:0*/ __VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v0;
        IData/*31:0*/ __VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v1;
        IData/*31:0*/ __VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v2;
        IData/*31:0*/ __VdlyVal__tb_axi_lite_regs__DOT__s_axi_wdata__v3;
        IData/*31:0*/ __Vi;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VicoTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
        VlUnpacked<CData/*0:0*/, 5> __Vm_traceActivity;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h06e01d25__0;
    VlTriggerScheduler __VtrigSched_h2bfb65d7__0;
    VlTriggerScheduler __VtrigSched_h7e7bb800__0;
    VlTriggerScheduler __VtrigSched_h08d6aa6d__0;
    VlTriggerScheduler __VtrigSched_h259b3b27__0;
    VlTriggerScheduler __VtrigSched_h2efec67d__0;

    // INTERNAL VARIABLES
    Vtb_axi_lite_regs__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vtb_axi_lite_regs___024root(Vtb_axi_lite_regs__Syms* symsp, const char* namep);
    ~Vtb_axi_lite_regs___024root();
    VL_UNCOPYABLE(Vtb_axi_lite_regs___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
