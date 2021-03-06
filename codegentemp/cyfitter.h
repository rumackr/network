/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.1 Update 1
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2017 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* BUSY_PIN */
#define BUSY_PIN__0__INTTYPE CYREG_PICU0_INTTYPE6
#define BUSY_PIN__0__MASK 0x40u
#define BUSY_PIN__0__PC CYREG_PRT0_PC6
#define BUSY_PIN__0__PORT 0u
#define BUSY_PIN__0__SHIFT 6u
#define BUSY_PIN__AG CYREG_PRT0_AG
#define BUSY_PIN__AMUX CYREG_PRT0_AMUX
#define BUSY_PIN__BIE CYREG_PRT0_BIE
#define BUSY_PIN__BIT_MASK CYREG_PRT0_BIT_MASK
#define BUSY_PIN__BYP CYREG_PRT0_BYP
#define BUSY_PIN__CTL CYREG_PRT0_CTL
#define BUSY_PIN__DM0 CYREG_PRT0_DM0
#define BUSY_PIN__DM1 CYREG_PRT0_DM1
#define BUSY_PIN__DM2 CYREG_PRT0_DM2
#define BUSY_PIN__DR CYREG_PRT0_DR
#define BUSY_PIN__INP_DIS CYREG_PRT0_INP_DIS
#define BUSY_PIN__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define BUSY_PIN__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define BUSY_PIN__LCD_EN CYREG_PRT0_LCD_EN
#define BUSY_PIN__MASK 0x40u
#define BUSY_PIN__PORT 0u
#define BUSY_PIN__PRT CYREG_PRT0_PRT
#define BUSY_PIN__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define BUSY_PIN__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define BUSY_PIN__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define BUSY_PIN__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define BUSY_PIN__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define BUSY_PIN__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define BUSY_PIN__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define BUSY_PIN__PS CYREG_PRT0_PS
#define BUSY_PIN__SHIFT 6u
#define BUSY_PIN__SLW CYREG_PRT0_SLW

/* COLLISION_PIN */
#define COLLISION_PIN__0__INTTYPE CYREG_PICU0_INTTYPE5
#define COLLISION_PIN__0__MASK 0x20u
#define COLLISION_PIN__0__PC CYREG_PRT0_PC5
#define COLLISION_PIN__0__PORT 0u
#define COLLISION_PIN__0__SHIFT 5u
#define COLLISION_PIN__AG CYREG_PRT0_AG
#define COLLISION_PIN__AMUX CYREG_PRT0_AMUX
#define COLLISION_PIN__BIE CYREG_PRT0_BIE
#define COLLISION_PIN__BIT_MASK CYREG_PRT0_BIT_MASK
#define COLLISION_PIN__BYP CYREG_PRT0_BYP
#define COLLISION_PIN__CTL CYREG_PRT0_CTL
#define COLLISION_PIN__DM0 CYREG_PRT0_DM0
#define COLLISION_PIN__DM1 CYREG_PRT0_DM1
#define COLLISION_PIN__DM2 CYREG_PRT0_DM2
#define COLLISION_PIN__DR CYREG_PRT0_DR
#define COLLISION_PIN__INP_DIS CYREG_PRT0_INP_DIS
#define COLLISION_PIN__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define COLLISION_PIN__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define COLLISION_PIN__LCD_EN CYREG_PRT0_LCD_EN
#define COLLISION_PIN__MASK 0x20u
#define COLLISION_PIN__PORT 0u
#define COLLISION_PIN__PRT CYREG_PRT0_PRT
#define COLLISION_PIN__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define COLLISION_PIN__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define COLLISION_PIN__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define COLLISION_PIN__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define COLLISION_PIN__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define COLLISION_PIN__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define COLLISION_PIN__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define COLLISION_PIN__PS CYREG_PRT0_PS
#define COLLISION_PIN__SHIFT 5u
#define COLLISION_PIN__SLW CYREG_PRT0_SLW

/* IDLE_PIN */
#define IDLE_PIN__0__INTTYPE CYREG_PICU0_INTTYPE7
#define IDLE_PIN__0__MASK 0x80u
#define IDLE_PIN__0__PC CYREG_PRT0_PC7
#define IDLE_PIN__0__PORT 0u
#define IDLE_PIN__0__SHIFT 7u
#define IDLE_PIN__AG CYREG_PRT0_AG
#define IDLE_PIN__AMUX CYREG_PRT0_AMUX
#define IDLE_PIN__BIE CYREG_PRT0_BIE
#define IDLE_PIN__BIT_MASK CYREG_PRT0_BIT_MASK
#define IDLE_PIN__BYP CYREG_PRT0_BYP
#define IDLE_PIN__CTL CYREG_PRT0_CTL
#define IDLE_PIN__DM0 CYREG_PRT0_DM0
#define IDLE_PIN__DM1 CYREG_PRT0_DM1
#define IDLE_PIN__DM2 CYREG_PRT0_DM2
#define IDLE_PIN__DR CYREG_PRT0_DR
#define IDLE_PIN__INP_DIS CYREG_PRT0_INP_DIS
#define IDLE_PIN__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define IDLE_PIN__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define IDLE_PIN__LCD_EN CYREG_PRT0_LCD_EN
#define IDLE_PIN__MASK 0x80u
#define IDLE_PIN__PORT 0u
#define IDLE_PIN__PRT CYREG_PRT0_PRT
#define IDLE_PIN__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define IDLE_PIN__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define IDLE_PIN__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define IDLE_PIN__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define IDLE_PIN__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define IDLE_PIN__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define IDLE_PIN__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define IDLE_PIN__PS CYREG_PRT0_PS
#define IDLE_PIN__SHIFT 7u
#define IDLE_PIN__SLW CYREG_PRT0_SLW

