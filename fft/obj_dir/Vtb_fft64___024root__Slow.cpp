// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_fft64.h for the primary calling header

#include "Vtb_fft64__pch.h"

void Vtb_fft64___024root___ctor_var_reset(Vtb_fft64___024root* vlSelf);

Vtb_fft64___024root::Vtb_fft64___024root(Vtb_fft64__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vtb_fft64___024root___ctor_var_reset(this);
}

void Vtb_fft64___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vtb_fft64___024root::~Vtb_fft64___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
