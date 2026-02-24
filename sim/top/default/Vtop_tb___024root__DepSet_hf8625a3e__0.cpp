// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop_tb.h for the primary calling header

#include "Vtop_tb__pch.h"
#include "Vtop_tb__Syms.h"
#include "Vtop_tb___024root.h"

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__0(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Init
    IData/*31:0*/ top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    VL_WRITEF_NX("=== top_tb: simulation start ===\n",0);
    vlSelfRef.top_tb__DOT__rst_n = 0U;
    co_await vlSelfRef.__VtrigSched_ha88125cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                                         34);
    co_await vlSelfRef.__VtrigSched_ha88125cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                                         34);
    co_await vlSelfRef.__VtrigSched_ha88125cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                                         34);
    co_await vlSelfRef.__VtrigSched_ha88125cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                                         34);
    co_await vlSelfRef.__VtrigSched_ha88125cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                                         34);
    co_await vlSelfRef.__VtrigSched_ha88125cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                                         34);
    co_await vlSelfRef.__VtrigSched_ha88125cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                                         34);
    co_await vlSelfRef.__VtrigSched_ha88125cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                                         34);
    co_await vlSelfRef.__VtrigSched_ha88125cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                                         34);
    co_await vlSelfRef.__VtrigSched_ha88125cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                                         34);
    vlSelfRef.top_tb__DOT__rst_n = 1U;
    VL_WRITEF_NX("[%0t] Reset released\n",0,64,VL_TIME_UNITED_Q(1000),
                 -9);
    co_await vlSelfRef.__VtrigSched_ha88125cf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge top_tb.clk)", 
                                                         "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                                         41);
    if (vlSymsp->_vm_contextp__->assertOnGet(2, 1)) {
        if (VL_UNLIKELY(((1U != (IData)(vlSelfRef.top_tb__DOT__led))))) {
            VL_WRITEF_NX("[%0t] %%Error: top_tb.sv:43: Assertion failed in %Ntop_tb: [%0t] Expected led=0001 after reset, got %b\n",0,
                         64,VL_TIME_UNITED_Q(1000),
                         -9,vlSymsp->name(),64,VL_TIME_UNITED_Q(1000),
                         -9,4,(IData)(vlSelfRef.top_tb__DOT__led));
            VL_STOP_MT("C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 43, "");
        }
    }
    top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0xc8U;
    while (VL_LTS_III(32, 0U, top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        co_await vlSelfRef.__VtrigSched_ha88125cf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge top_tb.clk)", 
                                                             "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                                             46);
        top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (top_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_WRITEF_NX("[%0t] LED state: %b\n=== top_tb: simulation end ===\n",0,
                 64,VL_TIME_UNITED_Q(1000),-9,4,(IData)(vlSelfRef.top_tb__DOT__led));
    VL_FINISH_MT("C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 50, "");
}

VL_INLINE_OPT VlCoroutine Vtop_tb___024root___eval_initial__TOP__Vtiming__2(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x1388ULL, 
                                             nullptr, 
                                             "C:/Users/germa/Documents/projects/FPGA/template/hdl/top/tb\\top_tb.sv", 
                                             20);
        vlSelfRef.top_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.top_tb__DOT__clk)));
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vtop_tb___024root___dump_triggers__act(Vtop_tb___024root* vlSelf);
#endif  // VL_DEBUG

void Vtop_tb___024root___eval_triggers__act(Vtop_tb___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop_tb___024root___eval_triggers__act\n"); );
    Vtop_tb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered.setBit(0U, ((IData)(vlSelfRef.top_tb__DOT__clk) 
                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0))));
    vlSelfRef.__VactTriggered.setBit(1U, ((~ (IData)(vlSelfRef.top_tb__DOT__rst_n)) 
                                          & (IData)(vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__rst_n__0)));
    vlSelfRef.__VactTriggered.setBit(2U, vlSelfRef.__VdlySched.awaitingCurrentTime());
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__clk__0 
        = vlSelfRef.top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__top_tb__DOT__rst_n__0 
        = vlSelfRef.top_tb__DOT__rst_n;
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vtop_tb___024root___dump_triggers__act(vlSelf);
    }
#endif
}