/* RECEIVE */
#define RECEIVE__0__INTTYPE CYREG_PICU3_INTTYPE7
#define RECEIVE__0__MASK 0x80u
#define RECEIVE__0__PC CYREG_PRT3_PC7
#define RECEIVE__0__PORT 3u
#define RECEIVE__0__SHIFT 7u
#define RECEIVE__AG CYREG_PRT3_AG
#define RECEIVE__AMUX CYREG_PRT3_AMUX
#define RECEIVE__BIE CYREG_PRT3_BIE
#define RECEIVE__BIT_MASK CYREG_PRT3_BIT_MASK
#define RECEIVE__BYP CYREG_PRT3_BYP
#define RECEIVE__CTL CYREG_PRT3_CTL
#define RECEIVE__DM0 CYREG_PRT3_DM0
#define RECEIVE__DM1 CYREG_PRT3_DM1
#define RECEIVE__DM2 CYREG_PRT3_DM2
#define RECEIVE__DR CYREG_PRT3_DR
#define RECEIVE__INP_DIS CYREG_PRT3_INP_DIS
#define RECEIVE__INTSTAT CYREG_PICU3_INTSTAT
#define RECEIVE__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define RECEIVE__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define RECEIVE__LCD_EN CYREG_PRT3_LCD_EN
#define RECEIVE__MASK 0x80u
#define RECEIVE__PORT 3u
#define RECEIVE__PRT CYREG_PRT3_PRT
#define RECEIVE__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define RECEIVE__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define RECEIVE__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define RECEIVE__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define RECEIVE__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define RECEIVE__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define RECEIVE__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define RECEIVE__PS CYREG_PRT3_PS
#define RECEIVE__SHIFT 7u
#define RECEIVE__SLW CYREG_PRT3_SLW
#define RECEIVE__SNAP CYREG_PICU3_SNAP

/* RX_INTERRUPT */
#define RX_INTERRUPT__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define RX_INTERRUPT__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define RX_INTERRUPT__INTC_MASK 0x80u
#define RX_INTERRUPT__INTC_NUMBER 7u
#define RX_INTERRUPT__INTC_PRIOR_NUM 7u
#define RX_INTERRUPT__INTC_PRIOR_REG CYREG_NVIC_PRI_7
#define RX_INTERRUPT__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define RX_INTERRUPT__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* TIMER_INTERRUPT */
#define TIMER_INTERRUPT__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define TIMER_INTERRUPT__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define TIMER_INTERRUPT__INTC_MASK 0x01u
#define TIMER_INTERRUPT__INTC_NUMBER 0u
#define TIMER_INTERRUPT__INTC_PRIOR_NUM 7u
#define TIMER_INTERRUPT__INTC_PRIOR_REG CYREG_NVIC_PRI_0
#define TIMER_INTERRUPT__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define TIMER_INTERRUPT__INTC_SET_PD_REG CYREG_NVIC_SETPEND0

