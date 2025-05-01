// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vvirtual_tb.h for the primary calling header

#include "Vvirtual_tb__pch.h"
#include "Vvirtual_tb___024unit.h"

VL_ATTR_COLD void Vvirtual_tb___024unit___ctor_var_reset(Vvirtual_tb___024unit* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vvirtual_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vvirtual_tb___024unit___ctor_var_reset\n"); );
    auto &vlSelfRef = std::ref(*vlSelf).get();
    // Body
    for (int __Vi = 0; __Vi < 16; ++__Vi) {
        vlSelf->__Venumtab_enum_name8[__Vi] = std::string{""};
    }
    vlSelf->__Venumtab_enum_name8[0] = std::string{"TEST_LOGIC_RESET"};
    vlSelf->__Venumtab_enum_name8[1] = std::string{"RUN_TEST_IDLE"};
    vlSelf->__Venumtab_enum_name8[2] = std::string{"SELECT_DR"};
    vlSelf->__Venumtab_enum_name8[3] = std::string{"CAPTURE_DR"};
    vlSelf->__Venumtab_enum_name8[4] = std::string{"SHIFT_DR"};
    vlSelf->__Venumtab_enum_name8[5] = std::string{"EXIT1_DR"};
    vlSelf->__Venumtab_enum_name8[6] = std::string{"PAUSE_DR"};
    vlSelf->__Venumtab_enum_name8[7] = std::string{"EXIT2_DR"};
    vlSelf->__Venumtab_enum_name8[8] = std::string{"UPDATE_DR"};
    vlSelf->__Venumtab_enum_name8[9] = std::string{"SELECT_IR"};
    vlSelf->__Venumtab_enum_name8[10] = std::string{"CAPTURE_IR"};
    vlSelf->__Venumtab_enum_name8[11] = std::string{"SHIFT_IR"};
    vlSelf->__Venumtab_enum_name8[12] = std::string{"EXIT1_IR"};
    vlSelf->__Venumtab_enum_name8[13] = std::string{"PAUSE_IR"};
    vlSelf->__Venumtab_enum_name8[14] = std::string{"EXIT2_IR"};
    vlSelf->__Venumtab_enum_name8[15] = std::string{"UPDATE_IR"};
}
