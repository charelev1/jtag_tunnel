// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_tb.h for the primary calling header

#include "Vvirtual_tb__pch.h"
#include "Vvirtual_tb__Syms.h"
#include "Vvirtual_tb___024unit.h"
VlUnpacked<std::string, 16> Vvirtual_tb___024unit::__Venumtab_enum_name8;

void Vvirtual_tb___024unit___ctor_var_reset(Vvirtual_tb___024unit* vlSelf);

Vvirtual_tb___024unit::Vvirtual_tb___024unit(Vvirtual_tb__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vvirtual_tb___024unit___ctor_var_reset(this);
}

void Vvirtual_tb___024unit::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vvirtual_tb___024unit::~Vvirtual_tb___024unit() {
}