/* TIMER_TimerUDB */
#define TIMER_TimerUDB_rstSts_stsreg__0__MASK 0x01u
#define TIMER_TimerUDB_rstSts_stsreg__0__POS 0
#define TIMER_TimerUDB_rstSts_stsreg__16BIT_STATUS_AUX_CTL_REG CYREG_B0_UDB11_12_ACTL
#define TIMER_TimerUDB_rstSts_stsreg__16BIT_STATUS_REG CYREG_B0_UDB11_12_ST
#define TIMER_TimerUDB_rstSts_stsreg__2__MASK 0x04u
#define TIMER_TimerUDB_rstSts_stsreg__2__POS 2
#define TIMER_TimerUDB_rstSts_stsreg__3__MASK 0x08u
#define TIMER_TimerUDB_rstSts_stsreg__3__POS 3
#define TIMER_TimerUDB_rstSts_stsreg__MASK 0x0Du
#define TIMER_TimerUDB_rstSts_stsreg__MASK_REG CYREG_B0_UDB11_MSK
#define TIMER_TimerUDB_rstSts_stsreg__STATUS_AUX_CTL_REG CYREG_B0_UDB11_ACTL
#define TIMER_TimerUDB_rstSts_stsreg__STATUS_REG CYREG_B0_UDB11_ST
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_AUX_CTL_REG CYREG_B0_UDB09_10_ACTL
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_CONTROL_REG CYREG_B0_UDB09_10_CTL
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_CONTROL_COUNT_REG CYREG_B0_UDB09_10_CTL
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_CONTROL_REG CYREG_B0_UDB09_10_CTL
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_COUNT_COUNT_REG CYREG_B0_UDB09_10_CTL
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_MASK_REG CYREG_B0_UDB09_10_MSK
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_MASK_PERIOD_REG CYREG_B0_UDB09_10_MSK
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_MASK_REG CYREG_B0_UDB09_10_MSK
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__16BIT_PERIOD_PERIOD_REG CYREG_B0_UDB09_10_MSK
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__MASK 0x80u
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__7__POS 7
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_AUX_CTL_REG CYREG_B0_UDB09_ACTL
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_REG CYREG_B0_UDB09_CTL
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__CONTROL_ST_REG CYREG_B0_UDB09_ST_CTL
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_REG CYREG_B0_UDB09_CTL
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__COUNT_ST_REG CYREG_B0_UDB09_ST_CTL
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK 0x80u
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__MASK_CTL_AUX_CTL_REG CYREG_B0_UDB09_MSK_ACTL
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PER_CTL_AUX_CTL_REG CYREG_B0_UDB09_MSK_ACTL
#define TIMER_TimerUDB_sCTRLReg_SyncCtl_ctrlreg__PERIOD_REG CYREG_B0_UDB09_MSK
#define TIMER_TimerUDB_sT32_timerdp_u0__16BIT_A0_REG CYREG_B0_UDB08_09_A0
#define TIMER_TimerUDB_sT32_timerdp_u0__16BIT_A1_REG CYREG_B0_UDB08_09_A1
#define TIMER_TimerUDB_sT32_timerdp_u0__16BIT_D0_REG CYREG_B0_UDB08_09_D0
#define TIMER_TimerUDB_sT32_timerdp_u0__16BIT_D1_REG CYREG_B0_UDB08_09_D1
#define TIMER_TimerUDB_sT32_timerdp_u0__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB08_09_ACTL
#define TIMER_TimerUDB_sT32_timerdp_u0__16BIT_F0_REG CYREG_B0_UDB08_09_F0
#define TIMER_TimerUDB_sT32_timerdp_u0__16BIT_F1_REG CYREG_B0_UDB08_09_F1
#define TIMER_TimerUDB_sT32_timerdp_u0__A0_A1_REG CYREG_B0_UDB08_A0_A1
#define TIMER_TimerUDB_sT32_timerdp_u0__A0_REG CYREG_B0_UDB08_A0
#define TIMER_TimerUDB_sT32_timerdp_u0__A1_REG CYREG_B0_UDB08_A1
#define TIMER_TimerUDB_sT32_timerdp_u0__D0_D1_REG CYREG_B0_UDB08_D0_D1
#define TIMER_TimerUDB_sT32_timerdp_u0__D0_REG CYREG_B0_UDB08_D0
#define TIMER_TimerUDB_sT32_timerdp_u0__D1_REG CYREG_B0_UDB08_D1
#define TIMER_TimerUDB_sT32_timerdp_u0__DP_AUX_CTL_REG CYREG_B0_UDB08_ACTL
#define TIMER_TimerUDB_sT32_timerdp_u0__F0_F1_REG CYREG_B0_UDB08_F0_F1
#define TIMER_TimerUDB_sT32_timerdp_u0__F0_REG CYREG_B0_UDB08_F0
#define TIMER_TimerUDB_sT32_timerdp_u0__F1_REG CYREG_B0_UDB08_F1
#define TIMER_TimerUDB_sT32_timerdp_u1__16BIT_A0_REG CYREG_B0_UDB09_10_A0
#define TIMER_TimerUDB_sT32_timerdp_u1__16BIT_A1_REG CYREG_B0_UDB09_10_A1
#define TIMER_TimerUDB_sT32_timerdp_u1__16BIT_D0_REG CYREG_B0_UDB09_10_D0
#define TIMER_TimerUDB_sT32_timerdp_u1__16BIT_D1_REG CYREG_B0_UDB09_10_D1
#define TIMER_TimerUDB_sT32_timerdp_u1__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB09_10_ACTL
#define TIMER_TimerUDB_sT32_timerdp_u1__16BIT_F0_REG CYREG_B0_UDB09_10_F0
#define TIMER_TimerUDB_sT32_timerdp_u1__16BIT_F1_REG CYREG_B0_UDB09_10_F1
#define TIMER_TimerUDB_sT32_timerdp_u1__A0_A1_REG CYREG_B0_UDB09_A0_A1
#define TIMER_TimerUDB_sT32_timerdp_u1__A0_REG CYREG_B0_UDB09_A0
#define TIMER_TimerUDB_sT32_timerdp_u1__A1_REG CYREG_B0_UDB09_A1
#define TIMER_TimerUDB_sT32_timerdp_u1__D0_D1_REG CYREG_B0_UDB09_D0_D1
#define TIMER_TimerUDB_sT32_timerdp_u1__D0_REG CYREG_B0_UDB09_D0
#define TIMER_TimerUDB_sT32_timerdp_u1__D1_REG CYREG_B0_UDB09_D1
#define TIMER_TimerUDB_sT32_timerdp_u1__DP_AUX_CTL_REG CYREG_B0_UDB09_ACTL
#define TIMER_TimerUDB_sT32_timerdp_u1__F0_F1_REG CYREG_B0_UDB09_F0_F1
#define TIMER_TimerUDB_sT32_timerdp_u1__F0_REG CYREG_B0_UDB09_F0
#define TIMER_TimerUDB_sT32_timerdp_u1__F1_REG CYREG_B0_UDB09_F1
#define TIMER_TimerUDB_sT32_timerdp_u1__MSK_DP_AUX_CTL_REG CYREG_B0_UDB09_MSK_ACTL
#define TIMER_TimerUDB_sT32_timerdp_u1__PER_DP_AUX_CTL_REG CYREG_B0_UDB09_MSK_ACTL
#define TIMER_TimerUDB_sT32_timerdp_u2__16BIT_A0_REG CYREG_B0_UDB10_11_A0
#define TIMER_TimerUDB_sT32_timerdp_u2__16BIT_A1_REG CYREG_B0_UDB10_11_A1
#define TIMER_TimerUDB_sT32_timerdp_u2__16BIT_D0_REG CYREG_B0_UDB10_11_D0
#define TIMER_TimerUDB_sT32_timerdp_u2__16BIT_D1_REG CYREG_B0_UDB10_11_D1
#define TIMER_TimerUDB_sT32_timerdp_u2__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB10_11_ACTL
#define TIMER_TimerUDB_sT32_timerdp_u2__16BIT_F0_REG CYREG_B0_UDB10_11_F0
#define TIMER_TimerUDB_sT32_timerdp_u2__16BIT_F1_REG CYREG_B0_UDB10_11_F1
#define TIMER_TimerUDB_sT32_timerdp_u2__A0_A1_REG CYREG_B0_UDB10_A0_A1
#define TIMER_TimerUDB_sT32_timerdp_u2__A0_REG CYREG_B0_UDB10_A0
#define TIMER_TimerUDB_sT32_timerdp_u2__A1_REG CYREG_B0_UDB10_A1
#define TIMER_TimerUDB_sT32_timerdp_u2__D0_D1_REG CYREG_B0_UDB10_D0_D1
#define TIMER_TimerUDB_sT32_timerdp_u2__D0_REG CYREG_B0_UDB10_D0
#define TIMER_TimerUDB_sT32_timerdp_u2__D1_REG CYREG_B0_UDB10_D1
#define TIMER_TimerUDB_sT32_timerdp_u2__DP_AUX_CTL_REG CYREG_B0_UDB10_ACTL
#define TIMER_TimerUDB_sT32_timerdp_u2__F0_F1_REG CYREG_B0_UDB10_F0_F1
#define TIMER_TimerUDB_sT32_timerdp_u2__F0_REG CYREG_B0_UDB10_F0
#define TIMER_TimerUDB_sT32_timerdp_u2__F1_REG CYREG_B0_UDB10_F1
#define TIMER_TimerUDB_sT32_timerdp_u3__16BIT_A0_REG CYREG_B0_UDB11_12_A0
#define TIMER_TimerUDB_sT32_timerdp_u3__16BIT_A1_REG CYREG_B0_UDB11_12_A1
#define TIMER_TimerUDB_sT32_timerdp_u3__16BIT_D0_REG CYREG_B0_UDB11_12_D0
#define TIMER_TimerUDB_sT32_timerdp_u3__16BIT_D1_REG CYREG_B0_UDB11_12_D1
#define TIMER_TimerUDB_sT32_timerdp_u3__16BIT_DP_AUX_CTL_REG CYREG_B0_UDB11_12_ACTL
#define TIMER_TimerUDB_sT32_timerdp_u3__16BIT_F0_REG CYREG_B0_UDB11_12_F0
#define TIMER_TimerUDB_sT32_timerdp_u3__16BIT_F1_REG CYREG_B0_UDB11_12_F1
#define TIMER_TimerUDB_sT32_timerdp_u3__A0_A1_REG CYREG_B0_UDB11_A0_A1
#define TIMER_TimerUDB_sT32_timerdp_u3__A0_REG CYREG_B0_UDB11_A0
#define TIMER_TimerUDB_sT32_timerdp_u3__A1_REG CYREG_B0_UDB11_A1
#define TIMER_TimerUDB_sT32_timerdp_u3__D0_D1_REG CYREG_B0_UDB11_D0_D1
#define TIMER_TimerUDB_sT32_timerdp_u3__D0_REG CYREG_B0_UDB11_D0
#define TIMER_TimerUDB_sT32_timerdp_u3__D1_REG CYREG_B0_UDB11_D1
#define TIMER_TimerUDB_sT32_timerdp_u3__DP_AUX_CTL_REG CYREG_B0_UDB11_ACTL
#define TIMER_TimerUDB_sT32_timerdp_u3__F0_F1_REG CYREG_B0_UDB11_F0_F1
#define TIMER_TimerUDB_sT32_timerdp_u3__F0_REG CYREG_B0_UDB11_F0
#define TIMER_TimerUDB_sT32_timerdp_u3__F1_REG CYREG_B0_UDB11_F1

