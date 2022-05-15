// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vpicorv32_wrapper.h for the primary calling header

#include "Vpicorv32_wrapper_axi4_mem_periph.h"
#include "Vpicorv32_wrapper__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(Vpicorv32_wrapper_axi4_mem_periph) {
    // Reset internal values
    // Reset structure values
    _ctor_var_reset();
}

void Vpicorv32_wrapper_axi4_mem_periph::__Vconfigure(Vpicorv32_wrapper__Syms* vlSymsp, bool first) {
    if (0 && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
}

Vpicorv32_wrapper_axi4_mem_periph::~Vpicorv32_wrapper_axi4_mem_periph() {
}

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_mem_periph::_sequent__TOP__picorv32_wrapper__mem__3(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_mem_periph::_sequent__TOP__picorv32_wrapper__mem__3\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_wdata 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_wready 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_waddr 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_awready 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_raddr 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_arready 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rdata 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_bvalid 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid 
        = vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v0 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v1 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v2 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v3 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v4 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v5 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v6 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v7 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v0 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v1 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v2 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v3 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v4 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v5 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v6 = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v7 = 0U;
}

void Vpicorv32_wrapper_axi4_mem_periph::_initial__TOP__picorv32_wrapper__mem__4(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_mem_periph::_initial__TOP__picorv32_wrapper__mem__4\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Variables
    WData/*95:0*/ __Vtemp1[3];
    WData/*127:0*/ __Vtemp2[4];
    // Body
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose 
        = (0U != VL_TESTPLUSARGS_I("verbose"));
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata = 0U;
    __Vtemp1[0U] = 0x64756d70U;
    __Vtemp1[1U] = 0x7075742eU;
    __Vtemp1[2U] = 0x6f7574U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__out_file = VL_FOPEN_WI(3
                                                                      , __Vtemp1
                                                                      , 0x77U);
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en = 0U;
    __Vtemp2[0U] = 0x2e686578U;
    __Vtemp2[1U] = 0x2f6a7067U;
    __Vtemp2[2U] = 0x77617265U;
    __Vtemp2[3U] = 0x6669726dU;
    VL_READMEM_N(true, 32, 262144, 0, VL_CVT_PACK_STR_NW(4, __Vtemp2)
                 , vlSymsp->TOP__picorv32_wrapper__mem.jpgmem
                 , 0, ~VL_ULL(0));
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__i = 0U;
    while (VL_GTS_III(1,32,32, 0xf4240U, vlSymsp->TOP__picorv32_wrapper__mem.__PVT__i)) {
        vlSymsp->TOP__picorv32_wrapper__mem.wkmem[(0x7ffffU 
                                                   & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__i)] = 0U;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__i 
            = ((IData)(1U) + vlSymsp->TOP__picorv32_wrapper__mem.__PVT__i);
    }
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid = 0U;
}

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_mem_periph::_sequent__TOP__picorv32_wrapper__mem__5(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_mem_periph::_sequent__TOP__picorv32_wrapper__mem__5\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid) 
         & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en) 
               | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr))))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn 
            = (1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                       ? 4U : 0U) >> 2U));
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_arready = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_raddr = 1U;
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid) 
         & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en) 
               | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr))))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_awready = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_waddr = 1U;
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid) 
         & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en) 
               | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata))))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_wready = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_wdata = 1U;
    }
    if (((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid)) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en))) {
        if (VL_UNLIKELY(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose)) {
            VL_WRITEF("RD: ADDR=%08x DATA=%08x%s\n",
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr,
                      32,vlSymsp->TOP__picorv32_wrapper__mem.memory
                      [(0x7ffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
                                    >> 2U))],40,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn)
                                                  ? VL_ULL(0x20494e534e)
                                                  : VL_ULL(0)));
        }
        if ((0x200000U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr)) {
            vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 0U;
            vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rdata 
                = vlSymsp->TOP__picorv32_wrapper__mem.memory
                [(0x7ffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
                              >> 2U))];
            vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid = 1U;
        } else {
            if (((0x30000000U <= vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr) 
                 & (0x31000000U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 0U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rdata 
                    = vlSymsp->TOP__picorv32_wrapper__mem.jpgmem
                    [(0x3ffffU & ((vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
                                   - (IData)(0x30000000U)) 
                                  >> 2U))];
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid = 1U;
            } else {
                if (VL_LIKELY(((0x40000000U <= vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr) 
                               & (0x42000000U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr)))) {
                    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 0U;
                    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rdata 
                        = vlSymsp->TOP__picorv32_wrapper__mem.wkmem
                        [(0x7ffffU & ((vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
                                       - (IData)(0x40000000U)) 
                                      >> 2U))];
                    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid = 1U;
                } else {
                    VL_WRITEF("OUT-OF-BOUNDS MEMORY READ FROM %08x\n",
                              32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr);
                    VL_FINISH_MT("axi4_mem_periph.v", 126, "");
                }
            }
        }
    }
    if ((((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid)) 
          & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en)) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en))) {
        if (VL_UNLIKELY(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose)) {
            VL_WRITEF("WR: ADDR=%08x DATA=%08x STRB=%04b\n",
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr,
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata,
                      4,(IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb));
        }
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en = 0U;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en = 0U;
        if ((0x200000U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr)) {
            if ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v0 
                    = (0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata);
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v0 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v0 = 0U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v0 
                    = (0x7ffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                   >> 2U));
            }
            if ((2U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v1 
                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                >> 8U));
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v1 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v1 = 8U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v1 
                    = (0x7ffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                   >> 2U));
            }
            if ((4U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v2 
                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                >> 0x10U));
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v2 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v2 = 0x10U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v2 
                    = (0x7ffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                   >> 2U));
            }
            if ((8U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v3 
                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                >> 0x18U));
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v3 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v3 = 0x18U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v3 
                    = (0x7ffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                   >> 2U));
            }
        } else {
            if ((0x10000000U == vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr)) {
                if (VL_LIKELY(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose)) {
                    if (((0x20U <= vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata) 
                         & (0x80U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata))) {
                        VL_WRITEF("OUT: '%c'\n",8,(0xffU 
                                                   & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata));
                    } else {
                        VL_WRITEF("OUT: %3#\n",32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata);
                    }
                } else {
                    VL_WRITEF("%c",8,(0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata));
                }
            } else {
                if (VL_UNLIKELY((0x20000000U == vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr))) {
                    VL_FWRITEF(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__out_file,"%c",
                               8,(0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata));
                    if (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__out_file) { fflush(VL_CVT_I_FP(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__out_file)); }
                } else {
                    if (VL_UNLIKELY(((0x30000000U <= vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr) 
                                     & (0x31000000U 
                                        > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr)))) {
                        VL_WRITEF("JPEG memory is read-only!\n");
                    } else {
                        if (VL_LIKELY(((0x40000000U 
                                        <= vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr) 
                                       & (0x42000000U 
                                          > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr)))) {
                            if ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v0 
                                    = (0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata);
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v0 = 1U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v0 = 0U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v0 
                                    = (0x7ffffU & (
                                                   (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                                    - (IData)(0x40000000U)) 
                                                   >> 2U));
                            }
                            if ((2U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v1 
                                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                                >> 8U));
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v1 = 1U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v1 = 8U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v1 
                                    = (0x7ffffU & (
                                                   (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                                    - (IData)(0x40000000U)) 
                                                   >> 2U));
                            }
                            if ((4U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v2 
                                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                                >> 0x10U));
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v2 = 1U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v2 = 0x10U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v2 
                                    = (0x7ffffU & (
                                                   (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                                    - (IData)(0x40000000U)) 
                                                   >> 2U));
                            }
                            if ((8U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v3 
                                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                                >> 0x18U));
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v3 = 1U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v3 = 0x18U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v3 
                                    = (0x7ffffU & (
                                                   (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                                    - (IData)(0x40000000U)) 
                                                   >> 2U));
                            }
                        } else {
                            VL_WRITEF("OUT-OF-BOUNDS MEMORY WRITE TO %08x\n",
                                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr);
                            VL_FINISH_MT("axi4_mem_periph.v", 167, "");
                        }
                    }
                }
            }
        }
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_bvalid = 1U;
    }
}

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_mem_periph::_sequent__TOP__picorv32_wrapper__mem__6(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_mem_periph::_sequent__TOP__picorv32_wrapper__mem__6\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_arready = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_awready = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_wready = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_raddr = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_waddr = 0U;
    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_wdata = 0U;
    if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid) 
         & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
            & (~ (IData)((0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb))))))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid = 0U;
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid) 
         & ((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_valid) 
            & (0U != (IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb))))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_bvalid = 0U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid) 
          & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready)) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr)))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn 
            = (1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                       ? 4U : 0U) >> 2U));
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid) 
          & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready)) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr)))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en = 1U;
    }
    if ((((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid) 
          & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready)) 
         & (~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata)))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en = 1U;
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_arvalid) 
         & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en) 
               | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr))))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn 
            = (1U & (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_instr)
                       ? 4U : 0U) >> 2U));
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_arready = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_raddr = 1U;
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_awvalid) 
         & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en) 
               | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr))))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_addr;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_awready = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_waddr = 1U;
    }
    if (((IData)(vlSymsp->TOP__picorv32_wrapper.__PVT__mem_axi_wvalid) 
         & (~ ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en) 
               | (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata))))) {
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wdata;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb 
            = vlSymsp->TOP__picorv32_wrapper.__PVT__uut__DOT__mem_wstrb;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_wready = 1U;
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_wdata = 1U;
    }
    if (((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid)) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en))) {
        if (VL_UNLIKELY(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose)) {
            VL_WRITEF("RD: ADDR=%08x DATA=%08x%s\n",
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr,
                      32,vlSymsp->TOP__picorv32_wrapper__mem.memory
                      [(0x7ffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
                                    >> 2U))],40,((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_rinsn)
                                                  ? VL_ULL(0x20494e534e)
                                                  : VL_ULL(0)));
        }
        if ((0x200000U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr)) {
            vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 0U;
            vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rdata 
                = vlSymsp->TOP__picorv32_wrapper__mem.memory
                [(0x7ffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
                              >> 2U))];
            vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid = 1U;
        } else {
            if (((0x30000000U <= vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr) 
                 & (0x31000000U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 0U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rdata 
                    = vlSymsp->TOP__picorv32_wrapper__mem.jpgmem
                    [(0x3ffffU & ((vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
                                   - (IData)(0x30000000U)) 
                                  >> 2U))];
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid = 1U;
            } else {
                if (VL_LIKELY(((0x40000000U <= vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr) 
                               & (0x42000000U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr)))) {
                    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr_en = 0U;
                    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rdata 
                        = vlSymsp->TOP__picorv32_wrapper__mem.wkmem
                        [(0x7ffffU & ((vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr 
                                       - (IData)(0x40000000U)) 
                                      >> 2U))];
                    vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid = 1U;
                } else {
                    VL_WRITEF("OUT-OF-BOUNDS MEMORY READ FROM %08x\n",
                              32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_raddr);
                    VL_FINISH_MT("axi4_mem_periph.v", 126, "");
                }
            }
        }
    }
    if ((((~ (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid)) 
          & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en)) 
         & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en))) {
        if (VL_UNLIKELY(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose)) {
            VL_WRITEF("WR: ADDR=%08x DATA=%08x STRB=%04b\n",
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr,
                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata,
                      4,(IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb));
        }
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr_en = 0U;
        vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata_en = 0U;
        if ((0x200000U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr)) {
            if ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v4 
                    = (0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata);
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v4 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v4 = 0U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v4 
                    = (0x7ffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                   >> 2U));
            }
            if ((2U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v5 
                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                >> 8U));
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v5 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v5 = 8U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v5 
                    = (0x7ffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                   >> 2U));
            }
            if ((4U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v6 
                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                >> 0x10U));
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v6 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v6 = 0x10U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v6 
                    = (0x7ffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                   >> 2U));
            }
            if ((8U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v7 
                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                >> 0x18U));
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v7 = 1U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v7 = 0x18U;
                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v7 
                    = (0x7ffffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                   >> 2U));
            }
        } else {
            if ((0x10000000U == vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr)) {
                if (VL_LIKELY(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__verbose)) {
                    if (((0x20U <= vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata) 
                         & (0x80U > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata))) {
                        VL_WRITEF("OUT: '%c'\n",8,(0xffU 
                                                   & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata));
                    } else {
                        VL_WRITEF("OUT: %3#\n",32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata);
                    }
                } else {
                    VL_WRITEF("%c",8,(0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata));
                }
            } else {
                if (VL_UNLIKELY((0x20000000U == vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr))) {
                    VL_FWRITEF(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__out_file,"%c",
                               8,(0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata));
                    if (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__out_file) { fflush(VL_CVT_I_FP(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__out_file)); }
                } else {
                    if (VL_UNLIKELY(((0x30000000U <= vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr) 
                                     & (0x31000000U 
                                        > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr)))) {
                        VL_WRITEF("JPEG memory is read-only!\n");
                    } else {
                        if (VL_LIKELY(((0x40000000U 
                                        <= vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr) 
                                       & (0x42000000U 
                                          > vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr)))) {
                            if ((1U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v4 
                                    = (0xffU & vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata);
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v4 = 1U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v4 = 0U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v4 
                                    = (0x7ffffU & (
                                                   (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                                    - (IData)(0x40000000U)) 
                                                   >> 2U));
                            }
                            if ((2U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v5 
                                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                                >> 8U));
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v5 = 1U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v5 = 8U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v5 
                                    = (0x7ffffU & (
                                                   (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                                    - (IData)(0x40000000U)) 
                                                   >> 2U));
                            }
                            if ((4U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v6 
                                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                                >> 0x10U));
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v6 = 1U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v6 = 0x10U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v6 
                                    = (0x7ffffU & (
                                                   (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                                    - (IData)(0x40000000U)) 
                                                   >> 2U));
                            }
                            if ((8U & (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wstrb))) {
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v7 
                                    = (0xffU & (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_wdata 
                                                >> 0x18U));
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v7 = 1U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v7 = 0x18U;
                                vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v7 
                                    = (0x7ffffU & (
                                                   (vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr 
                                                    - (IData)(0x40000000U)) 
                                                   >> 2U));
                            }
                        } else {
                            VL_WRITEF("OUT-OF-BOUNDS MEMORY WRITE TO %08x\n",
                                      32,vlSymsp->TOP__picorv32_wrapper__mem.__PVT__latched_waddr);
                            VL_FINISH_MT("axi4_mem_periph.v", 167, "");
                        }
                    }
                }
            }
        }
        vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_bvalid = 1U;
    }
}

