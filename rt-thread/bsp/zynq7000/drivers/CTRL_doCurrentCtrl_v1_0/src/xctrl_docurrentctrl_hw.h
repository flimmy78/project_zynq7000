// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2015.2
// Copyright (C) 2015 Xilinx Inc. All rights reserved.
// 
// ==============================================================

// BUSA
// 0x00 : Control signals
//        bit 0  - ap_start (Read/Write/COH)
//        bit 1  - ap_done (Read/COR)
//        bit 2  - ap_idle (Read)
//        bit 3  - ap_ready (Read)
//        bit 7  - auto_restart (Read/Write)
//        others - reserved
// 0x04 : Global Interrupt Enable Register
//        bit 0  - Global Interrupt Enable (Read/Write)
//        others - reserved
// 0x08 : IP Interrupt Enable Register (Read/Write)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x0c : IP Interrupt Status Register (Read/TOW)
//        bit 0  - Channel 0 (ap_done)
//        bit 1  - Channel 1 (ap_ready)
//        others - reserved
// 0x10 : Data signal of in_f_iqref
//        bit 31~0 - in_f_iqref[31:0] (Read/Write)
// 0x14 : reserved
// 0x18 : Data signal of in_f_idref
//        bit 31~0 - in_f_idref[31:0] (Read/Write)
// 0x1c : reserved
// 0x20 : Data signal of in_f_udc
//        bit 31~0 - in_f_udc[31:0] (Read/Write)
// 0x24 : reserved
// 0x28 : Data signal of in_f_ttop
//        bit 31~0 - in_f_ttop[31:0] (Read/Write)
// 0x2c : reserved
// 0x30 : Data signal of in_f_ia
//        bit 31~0 - in_f_ia[31:0] (Read/Write)
// 0x34 : reserved
// 0x38 : Data signal of in_f_ib
//        bit 31~0 - in_f_ib[31:0] (Read/Write)
// 0x3c : reserved
// 0x40 : Data signal of in_f_ic
//        bit 31~0 - in_f_ic[31:0] (Read/Write)
// 0x44 : reserved
// 0x48 : Data signal of in_f_theta
//        bit 31~0 - in_f_theta[31:0] (Read/Write)
// 0x4c : reserved
// 0x50 : Data signal of in_f_kp_id
//        bit 31~0 - in_f_kp_id[31:0] (Read/Write)
// 0x54 : reserved
// 0x58 : Data signal of in_f_ki_id
//        bit 31~0 - in_f_ki_id[31:0] (Read/Write)
// 0x5c : reserved
// 0x60 : Data signal of in_f_id_pidmax
//        bit 31~0 - in_f_id_pidmax[31:0] (Read/Write)
// 0x64 : reserved
// 0x68 : Data signal of in_f_id_pidmin
//        bit 31~0 - in_f_id_pidmin[31:0] (Read/Write)
// 0x6c : reserved
// 0x70 : Data signal of in_f_kp_iq
//        bit 31~0 - in_f_kp_iq[31:0] (Read/Write)
// 0x74 : reserved
// 0x78 : Data signal of in_f_ki_iq
//        bit 31~0 - in_f_ki_iq[31:0] (Read/Write)
// 0x7c : reserved
// 0x80 : Data signal of in_f_iq_pidmax
//        bit 31~0 - in_f_iq_pidmax[31:0] (Read/Write)
// 0x84 : reserved
// 0x88 : Data signal of in_f_iq_pidmin
//        bit 31~0 - in_f_iq_pidmin[31:0] (Read/Write)
// 0x8c : reserved
// 0x90 : Data signal of in_f_ud
//        bit 31~0 - in_f_ud[31:0] (Read/Write)
// 0x94 : reserved
// 0x98 : Data signal of in_f_uq
//        bit 31~0 - in_f_uq[31:0] (Read/Write)
// 0x9c : reserved
// 0xa0 : Data signal of in_f_mod
//        bit 31~0 - in_f_mod[31:0] (Read/Write)
// 0xa4 : reserved
// 0xa8 : Data signal of t_f_ta
//        bit 31~0 - t_f_ta[31:0] (Read)
// 0xac : Control signal of t_f_ta
//        bit 0  - t_f_ta_ap_vld (Read/COR)
//        others - reserved
// 0xb0 : Data signal of t_f_tb
//        bit 31~0 - t_f_tb[31:0] (Read)
// 0xb4 : Control signal of t_f_tb
//        bit 0  - t_f_tb_ap_vld (Read/COR)
//        others - reserved
// 0xb8 : Data signal of t_f_tc
//        bit 31~0 - t_f_tc[31:0] (Read)
// 0xbc : Control signal of t_f_tc
//        bit 0  - t_f_tc_ap_vld (Read/COR)
//        others - reserved
// 0xc0 : Data signal of t_f_ud_out
//        bit 31~0 - t_f_ud_out[31:0] (Read)
// 0xc4 : Control signal of t_f_ud_out
//        bit 0  - t_f_ud_out_ap_vld (Read/COR)
//        others - reserved
// 0xc8 : Data signal of t_f_uq_out
//        bit 31~0 - t_f_uq_out[31:0] (Read)
// 0xcc : Control signal of t_f_uq_out
//        bit 0  - t_f_uq_out_ap_vld (Read/COR)
//        others - reserved
// (SC = Self Clear, COR = Clear on Read, TOW = Toggle on Write, COH = Clear on Handshake)

