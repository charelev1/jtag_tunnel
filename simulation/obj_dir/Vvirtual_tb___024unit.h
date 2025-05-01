// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vvirtual_tb.h for the primary calling header

#ifndef VERILATED_VVIRTUAL_TB___024UNIT_H_
#define VERILATED_VVIRTUAL_TB___024UNIT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vvirtual_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vvirtual_tb___024unit final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    static VlUnpacked<std::string, 16> __Venumtab_enum_name8;

    // INTERNAL VARIABLES
    Vvirtual_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vvirtual_tb___024unit(Vvirtual_tb__Syms* symsp, const char* v__name);
    ~Vvirtual_tb___024unit();
    VL_UNCOPYABLE(Vvirtual_tb___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