/* TX_PIN */
#define TX_PIN__0__INTTYPE CYREG_PICU0_INTTYPE4
#define TX_PIN__0__MASK 0x10u
#define TX_PIN__0__PC CYREG_PRT0_PC4
#define TX_PIN__0__PORT 0u
#define TX_PIN__0__SHIFT 4u
#define TX_PIN__AG CYREG_PRT0_AG
#define TX_PIN__AMUX CYREG_PRT0_AMUX
#define TX_PIN__BIE CYREG_PRT0_BIE
#define TX_PIN__BIT_MASK CYREG_PRT0_BIT_MASK
#define TX_PIN__BYP CYREG_PRT0_BYP
#define TX_PIN__CTL CYREG_PRT0_CTL
#define TX_PIN__DM0 CYREG_PRT0_DM0
#define TX_PIN__DM1 CYREG_PRT0_DM1
#define TX_PIN__DM2 CYREG_PRT0_DM2
#define TX_PIN__DR CYREG_PRT0_DR
#define TX_PIN__INP_DIS CYREG_PRT0_INP_DIS
#define TX_PIN__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define TX_PIN__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define TX_PIN__LCD_EN CYREG_PRT0_LCD_EN
#define TX_PIN__MASK 0x10u
#define TX_PIN__PORT 0u
#define TX_PIN__PRT CYREG_PRT0_PRT
#define TX_PIN__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define TX_PIN__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define TX_PIN__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define TX_PIN__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define TX_PIN__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define TX_PIN__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define TX_PIN__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define TX_PIN__PS CYREG_PRT0_PS
#define TX_PIN__SHIFT 4u
#define TX_PIN__SLW CYREG_PRT0_SLW

