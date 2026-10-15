// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtb_p2.h for the primary calling header

#include "Vtb_p2__pch.h"
#include "Vtb_p2___024root.h"

VL_ATTR_COLD void Vtb_p2___024root___eval_initial__TOP(Vtb_p2___024root* vlSelf);
VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__0(Vtb_p2___024root* vlSelf);
VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__1(Vtb_p2___024root* vlSelf);
VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__2(Vtb_p2___024root* vlSelf);

void Vtb_p2___024root___eval_initial(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vtb_p2___024root___eval_initial__TOP(vlSelf);
    Vtb_p2___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vtb_p2___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vtb_p2___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    vlSelfRef.__Vtrigprevexpr___TOP__tb_p2__DOT__clk_i__0 
        = vlSelfRef.tb_p2__DOT__clk_i;
}

VL_INLINE_OPT VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__0(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ tb_p2__DOT__unnamedblk5__DOT__i;
    tb_p2__DOT__unnamedblk5__DOT__i = 0;
    IData/*31:0*/ tb_p2__DOT__unnamedblk6__DOT__i;
    tb_p2__DOT__unnamedblk6__DOT__i = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__0__a1;
    __Vtask_tb_p2__DOT__rd_chk__0__a1 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__0__a2;
    __Vtask_tb_p2__DOT__rd_chk__0__a2 = 0;
    std::string __Vtask_tb_p2__DOT__chk__1__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__1__got;
    __Vtask_tb_p2__DOT__chk__1__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__1__exp;
    __Vtask_tb_p2__DOT__chk__1__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__2__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__2__got;
    __Vtask_tb_p2__DOT__chk__2__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__2__exp;
    __Vtask_tb_p2__DOT__chk__2__exp = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__wr__3__a;
    __Vtask_tb_p2__DOT__wr__3__a = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__wr__3__d;
    __Vtask_tb_p2__DOT__wr__3__d = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__4__a1;
    __Vtask_tb_p2__DOT__rd_chk__4__a1 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__4__a2;
    __Vtask_tb_p2__DOT__rd_chk__4__a2 = 0;
    std::string __Vtask_tb_p2__DOT__chk__5__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__5__got;
    __Vtask_tb_p2__DOT__chk__5__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__5__exp;
    __Vtask_tb_p2__DOT__chk__5__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__6__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__6__got;
    __Vtask_tb_p2__DOT__chk__6__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__6__exp;
    __Vtask_tb_p2__DOT__chk__6__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__7__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__7__got;
    __Vtask_tb_p2__DOT__chk__7__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__7__exp;
    __Vtask_tb_p2__DOT__chk__7__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__8__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__8__got;
    __Vtask_tb_p2__DOT__chk__8__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__8__exp;
    __Vtask_tb_p2__DOT__chk__8__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__9__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__9__got;
    __Vtask_tb_p2__DOT__chk__9__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__9__exp;
    __Vtask_tb_p2__DOT__chk__9__exp = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__10__a1;
    __Vtask_tb_p2__DOT__rd_chk__10__a1 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__10__a2;
    __Vtask_tb_p2__DOT__rd_chk__10__a2 = 0;
    std::string __Vtask_tb_p2__DOT__chk__11__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__11__got;
    __Vtask_tb_p2__DOT__chk__11__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__11__exp;
    __Vtask_tb_p2__DOT__chk__11__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__12__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__12__got;
    __Vtask_tb_p2__DOT__chk__12__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__12__exp;
    __Vtask_tb_p2__DOT__chk__12__exp = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__wr__13__a;
    __Vtask_tb_p2__DOT__wr__13__a = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__wr__13__d;
    __Vtask_tb_p2__DOT__wr__13__d = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__14__a1;
    __Vtask_tb_p2__DOT__rd_chk__14__a1 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__14__a2;
    __Vtask_tb_p2__DOT__rd_chk__14__a2 = 0;
    std::string __Vtask_tb_p2__DOT__chk__15__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__15__got;
    __Vtask_tb_p2__DOT__chk__15__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__15__exp;
    __Vtask_tb_p2__DOT__chk__15__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__16__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__16__got;
    __Vtask_tb_p2__DOT__chk__16__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__16__exp;
    __Vtask_tb_p2__DOT__chk__16__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__17__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__17__got;
    __Vtask_tb_p2__DOT__chk__17__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__17__exp;
    __Vtask_tb_p2__DOT__chk__17__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__18__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__18__got;
    __Vtask_tb_p2__DOT__chk__18__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__18__exp;
    __Vtask_tb_p2__DOT__chk__18__exp = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__19__a1;
    __Vtask_tb_p2__DOT__rd_chk__19__a1 = 0;
    CData/*2:0*/ __Vtask_tb_p2__DOT__rd_chk__19__a2;
    __Vtask_tb_p2__DOT__rd_chk__19__a2 = 0;
    std::string __Vtask_tb_p2__DOT__chk__20__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__20__got;
    __Vtask_tb_p2__DOT__chk__20__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__20__exp;
    __Vtask_tb_p2__DOT__chk__20__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__21__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__21__got;
    __Vtask_tb_p2__DOT__chk__21__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__21__exp;
    __Vtask_tb_p2__DOT__chk__21__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__22__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__22__got;
    __Vtask_tb_p2__DOT__chk__22__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__22__exp;
    __Vtask_tb_p2__DOT__chk__22__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__23__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__23__got;
    __Vtask_tb_p2__DOT__chk__23__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__23__exp;
    __Vtask_tb_p2__DOT__chk__23__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__24__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__24__got;
    __Vtask_tb_p2__DOT__chk__24__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__24__exp;
    __Vtask_tb_p2__DOT__chk__24__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__25__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__25__got;
    __Vtask_tb_p2__DOT__chk__25__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__25__exp;
    __Vtask_tb_p2__DOT__chk__25__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__26__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__26__got;
    __Vtask_tb_p2__DOT__chk__26__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__26__exp;
    __Vtask_tb_p2__DOT__chk__26__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__27__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__27__got;
    __Vtask_tb_p2__DOT__chk__27__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__27__exp;
    __Vtask_tb_p2__DOT__chk__27__exp = 0;
    std::string __Vtask_tb_p2__DOT__chk__28__what;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__28__got;
    __Vtask_tb_p2__DOT__chk__28__got = 0;
    CData/*7:0*/ __Vtask_tb_p2__DOT__chk__28__exp;
    __Vtask_tb_p2__DOT__chk__28__exp = 0;
    // Body
    vlSelfRef.tb_p2__DOT__rst_ni = 0U;
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__bypass_en_i = 0U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 0U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 0U;
    vlSelfRef.tb_p2__DOT__model[0U] = 0U;
    vlSelfRef.tb_p2__DOT__model[1U] = 0U;
    vlSelfRef.tb_p2__DOT__model[2U] = 0U;
    vlSelfRef.tb_p2__DOT__model[3U] = 0U;
    vlSelfRef.tb_p2__DOT__model[4U] = 0U;
    vlSelfRef.tb_p2__DOT__model[5U] = 0U;
    vlSelfRef.tb_p2__DOT__model[6U] = 0U;
    vlSelfRef.tb_p2__DOT__model[7U] = 0U;
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         48);
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         48);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         49);
    vlSelfRef.tb_p2__DOT__rst_ni = 1U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         51);
    __Vtask_tb_p2__DOT__rd_chk__0__a2 = 0U;
    __Vtask_tb_p2__DOT__rd_chk__0__a1 = 0U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__1__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__1__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a1) ;
    __Vtask_tb_p2__DOT__chk__1__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__1__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__1__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__1__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__1__got),
                     8,__Vtask_tb_p2__DOT__chk__1__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__2__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__2__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a2) ;
    __Vtask_tb_p2__DOT__chk__2__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__2__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__2__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__2__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__2__got),
                     8,__Vtask_tb_p2__DOT__chk__2__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__0__a2 = 1U;
    __Vtask_tb_p2__DOT__rd_chk__0__a1 = 1U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__1__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__1__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a1) ;
    __Vtask_tb_p2__DOT__chk__1__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__1__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__1__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__1__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__1__got),
                     8,__Vtask_tb_p2__DOT__chk__1__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__2__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__2__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a2) ;
    __Vtask_tb_p2__DOT__chk__2__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__2__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__2__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__2__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__2__got),
                     8,__Vtask_tb_p2__DOT__chk__2__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__0__a2 = 2U;
    __Vtask_tb_p2__DOT__rd_chk__0__a1 = 2U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__1__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__1__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a1) ;
    __Vtask_tb_p2__DOT__chk__1__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__1__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__1__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__1__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__1__got),
                     8,__Vtask_tb_p2__DOT__chk__1__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__2__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__2__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a2) ;
    __Vtask_tb_p2__DOT__chk__2__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__2__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__2__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__2__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__2__got),
                     8,__Vtask_tb_p2__DOT__chk__2__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__0__a2 = 3U;
    __Vtask_tb_p2__DOT__rd_chk__0__a1 = 3U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__1__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__1__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a1) ;
    __Vtask_tb_p2__DOT__chk__1__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__1__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__1__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__1__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__1__got),
                     8,__Vtask_tb_p2__DOT__chk__1__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__2__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__2__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a2) ;
    __Vtask_tb_p2__DOT__chk__2__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__2__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__2__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__2__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__2__got),
                     8,__Vtask_tb_p2__DOT__chk__2__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__0__a2 = 4U;
    __Vtask_tb_p2__DOT__rd_chk__0__a1 = 4U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__1__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__1__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a1) ;
    __Vtask_tb_p2__DOT__chk__1__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__1__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__1__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__1__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__1__got),
                     8,__Vtask_tb_p2__DOT__chk__1__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__2__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__2__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a2) ;
    __Vtask_tb_p2__DOT__chk__2__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__2__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__2__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__2__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__2__got),
                     8,__Vtask_tb_p2__DOT__chk__2__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__0__a2 = 5U;
    __Vtask_tb_p2__DOT__rd_chk__0__a1 = 5U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__1__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__1__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a1) ;
    __Vtask_tb_p2__DOT__chk__1__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__1__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__1__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__1__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__1__got),
                     8,__Vtask_tb_p2__DOT__chk__1__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__2__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__2__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a2) ;
    __Vtask_tb_p2__DOT__chk__2__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__2__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__2__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__2__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__2__got),
                     8,__Vtask_tb_p2__DOT__chk__2__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__0__a2 = 6U;
    __Vtask_tb_p2__DOT__rd_chk__0__a1 = 6U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__1__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__1__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a1) ;
    __Vtask_tb_p2__DOT__chk__1__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__1__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__1__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__1__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__1__got),
                     8,__Vtask_tb_p2__DOT__chk__1__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__2__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__2__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a2) ;
    __Vtask_tb_p2__DOT__chk__2__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__2__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__2__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__2__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__2__got),
                     8,__Vtask_tb_p2__DOT__chk__2__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__0__a2 = 7U;
    __Vtask_tb_p2__DOT__rd_chk__0__a1 = 7U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__0__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__1__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a1]);
    __Vtask_tb_p2__DOT__chk__1__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__1__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a1) ;
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__1__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__1__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__1__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__1__got),
                     8,__Vtask_tb_p2__DOT__chk__1__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__2__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__0__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__0__a2]);
    __Vtask_tb_p2__DOT__chk__2__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__2__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__0__a2) ;
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__2__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__2__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__2__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__2__got),
                     8,__Vtask_tb_p2__DOT__chk__2__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__wr__3__d = 0xa1U;
    __Vtask_tb_p2__DOT__wr__3__a = 1U;
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         27);
    vlSelfRef.tb_p2__DOT__wr_i = (0x800U | (((IData)(__Vtask_tb_p2__DOT__wr__3__a) 
                                             << 8U) 
                                            | (IData)(__Vtask_tb_p2__DOT__wr__3__d)));
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         29);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         29);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         30);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    if ((0U != (IData)(__Vtask_tb_p2__DOT__wr__3__a))) {
        vlSelfRef.tb_p2__DOT__model[__Vtask_tb_p2__DOT__wr__3__a] 
            = __Vtask_tb_p2__DOT__wr__3__d;
    }
    __Vtask_tb_p2__DOT__wr__3__d = 0xa2U;
    __Vtask_tb_p2__DOT__wr__3__a = 2U;
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         27);
    vlSelfRef.tb_p2__DOT__wr_i = (0x800U | (((IData)(__Vtask_tb_p2__DOT__wr__3__a) 
                                             << 8U) 
                                            | (IData)(__Vtask_tb_p2__DOT__wr__3__d)));
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         29);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         29);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         30);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    if ((0U != (IData)(__Vtask_tb_p2__DOT__wr__3__a))) {
        vlSelfRef.tb_p2__DOT__model[__Vtask_tb_p2__DOT__wr__3__a] 
            = __Vtask_tb_p2__DOT__wr__3__d;
    }
    __Vtask_tb_p2__DOT__wr__3__d = 0xa3U;
    __Vtask_tb_p2__DOT__wr__3__a = 3U;
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         27);
    vlSelfRef.tb_p2__DOT__wr_i = (0x800U | (((IData)(__Vtask_tb_p2__DOT__wr__3__a) 
                                             << 8U) 
                                            | (IData)(__Vtask_tb_p2__DOT__wr__3__d)));
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         29);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         29);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         30);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    if ((0U != (IData)(__Vtask_tb_p2__DOT__wr__3__a))) {
        vlSelfRef.tb_p2__DOT__model[__Vtask_tb_p2__DOT__wr__3__a] 
            = __Vtask_tb_p2__DOT__wr__3__d;
    }
    __Vtask_tb_p2__DOT__wr__3__d = 0xa4U;
    __Vtask_tb_p2__DOT__wr__3__a = 4U;
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         27);
    vlSelfRef.tb_p2__DOT__wr_i = (0x800U | (((IData)(__Vtask_tb_p2__DOT__wr__3__a) 
                                             << 8U) 
                                            | (IData)(__Vtask_tb_p2__DOT__wr__3__d)));
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         29);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         29);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         30);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    if ((0U != (IData)(__Vtask_tb_p2__DOT__wr__3__a))) {
        vlSelfRef.tb_p2__DOT__model[__Vtask_tb_p2__DOT__wr__3__a] 
            = __Vtask_tb_p2__DOT__wr__3__d;
    }
    __Vtask_tb_p2__DOT__wr__3__d = 0xa5U;
    __Vtask_tb_p2__DOT__wr__3__a = 5U;
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         27);
    vlSelfRef.tb_p2__DOT__wr_i = (0x800U | (((IData)(__Vtask_tb_p2__DOT__wr__3__a) 
                                             << 8U) 
                                            | (IData)(__Vtask_tb_p2__DOT__wr__3__d)));
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         29);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         29);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         30);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    if ((0U != (IData)(__Vtask_tb_p2__DOT__wr__3__a))) {
        vlSelfRef.tb_p2__DOT__model[__Vtask_tb_p2__DOT__wr__3__a] 
            = __Vtask_tb_p2__DOT__wr__3__d;
    }
    __Vtask_tb_p2__DOT__wr__3__d = 0xa6U;
    __Vtask_tb_p2__DOT__wr__3__a = 6U;
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         27);
    vlSelfRef.tb_p2__DOT__wr_i = (0x800U | (((IData)(__Vtask_tb_p2__DOT__wr__3__a) 
                                             << 8U) 
                                            | (IData)(__Vtask_tb_p2__DOT__wr__3__d)));
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         29);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         29);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         30);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    if ((0U != (IData)(__Vtask_tb_p2__DOT__wr__3__a))) {
        vlSelfRef.tb_p2__DOT__model[__Vtask_tb_p2__DOT__wr__3__a] 
            = __Vtask_tb_p2__DOT__wr__3__d;
    }
    __Vtask_tb_p2__DOT__wr__3__d = 0xa7U;
    __Vtask_tb_p2__DOT__wr__3__a = 7U;
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         27);
    vlSelfRef.tb_p2__DOT__wr_i = (0x800U | (((IData)(__Vtask_tb_p2__DOT__wr__3__a) 
                                             << 8U) 
                                            | (IData)(__Vtask_tb_p2__DOT__wr__3__d)));
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         29);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         29);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         30);
    if ((0U != (IData)(__Vtask_tb_p2__DOT__wr__3__a))) {
        vlSelfRef.tb_p2__DOT__model[__Vtask_tb_p2__DOT__wr__3__a] 
            = __Vtask_tb_p2__DOT__wr__3__d;
    }
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    __Vtask_tb_p2__DOT__rd_chk__4__a2 = 7U;
    __Vtask_tb_p2__DOT__rd_chk__4__a1 = 0U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__5__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__5__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a1) ;
    __Vtask_tb_p2__DOT__chk__5__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__5__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__5__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__5__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__5__got),
                     8,__Vtask_tb_p2__DOT__chk__5__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__6__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__6__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a2) ;
    __Vtask_tb_p2__DOT__chk__6__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__6__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__6__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__6__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__6__got),
                     8,__Vtask_tb_p2__DOT__chk__6__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__4__a2 = 6U;
    __Vtask_tb_p2__DOT__rd_chk__4__a1 = 1U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__5__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__5__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a1) ;
    __Vtask_tb_p2__DOT__chk__5__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__5__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__5__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__5__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__5__got),
                     8,__Vtask_tb_p2__DOT__chk__5__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__6__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__6__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a2) ;
    __Vtask_tb_p2__DOT__chk__6__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__6__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__6__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__6__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__6__got),
                     8,__Vtask_tb_p2__DOT__chk__6__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__4__a2 = 5U;
    __Vtask_tb_p2__DOT__rd_chk__4__a1 = 2U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__5__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__5__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a1) ;
    __Vtask_tb_p2__DOT__chk__5__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__5__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__5__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__5__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__5__got),
                     8,__Vtask_tb_p2__DOT__chk__5__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__6__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__6__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a2) ;
    __Vtask_tb_p2__DOT__chk__6__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__6__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__6__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__6__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__6__got),
                     8,__Vtask_tb_p2__DOT__chk__6__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__4__a2 = 4U;
    __Vtask_tb_p2__DOT__rd_chk__4__a1 = 3U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__5__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__5__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a1) ;
    __Vtask_tb_p2__DOT__chk__5__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__5__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__5__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__5__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__5__got),
                     8,__Vtask_tb_p2__DOT__chk__5__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__6__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__6__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a2) ;
    __Vtask_tb_p2__DOT__chk__6__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__6__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__6__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__6__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__6__got),
                     8,__Vtask_tb_p2__DOT__chk__6__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__4__a2 = 3U;
    __Vtask_tb_p2__DOT__rd_chk__4__a1 = 4U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__5__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__5__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a1) ;
    __Vtask_tb_p2__DOT__chk__5__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__5__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__5__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__5__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__5__got),
                     8,__Vtask_tb_p2__DOT__chk__5__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__6__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__6__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a2) ;
    __Vtask_tb_p2__DOT__chk__6__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__6__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__6__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__6__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__6__got),
                     8,__Vtask_tb_p2__DOT__chk__6__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__4__a2 = 2U;
    __Vtask_tb_p2__DOT__rd_chk__4__a1 = 5U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__5__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__5__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a1) ;
    __Vtask_tb_p2__DOT__chk__5__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__5__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__5__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__5__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__5__got),
                     8,__Vtask_tb_p2__DOT__chk__5__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__6__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__6__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a2) ;
    __Vtask_tb_p2__DOT__chk__6__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__6__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__6__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__6__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__6__got),
                     8,__Vtask_tb_p2__DOT__chk__6__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__4__a2 = 1U;
    __Vtask_tb_p2__DOT__rd_chk__4__a1 = 6U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__5__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__5__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a1) ;
    __Vtask_tb_p2__DOT__chk__5__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a1]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__5__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__5__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__5__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__5__got),
                     8,__Vtask_tb_p2__DOT__chk__5__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__6__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__6__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a2) ;
    __Vtask_tb_p2__DOT__chk__6__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a2]);
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__6__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__6__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__6__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__6__got),
                     8,__Vtask_tb_p2__DOT__chk__6__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__rd_chk__4__a2 = 0U;
    __Vtask_tb_p2__DOT__rd_chk__4__a1 = 7U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__4__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__5__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a1))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a1]);
    __Vtask_tb_p2__DOT__chk__5__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__5__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a1) ;
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__5__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__5__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__5__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__5__got),
                     8,__Vtask_tb_p2__DOT__chk__5__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__6__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__4__a2))
                                        ? 0U : vlSelfRef.tb_p2__DOT__model
                                       [__Vtask_tb_p2__DOT__rd_chk__4__a2]);
    __Vtask_tb_p2__DOT__chk__6__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__6__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                        3,
                                                        __Vtask_tb_p2__DOT__rd_chk__4__a2) ;
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__6__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__6__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__6__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__6__got),
                     8,__Vtask_tb_p2__DOT__chk__6__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 2U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 5U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         61);
    __Vtask_tb_p2__DOT__chk__7__exp = vlSelfRef.tb_p2__DOT__model
        [2U];
    __Vtask_tb_p2__DOT__chk__7__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__7__what = std::string{"independent ports rs1"};
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__7__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__7__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__7__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__7__got),
                     8,__Vtask_tb_p2__DOT__chk__7__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__8__exp = vlSelfRef.tb_p2__DOT__model
        [5U];
    __Vtask_tb_p2__DOT__chk__8__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__8__what = std::string{"independent ports rs2"};
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__8__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__8__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__8__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__8__got),
                     8,__Vtask_tb_p2__DOT__chk__8__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         66);
    vlSelfRef.tb_p2__DOT__wr_i = 0x8ffU;
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         68);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         68);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         69);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         70);
    __Vtask_tb_p2__DOT__chk__9__exp = 0U;
    __Vtask_tb_p2__DOT__chk__9__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__9__what = std::string{"r0 after writing FF to it"};
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__9__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__9__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__9__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__9__got),
                     8,__Vtask_tb_p2__DOT__chk__9__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         74);
    vlSelfRef.tb_p2__DOT__wr_i = 0x45aU;
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         76);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         76);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         77);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    __Vtask_tb_p2__DOT__rd_chk__10__a2 = 4U;
    __Vtask_tb_p2__DOT__rd_chk__10__a1 = 4U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__10__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__10__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__11__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__10__a1))
                                         ? 0U : vlSelfRef.tb_p2__DOT__model
                                        [__Vtask_tb_p2__DOT__rd_chk__10__a1]);
    __Vtask_tb_p2__DOT__chk__11__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__11__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                         3,
                                                         __Vtask_tb_p2__DOT__rd_chk__10__a1) ;
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__11__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__11__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__11__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__11__got),
                     8,__Vtask_tb_p2__DOT__chk__11__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__12__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__10__a2))
                                         ? 0U : vlSelfRef.tb_p2__DOT__model
                                        [__Vtask_tb_p2__DOT__rd_chk__10__a2]);
    __Vtask_tb_p2__DOT__chk__12__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__12__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                         3,
                                                         __Vtask_tb_p2__DOT__rd_chk__10__a2) ;
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__12__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__12__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__12__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__12__got),
                     8,__Vtask_tb_p2__DOT__chk__12__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    tb_p2__DOT__unnamedblk5__DOT__i = 0U;
    while (VL_GTS_III(32, 0x64U, tb_p2__DOT__unnamedblk5__DOT__i)) {
        __Vtask_tb_p2__DOT__wr__13__d = (0xffU & VL_RANDOM_I());
        __Vtask_tb_p2__DOT__wr__13__a = (7U & VL_URANDOM_RANGE_I(0U, 7U));
        co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             27);
        vlSelfRef.tb_p2__DOT__wr_i = (0x800U | (((IData)(__Vtask_tb_p2__DOT__wr__13__a) 
                                                 << 8U) 
                                                | (IData)(__Vtask_tb_p2__DOT__wr__13__d)));
        co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             29);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             29);
        co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             30);
        vlSelfRef.tb_p2__DOT__wr_i = 0U;
        if ((0U != (IData)(__Vtask_tb_p2__DOT__wr__13__a))) {
            vlSelfRef.tb_p2__DOT__model[__Vtask_tb_p2__DOT__wr__13__a] 
                = __Vtask_tb_p2__DOT__wr__13__d;
        }
        __Vtask_tb_p2__DOT__rd_chk__14__a2 = (7U & 
                                              VL_URANDOM_RANGE_I(0U, 7U));
        __Vtask_tb_p2__DOT__rd_chk__14__a1 = (7U & 
                                              VL_URANDOM_RANGE_I(0U, 7U));
        vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__14__a1;
        vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__14__a2;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             39);
        __Vtask_tb_p2__DOT__chk__15__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__14__a1))
                                             ? 0U : 
                                            vlSelfRef.tb_p2__DOT__model
                                            [__Vtask_tb_p2__DOT__rd_chk__14__a1]);
        __Vtask_tb_p2__DOT__chk__15__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
        __Vtask_tb_p2__DOT__chk__15__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                             3,
                                                             __Vtask_tb_p2__DOT__rd_chk__14__a1) ;
        if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__15__got) 
                         != (IData)(__Vtask_tb_p2__DOT__chk__15__exp)))) {
            VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                         -1,&(__Vtask_tb_p2__DOT__chk__15__what),
                         8,(IData)(__Vtask_tb_p2__DOT__chk__15__got),
                         8,__Vtask_tb_p2__DOT__chk__15__exp);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        __Vtask_tb_p2__DOT__chk__16__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__14__a2))
                                             ? 0U : 
                                            vlSelfRef.tb_p2__DOT__model
                                            [__Vtask_tb_p2__DOT__rd_chk__14__a2]);
        __Vtask_tb_p2__DOT__chk__16__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
        __Vtask_tb_p2__DOT__chk__16__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                             3,
                                                             __Vtask_tb_p2__DOT__rd_chk__14__a2) ;
        if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__16__got) 
                         != (IData)(__Vtask_tb_p2__DOT__chk__16__exp)))) {
            VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                         -1,&(__Vtask_tb_p2__DOT__chk__16__what),
                         8,(IData)(__Vtask_tb_p2__DOT__chk__16__got),
                         8,__Vtask_tb_p2__DOT__chk__16__exp);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        tb_p2__DOT__unnamedblk5__DOT__i = ((IData)(1U) 
                                           + tb_p2__DOT__unnamedblk5__DOT__i);
    }
    vlSelfRef.tb_p2__DOT__bypass_en_i = 0U;
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         89);
    vlSelfRef.tb_p2__DOT__wr_i = 0xb77U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 3U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 3U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         93);
    __Vtask_tb_p2__DOT__chk__17__exp = vlSelfRef.tb_p2__DOT__model
        [3U];
    __Vtask_tb_p2__DOT__chk__17__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__17__what = std::string{"bypass OFF: rs1 sees old value"};
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__17__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__17__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__17__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__17__got),
                     8,__Vtask_tb_p2__DOT__chk__17__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__18__exp = vlSelfRef.tb_p2__DOT__model
        [3U];
    __Vtask_tb_p2__DOT__chk__18__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__18__what = std::string{"bypass OFF: rs2 sees old value"};
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__18__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__18__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__18__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__18__got),
                     8,__Vtask_tb_p2__DOT__chk__18__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         96);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         96);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         97);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__model[3U] = 0x77U;
    __Vtask_tb_p2__DOT__rd_chk__19__a2 = 3U;
    __Vtask_tb_p2__DOT__rd_chk__19__a1 = 3U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = __Vtask_tb_p2__DOT__rd_chk__19__a1;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = __Vtask_tb_p2__DOT__rd_chk__19__a2;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         39);
    __Vtask_tb_p2__DOT__chk__20__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__19__a1))
                                         ? 0U : vlSelfRef.tb_p2__DOT__model
                                        [__Vtask_tb_p2__DOT__rd_chk__19__a1]);
    __Vtask_tb_p2__DOT__chk__20__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__20__what = VL_SFORMATF_N_NX("rs1 read of r%0#",0,
                                                         3,
                                                         __Vtask_tb_p2__DOT__rd_chk__19__a1) ;
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__20__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__20__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__20__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__20__got),
                     8,__Vtask_tb_p2__DOT__chk__20__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__21__exp = ((0U == (IData)(__Vtask_tb_p2__DOT__rd_chk__19__a2))
                                         ? 0U : vlSelfRef.tb_p2__DOT__model
                                        [__Vtask_tb_p2__DOT__rd_chk__19__a2]);
    __Vtask_tb_p2__DOT__chk__21__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__21__what = VL_SFORMATF_N_NX("rs2 read of r%0#",0,
                                                         3,
                                                         __Vtask_tb_p2__DOT__rd_chk__19__a2) ;
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__21__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__21__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__21__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__21__got),
                     8,__Vtask_tb_p2__DOT__chk__21__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    vlSelfRef.tb_p2__DOT__bypass_en_i = 1U;
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         103);
    vlSelfRef.tb_p2__DOT__wr_i = 0xe99U;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 6U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 2U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         107);
    __Vtask_tb_p2__DOT__chk__22__exp = 0x99U;
    __Vtask_tb_p2__DOT__chk__22__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__22__what = std::string{"bypass ON: colliding rs1 sees new data"};
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__22__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__22__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__22__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__22__got),
                     8,__Vtask_tb_p2__DOT__chk__22__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__23__exp = vlSelfRef.tb_p2__DOT__model
        [2U];
    __Vtask_tb_p2__DOT__chk__23__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__23__what = std::string{"bypass ON: other port unaffected"};
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__23__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__23__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__23__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__23__got),
                     8,__Vtask_tb_p2__DOT__chk__23__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         110);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         110);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         111);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__model[6U] = 0x99U;
    vlSelfRef.tb_p2__DOT__bypass_en_i = 1U;
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         116);
    vlSelfRef.tb_p2__DOT__wr_i = 0x6eeU;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 6U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         119);
    __Vtask_tb_p2__DOT__chk__24__exp = vlSelfRef.tb_p2__DOT__model
        [6U];
    __Vtask_tb_p2__DOT__chk__24__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__24__what = std::string{"bypass ON but wr.en low: no forwarding"};
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__24__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__24__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__24__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__24__got),
                     8,__Vtask_tb_p2__DOT__chk__24__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         121);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    vlSelfRef.tb_p2__DOT__bypass_en_i = 1U;
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         125);
    vlSelfRef.tb_p2__DOT__wr_i = 0x8bbU;
    vlSelfRef.tb_p2__DOT__rs1_addr_i = 0U;
    vlSelfRef.tb_p2__DOT__rs2_addr_i = 0U;
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         129);
    __Vtask_tb_p2__DOT__chk__25__exp = 0U;
    __Vtask_tb_p2__DOT__chk__25__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
    __Vtask_tb_p2__DOT__chk__25__what = std::string{"bypass ON: r0 still reads zero"};
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__25__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__25__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__25__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__25__got),
                     8,__Vtask_tb_p2__DOT__chk__25__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    __Vtask_tb_p2__DOT__chk__26__exp = 0U;
    __Vtask_tb_p2__DOT__chk__26__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
    __Vtask_tb_p2__DOT__chk__26__what = std::string{"bypass ON: r0 still reads zero"};
    if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__26__got) 
                     != (IData)(__Vtask_tb_p2__DOT__chk__26__exp)))) {
        VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                     -1,&(__Vtask_tb_p2__DOT__chk__26__what),
                     8,(IData)(__Vtask_tb_p2__DOT__chk__26__got),
                     8,__Vtask_tb_p2__DOT__chk__26__exp);
        vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                        + vlSelfRef.tb_p2__DOT__errors);
    }
    co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         132);
    co_await vlSelfRef.__VdlySched.delay(1ULL, nullptr, 
                                         "tb/tb_p2.sv", 
                                         132);
    co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(negedge tb_p2.clk_i)", 
                                                         "tb/tb_p2.sv", 
                                                         133);
    vlSelfRef.tb_p2__DOT__wr_i = 0U;
    tb_p2__DOT__unnamedblk6__DOT__i = 0U;
    while (VL_GTS_III(32, 0xc8U, tb_p2__DOT__unnamedblk6__DOT__i)) {
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa 
            = (7U & VL_URANDOM_RANGE_I(0U, 7U));
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd 
            = (0xffU & VL_RANDOM_I());
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1 
            = (7U & VL_URANDOM_RANGE_I(0U, 7U));
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2 
            = (7U & VL_URANDOM_RANGE_I(0U, 7U));
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we 
            = (1U & VL_URANDOM_RANGE_I(0U, 1U));
        vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be 
            = (1U & VL_URANDOM_RANGE_I(0U, 1U));
        co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             144);
        vlSelfRef.tb_p2__DOT__bypass_en_i = vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be;
        vlSelfRef.tb_p2__DOT__wr_i = (((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we) 
                                       << 0xbU) | (
                                                   ((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa) 
                                                    << 8U) 
                                                   | (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd)));
        vlSelfRef.tb_p2__DOT__rs1_addr_i = vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1;
        vlSelfRef.tb_p2__DOT__rs2_addr_i = vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2;
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             149);
        __Vtask_tb_p2__DOT__chk__27__exp = ((0U == (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1))
                                             ? 0U : 
                                            (((((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be) 
                                                & (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we)) 
                                               & ((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa) 
                                                  == (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa)))
                                              ? (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd)
                                              : vlSelfRef.tb_p2__DOT__model
                                             [vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a1]));
        __Vtask_tb_p2__DOT__chk__27__got = vlSelfRef.tb_p2__DOT__rs1_data_o;
        __Vtask_tb_p2__DOT__chk__27__what = VL_SFORMATF_N_NX("random rs1 (bypass=%0b we=%0b)",0,
                                                             1,
                                                             vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be,
                                                             1,
                                                             (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we)) ;
        if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__27__got) 
                         != (IData)(__Vtask_tb_p2__DOT__chk__27__exp)))) {
            VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                         -1,&(__Vtask_tb_p2__DOT__chk__27__what),
                         8,(IData)(__Vtask_tb_p2__DOT__chk__27__got),
                         8,__Vtask_tb_p2__DOT__chk__27__exp);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        __Vtask_tb_p2__DOT__chk__28__exp = ((0U == (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2))
                                             ? 0U : 
                                            (((((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be) 
                                                & (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we)) 
                                               & ((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa) 
                                                  == (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2))) 
                                              & (0U 
                                                 != (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa)))
                                              ? (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd)
                                              : vlSelfRef.tb_p2__DOT__model
                                             [vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__a2]));
        __Vtask_tb_p2__DOT__chk__28__got = vlSelfRef.tb_p2__DOT__rs2_data_o;
        __Vtask_tb_p2__DOT__chk__28__what = VL_SFORMATF_N_NX("random rs2 (bypass=%0b we=%0b)",0,
                                                             1,
                                                             vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__be,
                                                             1,
                                                             (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we)) ;
        if (VL_UNLIKELY(((IData)(__Vtask_tb_p2__DOT__chk__28__got) 
                         != (IData)(__Vtask_tb_p2__DOT__chk__28__exp)))) {
            VL_WRITEF_NX("  FAIL %-28@ got=%0x expected=%0x\n",0,
                         -1,&(__Vtask_tb_p2__DOT__chk__28__what),
                         8,(IData)(__Vtask_tb_p2__DOT__chk__28__got),
                         8,__Vtask_tb_p2__DOT__chk__28__exp);
            vlSelfRef.tb_p2__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.tb_p2__DOT__errors);
        }
        co_await vlSelfRef.__VtrigSched_h29caf5fb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             155);
        co_await vlSelfRef.__VdlySched.delay(1ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             155);
        if (((IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__we) 
             & (0U != (IData)(vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa)))) {
            vlSelfRef.tb_p2__DOT__model[vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wa] 
                = vlSelfRef.tb_p2__DOT__unnamedblk6__DOT__unnamedblk7__DOT__wd;
        }
        co_await vlSelfRef.__VtrigSched_h29caf6ba__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(negedge tb_p2.clk_i)", 
                                                             "tb/tb_p2.sv", 
                                                             157);
        vlSelfRef.tb_p2__DOT__wr_i = 0U;
        tb_p2__DOT__unnamedblk6__DOT__i = ((IData)(1U) 
                                           + tb_p2__DOT__unnamedblk6__DOT__i);
    }
    if ((0U == vlSelfRef.tb_p2__DOT__errors)) {
        VL_WRITEF_NX("P2 PASS  (reset, r0, dual reads, write enable, bypass on/off)\n",0);
    } else {
        VL_WRITEF_NX("P2 FAIL  (%0d errors)\n",0,32,
                     vlSelfRef.tb_p2__DOT__errors);
    }
    VL_FINISH_MT("tb/tb_p2.sv", 163, "");
}

