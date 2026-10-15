// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p1.h for the primary calling header

#include "Vtb_p1__pch.h"
#include "Vtb_p1__Syms.h"
#include "Vtb_p1___024root.h"

VL_INLINE_OPT VlCoroutine Vtb_p1___024root___eval_initial__TOP__Vtiming__1(Vtb_p1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_initial__TOP__Vtiming__1\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x1e8480ULL, 
                                         nullptr, "tb/tb_p1.sv", 
                                         133);
    VL_WRITEF_NX("P1 TIMEOUT -- the testbench never reached the end; your design is probably stalled.\n[%0t] %%Fatal: tb_p1.sv:135: Assertion failed in %Ntb_p1\n",0,
                 64,VL_TIME_UNITED_Q(1),-12,vlSymsp->name());
    VL_STOP_MT("tb/tb_p1.sv", 135, "", false);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p1___024root___dump_triggers__act(Vtb_p1___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_p1___024root___eval_triggers__act(Vtb_p1___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p1__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p1___024root___eval_triggers__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.set(0U, ((IData)(vlSelfRef.tb_p1__DOT__clk_i) 
                                       & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0))));
    vlSelfRef.__VactTriggered.set(1U, ((~ (IData)(vlSelfRef.tb_p1__DOT__clk_i)) 
                                       & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0)));
    vlSelfRef.__VactTriggered.set(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p1__DOT__clk_i__0 
        = vlSelfRef.tb_p1__DOT__clk_i;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtb_p1___024root___dump_triggers__act(vlSelf);
    }
#endif
}