/* USBUART */
#define USBUART_arb_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_arb_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_arb_int__INTC_MASK 0x400000u
#define USBUART_arb_int__INTC_NUMBER 22u
#define USBUART_arb_int__INTC_PRIOR_NUM 7u
#define USBUART_arb_int__INTC_PRIOR_REG CYREG_NVIC_PRI_22
#define USBUART_arb_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_arb_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_bus_reset__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_bus_reset__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_bus_reset__INTC_MASK 0x800000u
#define USBUART_bus_reset__INTC_NUMBER 23u
#define USBUART_bus_reset__INTC_PRIOR_NUM 7u
#define USBUART_bus_reset__INTC_PRIOR_REG CYREG_NVIC_PRI_23
#define USBUART_bus_reset__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_bus_reset__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_Dm__0__INTTYPE CYREG_PICU15_INTTYPE7
#define USBUART_Dm__0__MASK 0x80u
#define USBUART_Dm__0__PC CYREG_IO_PC_PRT15_7_6_PC1
#define USBUART_Dm__0__PORT 15u
#define USBUART_Dm__0__SHIFT 7u
#define USBUART_Dm__AG CYREG_PRT15_AG
#define USBUART_Dm__AMUX CYREG_PRT15_AMUX
#define USBUART_Dm__BIE CYREG_PRT15_BIE
#define USBUART_Dm__BIT_MASK CYREG_PRT15_BIT_MASK
#define USBUART_Dm__BYP CYREG_PRT15_BYP
#define USBUART_Dm__CTL CYREG_PRT15_CTL
#define USBUART_Dm__DM0 CYREG_PRT15_DM0
#define USBUART_Dm__DM1 CYREG_PRT15_DM1
#define USBUART_Dm__DM2 CYREG_PRT15_DM2
#define USBUART_Dm__DR CYREG_PRT15_DR
#define USBUART_Dm__INP_DIS CYREG_PRT15_INP_DIS
#define USBUART_Dm__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define USBUART_Dm__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define USBUART_Dm__LCD_EN CYREG_PRT15_LCD_EN
#define USBUART_Dm__MASK 0x80u
#define USBUART_Dm__PORT 15u
#define USBUART_Dm__PRT CYREG_PRT15_PRT
#define USBUART_Dm__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define USBUART_Dm__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define USBUART_Dm__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define USBUART_Dm__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define USBUART_Dm__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define USBUART_Dm__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define USBUART_Dm__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define USBUART_Dm__PS CYREG_PRT15_PS
#define USBUART_Dm__SHIFT 7u
#define USBUART_Dm__SLW CYREG_PRT15_SLW
#define USBUART_Dp__0__INTTYPE CYREG_PICU15_INTTYPE6
#define USBUART_Dp__0__MASK 0x40u
#define USBUART_Dp__0__PC CYREG_IO_PC_PRT15_7_6_PC0
#define USBUART_Dp__0__PORT 15u
#define USBUART_Dp__0__SHIFT 6u
#define USBUART_Dp__AG CYREG_PRT15_AG
#define USBUART_Dp__AMUX CYREG_PRT15_AMUX
#define USBUART_Dp__BIE CYREG_PRT15_BIE
#define USBUART_Dp__BIT_MASK CYREG_PRT15_BIT_MASK
#define USBUART_Dp__BYP CYREG_PRT15_BYP
#define USBUART_Dp__CTL CYREG_PRT15_CTL
#define USBUART_Dp__DM0 CYREG_PRT15_DM0
#define USBUART_Dp__DM1 CYREG_PRT15_DM1
#define USBUART_Dp__DM2 CYREG_PRT15_DM2
#define USBUART_Dp__DR CYREG_PRT15_DR
#define USBUART_Dp__INP_DIS CYREG_PRT15_INP_DIS
#define USBUART_Dp__INTSTAT CYREG_PICU15_INTSTAT
#define USBUART_Dp__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU15_BASE
#define USBUART_Dp__LCD_COM_SEG CYREG_PRT15_LCD_COM_SEG
#define USBUART_Dp__LCD_EN CYREG_PRT15_LCD_EN
#define USBUART_Dp__MASK 0x40u
#define USBUART_Dp__PORT 15u
#define USBUART_Dp__PRT CYREG_PRT15_PRT
#define USBUART_Dp__PRTDSI__CAPS_SEL CYREG_PRT15_CAPS_SEL
#define USBUART_Dp__PRTDSI__DBL_SYNC_IN CYREG_PRT15_DBL_SYNC_IN
#define USBUART_Dp__PRTDSI__OE_SEL0 CYREG_PRT15_OE_SEL0
#define USBUART_Dp__PRTDSI__OE_SEL1 CYREG_PRT15_OE_SEL1
#define USBUART_Dp__PRTDSI__OUT_SEL0 CYREG_PRT15_OUT_SEL0
#define USBUART_Dp__PRTDSI__OUT_SEL1 CYREG_PRT15_OUT_SEL1
#define USBUART_Dp__PRTDSI__SYNC_OUT CYREG_PRT15_SYNC_OUT
#define USBUART_Dp__PS CYREG_PRT15_PS
#define USBUART_Dp__SHIFT 6u
#define USBUART_Dp__SLW CYREG_PRT15_SLW
#define USBUART_Dp__SNAP CYREG_PICU_15_SNAP_15
#define USBUART_dp_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_dp_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_dp_int__INTC_MASK 0x1000u
#define USBUART_dp_int__INTC_NUMBER 12u
#define USBUART_dp_int__INTC_PRIOR_NUM 7u
#define USBUART_dp_int__INTC_PRIOR_REG CYREG_NVIC_PRI_12
#define USBUART_dp_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_dp_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_ep_0__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_ep_0__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_ep_0__INTC_MASK 0x1000000u
#define USBUART_ep_0__INTC_NUMBER 24u
#define USBUART_ep_0__INTC_PRIOR_NUM 7u
#define USBUART_ep_0__INTC_PRIOR_REG CYREG_NVIC_PRI_24
#define USBUART_ep_0__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_ep_0__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_ep_1__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_ep_1__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_ep_1__INTC_MASK 0x02u
#define USBUART_ep_1__INTC_NUMBER 1u
#define USBUART_ep_1__INTC_PRIOR_NUM 7u
#define USBUART_ep_1__INTC_PRIOR_REG CYREG_NVIC_PRI_1
#define USBUART_ep_1__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_ep_1__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_ep_2__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_ep_2__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_ep_2__INTC_MASK 0x04u
#define USBUART_ep_2__INTC_NUMBER 2u
#define USBUART_ep_2__INTC_PRIOR_NUM 7u
#define USBUART_ep_2__INTC_PRIOR_REG CYREG_NVIC_PRI_2
#define USBUART_ep_2__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_ep_2__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_ep_3__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_ep_3__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_ep_3__INTC_MASK 0x08u
#define USBUART_ep_3__INTC_NUMBER 3u
#define USBUART_ep_3__INTC_PRIOR_NUM 7u
#define USBUART_ep_3__INTC_PRIOR_REG CYREG_NVIC_PRI_3
#define USBUART_ep_3__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_ep_3__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_sof_int__INTC_CLR_EN_REG CYREG_NVIC_CLRENA0
#define USBUART_sof_int__INTC_CLR_PD_REG CYREG_NVIC_CLRPEND0
#define USBUART_sof_int__INTC_MASK 0x200000u
#define USBUART_sof_int__INTC_NUMBER 21u
#define USBUART_sof_int__INTC_PRIOR_NUM 7u
#define USBUART_sof_int__INTC_PRIOR_REG CYREG_NVIC_PRI_21
#define USBUART_sof_int__INTC_SET_EN_REG CYREG_NVIC_SETENA0
#define USBUART_sof_int__INTC_SET_PD_REG CYREG_NVIC_SETPEND0
#define USBUART_USB__ARB_CFG CYREG_USB_ARB_CFG
#define USBUART_USB__ARB_EP1_CFG CYREG_USB_ARB_EP1_CFG
#define USBUART_USB__ARB_EP1_INT_EN CYREG_USB_ARB_EP1_INT_EN
#define USBUART_USB__ARB_EP1_SR CYREG_USB_ARB_EP1_SR
#define USBUART_USB__ARB_EP2_CFG CYREG_USB_ARB_EP2_CFG
#define USBUART_USB__ARB_EP2_INT_EN CYREG_USB_ARB_EP2_INT_EN
#define USBUART_USB__ARB_EP2_SR CYREG_USB_ARB_EP2_SR
#define USBUART_USB__ARB_EP3_CFG CYREG_USB_ARB_EP3_CFG
#define USBUART_USB__ARB_EP3_INT_EN CYREG_USB_ARB_EP3_INT_EN
#define USBUART_USB__ARB_EP3_SR CYREG_USB_ARB_EP3_SR
#define USBUART_USB__ARB_EP4_CFG CYREG_USB_ARB_EP4_CFG
#define USBUART_USB__ARB_EP4_INT_EN CYREG_USB_ARB_EP4_INT_EN
#define USBUART_USB__ARB_EP4_SR CYREG_USB_ARB_EP4_SR
#define USBUART_USB__ARB_EP5_CFG CYREG_USB_ARB_EP5_CFG
#define USBUART_USB__ARB_EP5_INT_EN CYREG_USB_ARB_EP5_INT_EN
#define USBUART_USB__ARB_EP5_SR CYREG_USB_ARB_EP5_SR
#define USBUART_USB__ARB_EP6_CFG CYREG_USB_ARB_EP6_CFG
#define USBUART_USB__ARB_EP6_INT_EN CYREG_USB_ARB_EP6_INT_EN
#define USBUART_USB__ARB_EP6_SR CYREG_USB_ARB_EP6_SR
#define USBUART_USB__ARB_EP7_CFG CYREG_USB_ARB_EP7_CFG
#define USBUART_USB__ARB_EP7_INT_EN CYREG_USB_ARB_EP7_INT_EN
#define USBUART_USB__ARB_EP7_SR CYREG_USB_ARB_EP7_SR
#define USBUART_USB__ARB_EP8_CFG CYREG_USB_ARB_EP8_CFG
#define USBUART_USB__ARB_EP8_INT_EN CYREG_USB_ARB_EP8_INT_EN
#define USBUART_USB__ARB_EP8_SR CYREG_USB_ARB_EP8_SR
#define USBUART_USB__ARB_INT_EN CYREG_USB_ARB_INT_EN
#define USBUART_USB__ARB_INT_SR CYREG_USB_ARB_INT_SR
#define USBUART_USB__ARB_RW1_DR CYREG_USB_ARB_RW1_DR
#define USBUART_USB__ARB_RW1_RA CYREG_USB_ARB_RW1_RA
#define USBUART_USB__ARB_RW1_RA_MSB CYREG_USB_ARB_RW1_RA_MSB
#define USBUART_USB__ARB_RW1_WA CYREG_USB_ARB_RW1_WA
#define USBUART_USB__ARB_RW1_WA_MSB CYREG_USB_ARB_RW1_WA_MSB
#define USBUART_USB__ARB_RW2_DR CYREG_USB_ARB_RW2_DR
#define USBUART_USB__ARB_RW2_RA CYREG_USB_ARB_RW2_RA
#define USBUART_USB__ARB_RW2_RA_MSB CYREG_USB_ARB_RW2_RA_MSB
#define USBUART_USB__ARB_RW2_WA CYREG_USB_ARB_RW2_WA
#define USBUART_USB__ARB_RW2_WA_MSB CYREG_USB_ARB_RW2_WA_MSB
#define USBUART_USB__ARB_RW3_DR CYREG_USB_ARB_RW3_DR
#define USBUART_USB__ARB_RW3_RA CYREG_USB_ARB_RW3_RA
#define USBUART_USB__ARB_RW3_RA_MSB CYREG_USB_ARB_RW3_RA_MSB
#define USBUART_USB__ARB_RW3_WA CYREG_USB_ARB_RW3_WA
#define USBUART_USB__ARB_RW3_WA_MSB CYREG_USB_ARB_RW3_WA_MSB
#define USBUART_USB__ARB_RW4_DR CYREG_USB_ARB_RW4_DR
#define USBUART_USB__ARB_RW4_RA CYREG_USB_ARB_RW4_RA
#define USBUART_USB__ARB_RW4_RA_MSB CYREG_USB_ARB_RW4_RA_MSB
#define USBUART_USB__ARB_RW4_WA CYREG_USB_ARB_RW4_WA
#define USBUART_USB__ARB_RW4_WA_MSB CYREG_USB_ARB_RW4_WA_MSB
#define USBUART_USB__ARB_RW5_DR CYREG_USB_ARB_RW5_DR
#define USBUART_USB__ARB_RW5_RA CYREG_USB_ARB_RW5_RA
#define USBUART_USB__ARB_RW5_RA_MSB CYREG_USB_ARB_RW5_RA_MSB
#define USBUART_USB__ARB_RW5_WA CYREG_USB_ARB_RW5_WA
#define USBUART_USB__ARB_RW5_WA_MSB CYREG_USB_ARB_RW5_WA_MSB
#define USBUART_USB__ARB_RW6_DR CYREG_USB_ARB_RW6_DR
#define USBUART_USB__ARB_RW6_RA CYREG_USB_ARB_RW6_RA
#define USBUART_USB__ARB_RW6_RA_MSB CYREG_USB_ARB_RW6_RA_MSB
#define USBUART_USB__ARB_RW6_WA CYREG_USB_ARB_RW6_WA
#define USBUART_USB__ARB_RW6_WA_MSB CYREG_USB_ARB_RW6_WA_MSB
#define USBUART_USB__ARB_RW7_DR CYREG_USB_ARB_RW7_DR
#define USBUART_USB__ARB_RW7_RA CYREG_USB_ARB_RW7_RA
#define USBUART_USB__ARB_RW7_RA_MSB CYREG_USB_ARB_RW7_RA_MSB
#define USBUART_USB__ARB_RW7_WA CYREG_USB_ARB_RW7_WA
#define USBUART_USB__ARB_RW7_WA_MSB CYREG_USB_ARB_RW7_WA_MSB
#define USBUART_USB__ARB_RW8_DR CYREG_USB_ARB_RW8_DR
#define USBUART_USB__ARB_RW8_RA CYREG_USB_ARB_RW8_RA
#define USBUART_USB__ARB_RW8_RA_MSB CYREG_USB_ARB_RW8_RA_MSB
#define USBUART_USB__ARB_RW8_WA CYREG_USB_ARB_RW8_WA
#define USBUART_USB__ARB_RW8_WA_MSB CYREG_USB_ARB_RW8_WA_MSB
#define USBUART_USB__BUF_SIZE CYREG_USB_BUF_SIZE
#define USBUART_USB__BUS_RST_CNT CYREG_USB_BUS_RST_CNT
#define USBUART_USB__CR0 CYREG_USB_CR0
#define USBUART_USB__CR1 CYREG_USB_CR1
#define USBUART_USB__CWA CYREG_USB_CWA
#define USBUART_USB__CWA_MSB CYREG_USB_CWA_MSB
#define USBUART_USB__DMA_THRES CYREG_USB_DMA_THRES
#define USBUART_USB__DMA_THRES_MSB CYREG_USB_DMA_THRES_MSB
#define USBUART_USB__DYN_RECONFIG CYREG_USB_DYN_RECONFIG
#define USBUART_USB__EP_ACTIVE CYREG_USB_EP_ACTIVE
#define USBUART_USB__EP_TYPE CYREG_USB_EP_TYPE
#define USBUART_USB__EP0_CNT CYREG_USB_EP0_CNT
#define USBUART_USB__EP0_CR CYREG_USB_EP0_CR
#define USBUART_USB__EP0_DR0 CYREG_USB_EP0_DR0
#define USBUART_USB__EP0_DR1 CYREG_USB_EP0_DR1
#define USBUART_USB__EP0_DR2 CYREG_USB_EP0_DR2
#define USBUART_USB__EP0_DR3 CYREG_USB_EP0_DR3
#define USBUART_USB__EP0_DR4 CYREG_USB_EP0_DR4
#define USBUART_USB__EP0_DR5 CYREG_USB_EP0_DR5
#define USBUART_USB__EP0_DR6 CYREG_USB_EP0_DR6
#define USBUART_USB__EP0_DR7 CYREG_USB_EP0_DR7
#define USBUART_USB__MEM_DATA CYREG_USB_MEM_DATA_MBASE
#define USBUART_USB__PM_ACT_CFG CYREG_PM_ACT_CFG5
#define USBUART_USB__PM_ACT_MSK 0x01u
#define USBUART_USB__PM_STBY_CFG CYREG_PM_STBY_CFG5
#define USBUART_USB__PM_STBY_MSK 0x01u
#define USBUART_USB__SIE_EP_INT_EN CYREG_USB_SIE_EP_INT_EN
#define USBUART_USB__SIE_EP_INT_SR CYREG_USB_SIE_EP_INT_SR
#define USBUART_USB__SIE_EP1_CNT0 CYREG_USB_SIE_EP1_CNT0
#define USBUART_USB__SIE_EP1_CNT1 CYREG_USB_SIE_EP1_CNT1
#define USBUART_USB__SIE_EP1_CR0 CYREG_USB_SIE_EP1_CR0
#define USBUART_USB__SIE_EP2_CNT0 CYREG_USB_SIE_EP2_CNT0
#define USBUART_USB__SIE_EP2_CNT1 CYREG_USB_SIE_EP2_CNT1
#define USBUART_USB__SIE_EP2_CR0 CYREG_USB_SIE_EP2_CR0
#define USBUART_USB__SIE_EP3_CNT0 CYREG_USB_SIE_EP3_CNT0
#define USBUART_USB__SIE_EP3_CNT1 CYREG_USB_SIE_EP3_CNT1
#define USBUART_USB__SIE_EP3_CR0 CYREG_USB_SIE_EP3_CR0
#define USBUART_USB__SIE_EP4_CNT0 CYREG_USB_SIE_EP4_CNT0
#define USBUART_USB__SIE_EP4_CNT1 CYREG_USB_SIE_EP4_CNT1
#define USBUART_USB__SIE_EP4_CR0 CYREG_USB_SIE_EP4_CR0
#define USBUART_USB__SIE_EP5_CNT0 CYREG_USB_SIE_EP5_CNT0
#define USBUART_USB__SIE_EP5_CNT1 CYREG_USB_SIE_EP5_CNT1
#define USBUART_USB__SIE_EP5_CR0 CYREG_USB_SIE_EP5_CR0
#define USBUART_USB__SIE_EP6_CNT0 CYREG_USB_SIE_EP6_CNT0
#define USBUART_USB__SIE_EP6_CNT1 CYREG_USB_SIE_EP6_CNT1
#define USBUART_USB__SIE_EP6_CR0 CYREG_USB_SIE_EP6_CR0
#define USBUART_USB__SIE_EP7_CNT0 CYREG_USB_SIE_EP7_CNT0
#define USBUART_USB__SIE_EP7_CNT1 CYREG_USB_SIE_EP7_CNT1
#define USBUART_USB__SIE_EP7_CR0 CYREG_USB_SIE_EP7_CR0
#define USBUART_USB__SIE_EP8_CNT0 CYREG_USB_SIE_EP8_CNT0
#define USBUART_USB__SIE_EP8_CNT1 CYREG_USB_SIE_EP8_CNT1
#define USBUART_USB__SIE_EP8_CR0 CYREG_USB_SIE_EP8_CR0
#define USBUART_USB__SOF0 CYREG_USB_SOF0
#define USBUART_USB__SOF1 CYREG_USB_SOF1
#define USBUART_USB__USB_CLK_EN CYREG_USB_USB_CLK_EN
#define USBUART_USB__USBIO_CR0 CYREG_USB_USBIO_CR0
#define USBUART_USB__USBIO_CR1 CYREG_USB_USBIO_CR1

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "network"
#define CY_VERSION "PSoC Creator  4.1 Update 1"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 16u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 16u
#define CYDEV_CHIP_MEMBER_4D 12u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 17u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 15u
#define CYDEV_CHIP_MEMBER_4I 21u
#define CYDEV_CHIP_MEMBER_4J 13u
#define CYDEV_CHIP_MEMBER_4K 14u
#define CYDEV_CHIP_MEMBER_4L 20u
#define CYDEV_CHIP_MEMBER_4M 19u
#define CYDEV_CHIP_MEMBER_4N 9u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 18u
#define CYDEV_CHIP_MEMBER_4Q 11u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 10u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 22u
#define CYDEV_CHIP_MEMBER_FM3 26u
#define CYDEV_CHIP_MEMBER_FM4 27u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 23u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 24u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 25u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 0u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000001u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USB_CLK_OSC_LOCKING_ENABLED_AT_PWR_UP 
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