VL_INLINE_OPT VlCoroutine Vtb_p2___024root___eval_initial__TOP__Vtiming__2(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_initial__TOP__Vtiming__2\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (1U) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/tb_p2.sv", 
                                             12);
        vlSelfRef.tb_p2__DOT__clk_i = (1U & (~ (IData)(vlSelfRef.tb_p2__DOT__clk_i)));
    }
}

void Vtb_p2___024root___act_comb__TOP__0(Vtb_p2___024root* vlSelf);

void Vtb_p2___024root___eval_act(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered.word(0U))) {
        Vtb_p2___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_p2___024root___act_comb__TOP__0(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___act_comb__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.tb_p2__DOT__rs1_data_o = ((0U == (IData)(vlSelfRef.tb_p2__DOT__rs1_addr_i))
                                         ? 0U : (0xffU 
                                                 & ((((IData)(vlSelfRef.tb_p2__DOT__bypass_en_i) 
                                                      & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                         >> 0xbU)) 
                                                     & ((7U 
                                                         & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                            >> 8U)) 
                                                        == (IData)(vlSelfRef.tb_p2__DOT__rs1_addr_i)))
                                                     ? (IData)(vlSelfRef.tb_p2__DOT__wr_i)
                                                     : 
                                                    vlSelfRef.tb_p2__DOT__dut__DOT__regs_q
                                                    [vlSelfRef.tb_p2__DOT__rs1_addr_i])));
    vlSelfRef.tb_p2__DOT__rs2_data_o = ((0U == (IData)(vlSelfRef.tb_p2__DOT__rs2_addr_i))
                                         ? 0U : (0xffU 
                                                 & ((((IData)(vlSelfRef.tb_p2__DOT__bypass_en_i) 
                                                      & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                         >> 0xbU)) 
                                                     & ((7U 
                                                         & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                                                            >> 8U)) 
                                                        == (IData)(vlSelfRef.tb_p2__DOT__rs2_addr_i)))
                                                     ? (IData)(vlSelfRef.tb_p2__DOT__wr_i)
                                                     : 
                                                    vlSelfRef.tb_p2__DOT__dut__DOT__regs_q
                                                    [vlSelfRef.tb_p2__DOT__rs2_addr_i])));
}