VL_INLINE_OPT void Vpicorv32_wrapper_axi4_mem_periph::_sequent__TOP__picorv32_wrapper__mem__7(Vpicorv32_wrapper__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_mem_periph::_sequent__TOP__picorv32_wrapper__mem__7\n"); );
    Vpicorv32_wrapper* __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_raddr 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_raddr;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_waddr 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_waddr;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__fast_wdata 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__fast_wdata;
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v0) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v0))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v0]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v0) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v0)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v1) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v1))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v1]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v1) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v1)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v2) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v2))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v2]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v2) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v2)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v3) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v3))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v3]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v3) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v3)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v4) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v4] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v4))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v4]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v4) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v4)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v5) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v5] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v5))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v5]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v5) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v5)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v6) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v6] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v6))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v6]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v6) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v6)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__memory__v7) {
        vlSymsp->TOP__picorv32_wrapper__mem.memory[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v7] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v7))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.memory
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__memory__v7]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__memory__v7) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__memory__v7)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v0) {
        vlSymsp->TOP__picorv32_wrapper__mem.wkmem[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v0] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v0))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.wkmem
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v0]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v0) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v0)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v1) {
        vlSymsp->TOP__picorv32_wrapper__mem.wkmem[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v1] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v1))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.wkmem
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v1]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v1) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v1)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v2) {
        vlSymsp->TOP__picorv32_wrapper__mem.wkmem[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v2] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v2))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.wkmem
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v2]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v2) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v2)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v3) {
        vlSymsp->TOP__picorv32_wrapper__mem.wkmem[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v3] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v3))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.wkmem
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v3]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v3) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v3)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v4) {
        vlSymsp->TOP__picorv32_wrapper__mem.wkmem[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v4] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v4))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.wkmem
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v4]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v4) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v4)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v5) {
        vlSymsp->TOP__picorv32_wrapper__mem.wkmem[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v5] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v5))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.wkmem
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v5]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v5) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v5)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v6) {
        vlSymsp->TOP__picorv32_wrapper__mem.wkmem[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v6] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v6))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.wkmem
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v6]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v6) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v6)));
    }
    if (vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvset__wkmem__v7) {
        vlSymsp->TOP__picorv32_wrapper__mem.wkmem[vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v7] 
            = (((~ ((IData)(0xffU) << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v7))) 
                & vlSymsp->TOP__picorv32_wrapper__mem.wkmem
                [vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvdim0__wkmem__v7]) 
               | ((IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvval__wkmem__v7) 
                  << (IData)(vlSymsp->TOP__picorv32_wrapper__mem.__Vdlyvlsb__wkmem__v7)));
    }
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_arready 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_arready;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_awready 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_awready;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_wready 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_wready;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rvalid 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rvalid;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_bvalid 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_bvalid;
    vlSymsp->TOP__picorv32_wrapper__mem.__PVT__mem_axi_rdata 
        = vlSymsp->TOP__picorv32_wrapper__mem.__Vdly__mem_axi_rdata;
}

