/*******************************************************************************
* File Name: TIMER_INTERRUPT.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_ISR_TIMER_INTERRUPT_H)
#define CY_ISR_TIMER_INTERRUPT_H

#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void TIMER_INTERRUPT_Start(void) ;
void TIMER_INTERRUPT_StartEx(cyisraddress address) ;
void TIMER_INTERRUPT_Stop(void) ;

CY_ISR_PROTO(TIMER_INTERRUPT_Interrupt);

void TIMER_INTERRUPT_SetVector(cyisraddress address) ;
cyisraddress TIMER_INTERRUPT_GetVector(void) ;

void TIMER_INTERRUPT_SetPriority(uint8 priority) ;
uint8 TIMER_INTERRUPT_GetPriority(void) ;

void TIMER_INTERRUPT_Enable(void) ;
uint8 TIMER_INTERRUPT_GetState(void) ;
void TIMER_INTERRUPT_Disable(void) ;

void TIMER_INTERRUPT_SetPending(void) ;
void TIMER_INTERRUPT_ClearPending(void) ;


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the TIMER_INTERRUPT ISR. */
#define TIMER_INTERRUPT_INTC_VECTOR            ((reg16 *) TIMER_INTERRUPT__INTC_VECT)

/* Address of the TIMER_INTERRUPT ISR priority. */
#define TIMER_INTERRUPT_INTC_PRIOR             ((reg8 *) TIMER_INTERRUPT__INTC_PRIOR_REG)

/* Priority of the TIMER_INTERRUPT interrupt. */
#define TIMER_INTERRUPT_INTC_PRIOR_NUMBER      TIMER_INTERRUPT__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable TIMER_INTERRUPT interrupt. */
#define TIMER_INTERRUPT_INTC_SET_EN            ((reg8 *) TIMER_INTERRUPT__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the TIMER_INTERRUPT interrupt. */
#define TIMER_INTERRUPT_INTC_CLR_EN            ((reg8 *) TIMER_INTERRUPT__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the TIMER_INTERRUPT interrupt state to pending. */
#define TIMER_INTERRUPT_INTC_SET_PD            ((reg8 *) TIMER_INTERRUPT__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the TIMER_INTERRUPT interrupt. */
#define TIMER_INTERRUPT_INTC_CLR_PD            ((reg8 *) TIMER_INTERRUPT__INTC_CLR_PD_REG)



#endif /* CY_ISR_TIMER_INTERRUPT_H */


/* [] END OF FILE */