void Vtb_p2___024root___nba_sequent__TOP__0(Vtb_p2___024root* vlSelf);

void Vtb_p2___024root___eval_nba(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p2___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered.word(0U))) {
        Vtb_p2___024root___act_comb__TOP__0(vlSelf);
    }
}

VL_INLINE_OPT void Vtb_p2___024root___nba_sequent__TOP__0(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___nba_sequent__TOP__0\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*7:0*/ __VdlyVal__tb_p2__DOT__dut__DOT__regs_q__v0;
    __VdlyVal__tb_p2__DOT__dut__DOT__regs_q__v0 = 0;
    CData/*2:0*/ __VdlyDim0__tb_p2__DOT__dut__DOT__regs_q__v0;
    __VdlyDim0__tb_p2__DOT__dut__DOT__regs_q__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_p2__DOT__dut__DOT__regs_q__v0;
    __VdlySet__tb_p2__DOT__dut__DOT__regs_q__v0 = 0;
    CData/*0:0*/ __VdlySet__tb_p2__DOT__dut__DOT__regs_q__v1;
    __VdlySet__tb_p2__DOT__dut__DOT__regs_q__v1 = 0;
    // Body
    __VdlySet__tb_p2__DOT__dut__DOT__regs_q__v0 = 0U;
    __VdlySet__tb_p2__DOT__dut__DOT__regs_q__v1 = 0U;
    if (vlSelfRef.tb_p2__DOT__rst_ni) {
        if ((((IData)(vlSelfRef.tb_p2__DOT__wr_i) >> 0xbU) 
             & (0U != (7U & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                             >> 8U))))) {
            __VdlyVal__tb_p2__DOT__dut__DOT__regs_q__v0 
                = (0xffU & (IData)(vlSelfRef.tb_p2__DOT__wr_i));
            __VdlyDim0__tb_p2__DOT__dut__DOT__regs_q__v0 
                = (7U & ((IData)(vlSelfRef.tb_p2__DOT__wr_i) 
                         >> 8U));
            __VdlySet__tb_p2__DOT__dut__DOT__regs_q__v0 = 1U;
        }
    } else {
        __VdlySet__tb_p2__DOT__dut__DOT__regs_q__v1 = 1U;
    }
    if (__VdlySet__tb_p2__DOT__dut__DOT__regs_q__v0) {
        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[__VdlyDim0__tb_p2__DOT__dut__DOT__regs_q__v0] 
            = __VdlyVal__tb_p2__DOT__dut__DOT__regs_q__v0;
    }
    if (__VdlySet__tb_p2__DOT__dut__DOT__regs_q__v1) {
        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[0U] = 0U;
        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[1U] = 0U;
        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[2U] = 0U;
        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[3U] = 0U;
        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[4U] = 0U;
        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[5U] = 0U;
        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[6U] = 0U;
        vlSelfRef.tb_p2__DOT__dut__DOT__regs_q[7U] = 0U;
    }
}