void Vpicorv32_wrapper_axi4_mem_periph::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+        Vpicorv32_wrapper_axi4_mem_periph::_ctor_var_reset\n"); );
    // Body
    __PVT__clk = VL_RAND_RESET_I(1);
    __PVT__mem_axi_awvalid = VL_RAND_RESET_I(1);
    __PVT__mem_axi_awready = VL_RAND_RESET_I(1);
    __PVT__mem_axi_awaddr = VL_RAND_RESET_I(32);
    __PVT__mem_axi_awprot = VL_RAND_RESET_I(3);
    __PVT__mem_axi_wvalid = VL_RAND_RESET_I(1);
    __PVT__mem_axi_wready = VL_RAND_RESET_I(1);
    __PVT__mem_axi_wdata = VL_RAND_RESET_I(32);
    __PVT__mem_axi_wstrb = VL_RAND_RESET_I(4);
    __PVT__mem_axi_bvalid = VL_RAND_RESET_I(1);
    __PVT__mem_axi_bready = VL_RAND_RESET_I(1);
    __PVT__mem_axi_arvalid = VL_RAND_RESET_I(1);
    __PVT__mem_axi_arready = VL_RAND_RESET_I(1);
    __PVT__mem_axi_araddr = VL_RAND_RESET_I(32);
    __PVT__mem_axi_arprot = VL_RAND_RESET_I(3);
    __PVT__mem_axi_rvalid = VL_RAND_RESET_I(1);
    __PVT__mem_axi_rready = VL_RAND_RESET_I(1);
    __PVT__mem_axi_rdata = VL_RAND_RESET_I(32);
    __PVT__tests_passed = VL_RAND_RESET_I(1);
    { int __Vi0=0; for (; __Vi0<524288; ++__Vi0) {
            memory[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<262144; ++__Vi0) {
            jpgmem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    { int __Vi0=0; for (; __Vi0<524288; ++__Vi0) {
            wkmem[__Vi0] = VL_RAND_RESET_I(32);
    }}
    __PVT__verbose = VL_RAND_RESET_I(1);
    __PVT__i = VL_RAND_RESET_I(32);
    __PVT__out_file = 0;
    __PVT__latched_raddr_en = VL_RAND_RESET_I(1);
    __PVT__latched_waddr_en = VL_RAND_RESET_I(1);
    __PVT__latched_wdata_en = VL_RAND_RESET_I(1);
    __PVT__fast_raddr = VL_RAND_RESET_I(1);
    __PVT__fast_waddr = VL_RAND_RESET_I(1);
    __PVT__fast_wdata = VL_RAND_RESET_I(1);
    __PVT__latched_raddr = VL_RAND_RESET_I(32);
    __PVT__latched_waddr = VL_RAND_RESET_I(32);
    __PVT__latched_wdata = VL_RAND_RESET_I(32);
    __PVT__latched_wstrb = VL_RAND_RESET_I(4);
    __PVT__latched_rinsn = VL_RAND_RESET_I(1);
    __Vdly__mem_axi_arready = VL_RAND_RESET_I(1);
    __Vdly__fast_raddr = VL_RAND_RESET_I(1);
    __Vdly__mem_axi_awready = VL_RAND_RESET_I(1);
    __Vdly__fast_waddr = VL_RAND_RESET_I(1);
    __Vdly__mem_axi_wready = VL_RAND_RESET_I(1);
    __Vdly__fast_wdata = VL_RAND_RESET_I(1);
    __Vdly__mem_axi_rdata = VL_RAND_RESET_I(32);
    __Vdly__mem_axi_rvalid = VL_RAND_RESET_I(1);
    __Vdlyvdim0__memory__v0 = 0;
    __Vdlyvlsb__memory__v0 = 0;
    __Vdlyvval__memory__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v0 = 0;
    __Vdlyvdim0__memory__v1 = 0;
    __Vdlyvlsb__memory__v1 = 0;
    __Vdlyvval__memory__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v1 = 0;
    __Vdlyvdim0__memory__v2 = 0;
    __Vdlyvlsb__memory__v2 = 0;
    __Vdlyvval__memory__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v2 = 0;
    __Vdlyvdim0__memory__v3 = 0;
    __Vdlyvlsb__memory__v3 = 0;
    __Vdlyvval__memory__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v3 = 0;
    __Vdlyvdim0__wkmem__v0 = 0;
    __Vdlyvlsb__wkmem__v0 = 0;
    __Vdlyvval__wkmem__v0 = VL_RAND_RESET_I(8);
    __Vdlyvset__wkmem__v0 = 0;
    __Vdlyvdim0__wkmem__v1 = 0;
    __Vdlyvlsb__wkmem__v1 = 0;
    __Vdlyvval__wkmem__v1 = VL_RAND_RESET_I(8);
    __Vdlyvset__wkmem__v1 = 0;
    __Vdlyvdim0__wkmem__v2 = 0;
    __Vdlyvlsb__wkmem__v2 = 0;
    __Vdlyvval__wkmem__v2 = VL_RAND_RESET_I(8);
    __Vdlyvset__wkmem__v2 = 0;
    __Vdlyvdim0__wkmem__v3 = 0;
    __Vdlyvlsb__wkmem__v3 = 0;
    __Vdlyvval__wkmem__v3 = VL_RAND_RESET_I(8);
    __Vdlyvset__wkmem__v3 = 0;
    __Vdly__mem_axi_bvalid = VL_RAND_RESET_I(1);
    __Vdlyvdim0__memory__v4 = 0;
    __Vdlyvlsb__memory__v4 = 0;
    __Vdlyvval__memory__v4 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v4 = 0;
    __Vdlyvdim0__memory__v5 = 0;
    __Vdlyvlsb__memory__v5 = 0;
    __Vdlyvval__memory__v5 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v5 = 0;
    __Vdlyvdim0__memory__v6 = 0;
    __Vdlyvlsb__memory__v6 = 0;
    __Vdlyvval__memory__v6 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v6 = 0;
    __Vdlyvdim0__memory__v7 = 0;
    __Vdlyvlsb__memory__v7 = 0;
    __Vdlyvval__memory__v7 = VL_RAND_RESET_I(8);
    __Vdlyvset__memory__v7 = 0;
    __Vdlyvdim0__wkmem__v4 = 0;
    __Vdlyvlsb__wkmem__v4 = 0;
    __Vdlyvval__wkmem__v4 = VL_RAND_RESET_I(8);
    __Vdlyvset__wkmem__v4 = 0;
    __Vdlyvdim0__wkmem__v5 = 0;
    __Vdlyvlsb__wkmem__v5 = 0;
    __Vdlyvval__wkmem__v5 = VL_RAND_RESET_I(8);
    __Vdlyvset__wkmem__v5 = 0;
    __Vdlyvdim0__wkmem__v6 = 0;
    __Vdlyvlsb__wkmem__v6 = 0;
    __Vdlyvval__wkmem__v6 = VL_RAND_RESET_I(8);
    __Vdlyvset__wkmem__v6 = 0;
    __Vdlyvdim0__wkmem__v7 = 0;
    __Vdlyvlsb__wkmem__v7 = 0;
    __Vdlyvval__wkmem__v7 = VL_RAND_RESET_I(8);
    __Vdlyvset__wkmem__v7 = 0;
}
