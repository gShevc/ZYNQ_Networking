// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vtop_tb.h for the primary calling header

#ifndef VERILATED_VTOP_TB___024ROOT_H_
#define VERILATED_VTOP_TB___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vtop_tb__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vtop_tb___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ top_tb__DOT__clk;
    CData/*0:0*/ top_tb__DOT__rst_n;
    CData/*3:0*/ top_tb__DOT__led;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__top_tb__DOT__rst_n__0;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ top_tb__DOT__dut__DOT__counter;
    IData/*31:0*/ __VactIterCount;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha88125cf__0;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vtop_tb__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vtop_tb___024root(Vtop_tb__Syms* symsp, const char* v__name);
    ~Vtop_tb___024root();
    VL_UNCOPYABLE(Vtop_tb___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