#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_AP_CTRL             0x00
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_GIE                 0x04
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IER                 0x08
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_ISR                 0x0c
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_IQREF_DATA     0x10
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_IQREF_DATA     32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_IDREF_DATA     0x18
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_IDREF_DATA     32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_UDC_DATA       0x20
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_UDC_DATA       32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_TTOP_DATA      0x28
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_TTOP_DATA      32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_IA_DATA        0x30
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_IA_DATA        32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_IB_DATA        0x38
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_IB_DATA        32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_IC_DATA        0x40
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_IC_DATA        32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_THETA_DATA     0x48
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_THETA_DATA     32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_KP_ID_DATA     0x50
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_KP_ID_DATA     32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_KI_ID_DATA     0x58
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_KI_ID_DATA     32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_ID_PIDMAX_DATA 0x60
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_ID_PIDMAX_DATA 32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_ID_PIDMIN_DATA 0x68
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_ID_PIDMIN_DATA 32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_KP_IQ_DATA     0x70
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_KP_IQ_DATA     32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_KI_IQ_DATA     0x78
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_KI_IQ_DATA     32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_IQ_PIDMAX_DATA 0x80
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_IQ_PIDMAX_DATA 32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_IQ_PIDMIN_DATA 0x88
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_IQ_PIDMIN_DATA 32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_UD_DATA        0x90
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_UD_DATA        32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_UQ_DATA        0x98
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_UQ_DATA        32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_IN_F_MOD_DATA       0xa0
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_IN_F_MOD_DATA       32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_T_F_TA_DATA         0xa8
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_T_F_TA_DATA         32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_T_F_TA_CTRL         0xac
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_T_F_TB_DATA         0xb0
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_T_F_TB_DATA         32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_T_F_TB_CTRL         0xb4
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_T_F_TC_DATA         0xb8
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_T_F_TC_DATA         32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_T_F_TC_CTRL         0xbc
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_T_F_UD_OUT_DATA     0xc0
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_T_F_UD_OUT_DATA     32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_T_F_UD_OUT_CTRL     0xc4
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_T_F_UQ_OUT_DATA     0xc8
#define XCTRL_DOCURRENTCTRL_BUSA_BITS_T_F_UQ_OUT_DATA     32
#define XCTRL_DOCURRENTCTRL_BUSA_ADDR_T_F_UQ_OUT_CTRL     0xcc

