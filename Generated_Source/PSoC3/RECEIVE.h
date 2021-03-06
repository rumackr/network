/*******************************************************************************
* File Name: RECEIVE.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_RECEIVE_H) /* Pins RECEIVE_H */
#define CY_PINS_RECEIVE_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "RECEIVE_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    RECEIVE_Write(uint8 value) ;
void    RECEIVE_SetDriveMode(uint8 mode) ;
uint8   RECEIVE_ReadDataReg(void) ;
uint8   RECEIVE_Read(void) ;
void    RECEIVE_SetInterruptMode(uint16 position, uint16 mode) ;
uint8   RECEIVE_ClearInterrupt(void) ;
/** @} general */

/***************************************
*           API Constants        
***************************************/

/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the RECEIVE_SetDriveMode() function.
     *  @{
     */
        /* Drive Modes */
        #define RECEIVE_DM_ALG_HIZ         PIN_DM_ALG_HIZ   /**< \brief High Impedance Analog   */
        #define RECEIVE_DM_DIG_HIZ         PIN_DM_DIG_HIZ   /**< \brief High Impedance Digital  */
        #define RECEIVE_DM_RES_UP          PIN_DM_RES_UP    /**< \brief Resistive Pull Up       */
        #define RECEIVE_DM_RES_DWN         PIN_DM_RES_DWN   /**< \brief Resistive Pull Down     */
        #define RECEIVE_DM_OD_LO           PIN_DM_OD_LO     /**< \brief Open Drain, Drives Low  */
        #define RECEIVE_DM_OD_HI           PIN_DM_OD_HI     /**< \brief Open Drain, Drives High */
        #define RECEIVE_DM_STRONG          PIN_DM_STRONG    /**< \brief Strong Drive            */
        #define RECEIVE_DM_RES_UPDWN       PIN_DM_RES_UPDWN /**< \brief Resistive Pull Up/Down  */
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define RECEIVE_MASK               RECEIVE__MASK
#define RECEIVE_SHIFT              RECEIVE__SHIFT
#define RECEIVE_WIDTH              1u

/* Interrupt constants */
#if defined(RECEIVE__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in RECEIVE_SetInterruptMode() function.
     *  @{
     */
        #define RECEIVE_INTR_NONE      (uint16)(0x0000u)   /**< \brief Disabled             */
        #define RECEIVE_INTR_RISING    (uint16)(0x0001u)   /**< \brief Rising edge trigger  */
        #define RECEIVE_INTR_FALLING   (uint16)(0x0002u)   /**< \brief Falling edge trigger */
        #define RECEIVE_INTR_BOTH      (uint16)(0x0003u)   /**< \brief Both edge trigger    */
        /** @} intrMode */
/** @} group_constants */

    #define RECEIVE_INTR_MASK      (0x01u)
#endif /* (RECEIVE__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define RECEIVE_PS                     (* (reg8 *) RECEIVE__PS)
/* Data Register */
#define RECEIVE_DR                     (* (reg8 *) RECEIVE__DR)
/* Port Number */
#define RECEIVE_PRT_NUM                (* (reg8 *) RECEIVE__PRT) 
/* Connect to Analog Globals */                                                  
#define RECEIVE_AG                     (* (reg8 *) RECEIVE__AG)                       
/* Analog MUX bux enable */
#define RECEIVE_AMUX                   (* (reg8 *) RECEIVE__AMUX) 
/* Bidirectional Enable */                                                        
#define RECEIVE_BIE                    (* (reg8 *) RECEIVE__BIE)
/* Bit-mask for Aliased Register Access */
#define RECEIVE_BIT_MASK               (* (reg8 *) RECEIVE__BIT_MASK)
/* Bypass Enable */
#define RECEIVE_BYP                    (* (reg8 *) RECEIVE__BYP)
/* Port wide control signals */                                                   
#define RECEIVE_CTL                    (* (reg8 *) RECEIVE__CTL)
/* Drive Modes */
#define RECEIVE_DM0                    (* (reg8 *) RECEIVE__DM0) 
#define RECEIVE_DM1                    (* (reg8 *) RECEIVE__DM1)
#define RECEIVE_DM2                    (* (reg8 *) RECEIVE__DM2) 
/* Input Buffer Disable Override */
#define RECEIVE_INP_DIS                (* (reg8 *) RECEIVE__INP_DIS)
/* LCD Common or Segment Drive */
#define RECEIVE_LCD_COM_SEG            (* (reg8 *) RECEIVE__LCD_COM_SEG)
/* Enable Segment LCD */
#define RECEIVE_LCD_EN                 (* (reg8 *) RECEIVE__LCD_EN)
/* Slew Rate Control */
#define RECEIVE_SLW                    (* (reg8 *) RECEIVE__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define RECEIVE_PRTDSI__CAPS_SEL       (* (reg8 *) RECEIVE__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define RECEIVE_PRTDSI__DBL_SYNC_IN    (* (reg8 *) RECEIVE__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define RECEIVE_PRTDSI__OE_SEL0        (* (reg8 *) RECEIVE__PRTDSI__OE_SEL0) 
#define RECEIVE_PRTDSI__OE_SEL1        (* (reg8 *) RECEIVE__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define RECEIVE_PRTDSI__OUT_SEL0       (* (reg8 *) RECEIVE__PRTDSI__OUT_SEL0) 
#define RECEIVE_PRTDSI__OUT_SEL1       (* (reg8 *) RECEIVE__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define RECEIVE_PRTDSI__SYNC_OUT       (* (reg8 *) RECEIVE__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(RECEIVE__SIO_CFG)
    #define RECEIVE_SIO_HYST_EN        (* (reg8 *) RECEIVE__SIO_HYST_EN)
    #define RECEIVE_SIO_REG_HIFREQ     (* (reg8 *) RECEIVE__SIO_REG_HIFREQ)
    #define RECEIVE_SIO_CFG            (* (reg8 *) RECEIVE__SIO_CFG)
    #define RECEIVE_SIO_DIFF           (* (reg8 *) RECEIVE__SIO_DIFF)
#endif /* (RECEIVE__SIO_CFG) */

/* Interrupt Registers */
#if defined(RECEIVE__INTSTAT)
    #define RECEIVE_INTSTAT             (* (reg8 *) RECEIVE__INTSTAT)
    #define RECEIVE_SNAP                (* (reg8 *) RECEIVE__SNAP)
    
	#define RECEIVE_0_INTTYPE_REG 		(* (reg8 *) RECEIVE__0__INTTYPE)
#endif /* (RECEIVE__INTSTAT) */

#endif /* End Pins RECEIVE_H */


/* [] END OF FILE */
