// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTB_AXI_LITE_REGS__SYMS_H_
#define VERILATED_VTB_AXI_LITE_REGS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vtb_axi_lite_regs.h"

// INCLUDE MODULE CLASSES
#include "Vtb_axi_lite_regs___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vtb_axi_lite_regs__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vtb_axi_lite_regs* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool& __Vm_didInit;

    // MODULE INSTANCE STATE
    Vtb_axi_lite_regs___024root    TOP;

    // CONSTRUCTORS
    Vtb_axi_lite_regs__Syms(VerilatedContext* contextp, const char* namep, Vtb_axi_lite_regs* modelp);
    ~Vtb_axi_lite_regs__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