void Vtb_p2___024root___timing_resume(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___timing_resume\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h29caf5fb__0.resume(
                                                   "@(posedge tb_p2.clk_i)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VtrigSched_h29caf6ba__0.resume(
                                                   "@(negedge tb_p2.clk_i)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered.word(0U))) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vtb_p2___024root___timing_commit(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___timing_commit\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((! (1ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h29caf5fb__0.commit(
                                                   "@(posedge tb_p2.clk_i)");
    }
    if ((! (2ULL & vlSelfRef.__VactTriggered.word(0U)))) {
        vlSelfRef.__VtrigSched_h29caf6ba__0.commit(
                                                   "@(negedge tb_p2.clk_i)");
    }
}

void Vtb_p2___024root___eval_triggers__act(Vtb_p2___024root* vlSelf);

bool Vtb_p2___024root___eval_phase__act(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_phase__act\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    VlTriggerVec<3> __VpreTriggered;
    CData/*0:0*/ __VactExecute;
    // Body
    Vtb_p2___024root___eval_triggers__act(vlSelf);
    Vtb_p2___024root___timing_commit(vlSelf);
    __VactExecute = vlSelfRef.__VactTriggered.any();
    if (__VactExecute) {
        __VpreTriggered.andNot(vlSelfRef.__VactTriggered, vlSelfRef.__VnbaTriggered);
        vlSelfRef.__VnbaTriggered.thisOr(vlSelfRef.__VactTriggered);
        Vtb_p2___024root___timing_resume(vlSelf);
        Vtb_p2___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vtb_p2___024root___eval_phase__nba(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_phase__nba\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = vlSelfRef.__VnbaTriggered.any();
    if (__VnbaExecute) {
        Vtb_p2___024root___eval_nba(vlSelf);
        vlSelfRef.__VnbaTriggered.clear();
    }
    return (__VnbaExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__nba(Vtb_p2___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void Vtb_p2___024root___dump_triggers__act(Vtb_p2___024root* vlSelf);
#endif  // VL_DEBUG

void Vtb_p2___024root___eval(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
            Vtb_p2___024root___dump_triggers__nba(vlSelf);
#endif
            VL_FATAL_MT("tb/tb_p2.sv", 2, "", "NBA region did not converge.");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        __VnbaContinue = 0U;
        vlSelfRef.__VactIterCount = 0U;
        vlSelfRef.__VactContinue = 1U;
        while (vlSelfRef.__VactContinue) {
            if (VL_UNLIKELY((0x64U < vlSelfRef.__VactIterCount))) {
#ifdef VL_DEBUG
                Vtb_p2___024root___dump_triggers__act(vlSelf);
#endif
                VL_FATAL_MT("tb/tb_p2.sv", 2, "", "Active region did not converge.");
            }
            vlSelfRef.__VactIterCount = ((IData)(1U) 
                                         + vlSelfRef.__VactIterCount);
            vlSelfRef.__VactContinue = 0U;
            if (Vtb_p2___024root___eval_phase__act(vlSelf)) {
                vlSelfRef.__VactContinue = 1U;
            }
        }
        if (Vtb_p2___024root___eval_phase__nba(vlSelf)) {
            __VnbaContinue = 1U;
        }
    }
}

#ifdef VL_DEBUG
void Vtb_p2___024root___eval_debug_assertions(Vtb_p2___024root* vlSelf) {
    (void)vlSelf;  // Prevent unused variable warning
    Vtb_p2__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtb_p2___024root___eval_debug_assertions\n"); );
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
