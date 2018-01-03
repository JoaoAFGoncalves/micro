/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using MPLAB(c) Code Configurator

  @Description:
    This header file provides implementations for pin APIs for all pins selected in the GUI.
    Generation Information :
        Product Revision  :  MPLAB(c) Code Configurator - 4.26
        Device            :  PIC18F45K22
        Version           :  1.01
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40

    Copyright (c) 2013 - 2015 released Microchip Technology Inc.  All rights reserved.

    Microchip licenses to you the right to use, modify, copy and distribute
    Software only when embedded on a Microchip microcontroller or digital signal
    controller that is integrated into your product or third party product
    (pursuant to the sublicense terms in the accompanying license agreement).

    You should refer to the license agreement accompanying this Software for
    additional information regarding your rights and obligations.

    SOFTWARE AND DOCUMENTATION ARE PROVIDED "AS IS" WITHOUT WARRANTY OF ANY KIND,
    EITHER EXPRESS OR IMPLIED, INCLUDING WITHOUT LIMITATION, ANY WARRANTY OF
    MERCHANTABILITY, TITLE, NON-INFRINGEMENT AND FITNESS FOR A PARTICULAR PURPOSE.
    IN NO EVENT SHALL MICROCHIP OR ITS LICENSORS BE LIABLE OR OBLIGATED UNDER
    CONTRACT, NEGLIGENCE, STRICT LIABILITY, CONTRIBUTION, BREACH OF WARRANTY, OR
    OTHER LEGAL EQUITABLE THEORY ANY DIRECT OR INDIRECT DAMAGES OR EXPENSES
    INCLUDING BUT NOT LIMITED TO ANY INCIDENTAL, SPECIAL, INDIRECT, PUNITIVE OR
    CONSEQUENTIAL DAMAGES, LOST PROFITS OR LOST DATA, COST OF PROCUREMENT OF
    SUBSTITUTE GOODS, TECHNOLOGY, SERVICES, OR ANY CLAIMS BY THIRD PARTIES
    (INCLUDING BUT NOT LIMITED TO ANY DEFENSE THEREOF), OR OTHER SIMILAR COSTS.

*/


#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set IO_RA1 aliases
#define IO_RA1_TRIS               TRISAbits.TRISA1
#define IO_RA1_LAT                LATAbits.LATA1
#define IO_RA1_PORT               PORTAbits.RA1
#define IO_RA1_ANS                ANSELAbits.ANSA1
#define IO_RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define IO_RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define IO_RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define IO_RA1_GetValue()           PORTAbits.RA1
#define IO_RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define IO_RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define IO_RA1_SetAnalogMode()  do { ANSELAbits.ANSA1 = 1; } while(0)
#define IO_RA1_SetDigitalMode() do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set IO_RA2 aliases
#define IO_RA2_TRIS               TRISAbits.TRISA2
#define IO_RA2_LAT                LATAbits.LATA2
#define IO_RA2_PORT               PORTAbits.RA2
#define IO_RA2_ANS                ANSELAbits.ANSA2
#define IO_RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define IO_RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define IO_RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define IO_RA2_GetValue()           PORTAbits.RA2
#define IO_RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define IO_RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define IO_RA2_SetAnalogMode()  do { ANSELAbits.ANSA2 = 1; } while(0)
#define IO_RA2_SetDigitalMode() do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set IO_RA3 aliases
#define IO_RA3_TRIS               TRISAbits.TRISA3
#define IO_RA3_LAT                LATAbits.LATA3
#define IO_RA3_PORT               PORTAbits.RA3
#define IO_RA3_ANS                ANSELAbits.ANSA3
#define IO_RA3_SetHigh()            do { LATAbits.LATA3 = 1; } while(0)
#define IO_RA3_SetLow()             do { LATAbits.LATA3 = 0; } while(0)
#define IO_RA3_Toggle()             do { LATAbits.LATA3 = ~LATAbits.LATA3; } while(0)
#define IO_RA3_GetValue()           PORTAbits.RA3
#define IO_RA3_SetDigitalInput()    do { TRISAbits.TRISA3 = 1; } while(0)
#define IO_RA3_SetDigitalOutput()   do { TRISAbits.TRISA3 = 0; } while(0)
#define IO_RA3_SetAnalogMode()  do { ANSELAbits.ANSA3 = 1; } while(0)
#define IO_RA3_SetDigitalMode() do { ANSELAbits.ANSA3 = 0; } while(0)

// get/set IO_RA4 aliases
#define IO_RA4_TRIS               TRISAbits.TRISA4
#define IO_RA4_LAT                LATAbits.LATA4
#define IO_RA4_PORT               PORTAbits.RA4
#define IO_RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define IO_RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define IO_RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define IO_RA4_GetValue()           PORTAbits.RA4
#define IO_RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define IO_RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)

// get/set IO_RA5 aliases
#define IO_RA5_TRIS               TRISAbits.TRISA5
#define IO_RA5_LAT                LATAbits.LATA5
#define IO_RA5_PORT               PORTAbits.RA5
#define IO_RA5_ANS                ANSELAbits.ANSA5
#define IO_RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define IO_RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define IO_RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define IO_RA5_GetValue()           PORTAbits.RA5
#define IO_RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define IO_RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define IO_RA5_SetAnalogMode()  do { ANSELAbits.ANSA5 = 1; } while(0)
#define IO_RA5_SetDigitalMode() do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set IO_RA6 aliases
#define IO_RA6_TRIS               TRISAbits.TRISA6
#define IO_RA6_LAT                LATAbits.LATA6
#define IO_RA6_PORT               PORTAbits.RA6
#define IO_RA6_SetHigh()            do { LATAbits.LATA6 = 1; } while(0)
#define IO_RA6_SetLow()             do { LATAbits.LATA6 = 0; } while(0)
#define IO_RA6_Toggle()             do { LATAbits.LATA6 = ~LATAbits.LATA6; } while(0)
#define IO_RA6_GetValue()           PORTAbits.RA6
#define IO_RA6_SetDigitalInput()    do { TRISAbits.TRISA6 = 1; } while(0)
#define IO_RA6_SetDigitalOutput()   do { TRISAbits.TRISA6 = 0; } while(0)

// get/set BOT_EMERGENCIA aliases
#define BOT_EMERGENCIA_TRIS               TRISBbits.TRISB0
#define BOT_EMERGENCIA_LAT                LATBbits.LATB0
#define BOT_EMERGENCIA_PORT               PORTBbits.RB0
#define BOT_EMERGENCIA_WPU                WPUBbits.WPUB0
#define BOT_EMERGENCIA_ANS                ANSELBbits.ANSB0
#define BOT_EMERGENCIA_SetHigh()            do { LATBbits.LATB0 = 1; } while(0)
#define BOT_EMERGENCIA_SetLow()             do { LATBbits.LATB0 = 0; } while(0)
#define BOT_EMERGENCIA_Toggle()             do { LATBbits.LATB0 = ~LATBbits.LATB0; } while(0)
#define BOT_EMERGENCIA_GetValue()           PORTBbits.RB0
#define BOT_EMERGENCIA_SetDigitalInput()    do { TRISBbits.TRISB0 = 1; } while(0)
#define BOT_EMERGENCIA_SetDigitalOutput()   do { TRISBbits.TRISB0 = 0; } while(0)
#define BOT_EMERGENCIA_SetPullup()      do { WPUBbits.WPUB0 = 1; } while(0)
#define BOT_EMERGENCIA_ResetPullup()    do { WPUBbits.WPUB0 = 0; } while(0)
#define BOT_EMERGENCIA_SetAnalogMode()  do { ANSELBbits.ANSB0 = 1; } while(0)
#define BOT_EMERGENCIA_SetDigitalMode() do { ANSELBbits.ANSB0 = 0; } while(0)

// get/set BOT_MENU aliases
#define BOT_MENU_TRIS               TRISBbits.TRISB1
#define BOT_MENU_LAT                LATBbits.LATB1
#define BOT_MENU_PORT               PORTBbits.RB1
#define BOT_MENU_WPU                WPUBbits.WPUB1
#define BOT_MENU_ANS                ANSELBbits.ANSB1
#define BOT_MENU_SetHigh()            do { LATBbits.LATB1 = 1; } while(0)
#define BOT_MENU_SetLow()             do { LATBbits.LATB1 = 0; } while(0)
#define BOT_MENU_Toggle()             do { LATBbits.LATB1 = ~LATBbits.LATB1; } while(0)
#define BOT_MENU_GetValue()           PORTBbits.RB1
#define BOT_MENU_SetDigitalInput()    do { TRISBbits.TRISB1 = 1; } while(0)
#define BOT_MENU_SetDigitalOutput()   do { TRISBbits.TRISB1 = 0; } while(0)
#define BOT_MENU_SetPullup()      do { WPUBbits.WPUB1 = 1; } while(0)
#define BOT_MENU_ResetPullup()    do { WPUBbits.WPUB1 = 0; } while(0)
#define BOT_MENU_SetAnalogMode()  do { ANSELBbits.ANSB1 = 1; } while(0)
#define BOT_MENU_SetDigitalMode() do { ANSELBbits.ANSB1 = 0; } while(0)

// get/set BOT_SELECT aliases
#define BOT_SELECT_TRIS               TRISBbits.TRISB2
#define BOT_SELECT_LAT                LATBbits.LATB2
#define BOT_SELECT_PORT               PORTBbits.RB2
#define BOT_SELECT_WPU                WPUBbits.WPUB2
#define BOT_SELECT_ANS                ANSELBbits.ANSB2
#define BOT_SELECT_SetHigh()            do { LATBbits.LATB2 = 1; } while(0)
#define BOT_SELECT_SetLow()             do { LATBbits.LATB2 = 0; } while(0)
#define BOT_SELECT_Toggle()             do { LATBbits.LATB2 = ~LATBbits.LATB2; } while(0)
#define BOT_SELECT_GetValue()           PORTBbits.RB2
#define BOT_SELECT_SetDigitalInput()    do { TRISBbits.TRISB2 = 1; } while(0)
#define BOT_SELECT_SetDigitalOutput()   do { TRISBbits.TRISB2 = 0; } while(0)
#define BOT_SELECT_SetPullup()      do { WPUBbits.WPUB2 = 1; } while(0)
#define BOT_SELECT_ResetPullup()    do { WPUBbits.WPUB2 = 0; } while(0)
#define BOT_SELECT_SetAnalogMode()  do { ANSELBbits.ANSB2 = 1; } while(0)
#define BOT_SELECT_SetDigitalMode() do { ANSELBbits.ANSB2 = 0; } while(0)

// get/set IO_RB3 aliases
#define IO_RB3_TRIS               TRISBbits.TRISB3
#define IO_RB3_LAT                LATBbits.LATB3
#define IO_RB3_PORT               PORTBbits.RB3
#define IO_RB3_WPU                WPUBbits.WPUB3
#define IO_RB3_ANS                ANSELBbits.ANSB3
#define IO_RB3_SetHigh()            do { LATBbits.LATB3 = 1; } while(0)
#define IO_RB3_SetLow()             do { LATBbits.LATB3 = 0; } while(0)
#define IO_RB3_Toggle()             do { LATBbits.LATB3 = ~LATBbits.LATB3; } while(0)
#define IO_RB3_GetValue()           PORTBbits.RB3
#define IO_RB3_SetDigitalInput()    do { TRISBbits.TRISB3 = 1; } while(0)
#define IO_RB3_SetDigitalOutput()   do { TRISBbits.TRISB3 = 0; } while(0)
#define IO_RB3_SetPullup()      do { WPUBbits.WPUB3 = 1; } while(0)
#define IO_RB3_ResetPullup()    do { WPUBbits.WPUB3 = 0; } while(0)
#define IO_RB3_SetAnalogMode()  do { ANSELBbits.ANSB3 = 1; } while(0)
#define IO_RB3_SetDigitalMode() do { ANSELBbits.ANSB3 = 0; } while(0)

// get/set BOT_DOWN aliases
#define BOT_DOWN_TRIS               TRISBbits.TRISB4
#define BOT_DOWN_LAT                LATBbits.LATB4
#define BOT_DOWN_PORT               PORTBbits.RB4
#define BOT_DOWN_WPU                WPUBbits.WPUB4
#define BOT_DOWN_ANS                ANSELBbits.ANSB4
#define BOT_DOWN_SetHigh()            do { LATBbits.LATB4 = 1; } while(0)
#define BOT_DOWN_SetLow()             do { LATBbits.LATB4 = 0; } while(0)
#define BOT_DOWN_Toggle()             do { LATBbits.LATB4 = ~LATBbits.LATB4; } while(0)
#define BOT_DOWN_GetValue()           PORTBbits.RB4
#define BOT_DOWN_SetDigitalInput()    do { TRISBbits.TRISB4 = 1; } while(0)
#define BOT_DOWN_SetDigitalOutput()   do { TRISBbits.TRISB4 = 0; } while(0)
#define BOT_DOWN_SetPullup()      do { WPUBbits.WPUB4 = 1; } while(0)
#define BOT_DOWN_ResetPullup()    do { WPUBbits.WPUB4 = 0; } while(0)
#define BOT_DOWN_SetAnalogMode()  do { ANSELBbits.ANSB4 = 1; } while(0)
#define BOT_DOWN_SetDigitalMode() do { ANSELBbits.ANSB4 = 0; } while(0)

// get/set BOT_UP aliases
#define BOT_UP_TRIS               TRISBbits.TRISB5
#define BOT_UP_LAT                LATBbits.LATB5
#define BOT_UP_PORT               PORTBbits.RB5
#define BOT_UP_WPU                WPUBbits.WPUB5
#define BOT_UP_ANS                ANSELBbits.ANSB5
#define BOT_UP_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define BOT_UP_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define BOT_UP_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define BOT_UP_GetValue()           PORTBbits.RB5
#define BOT_UP_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define BOT_UP_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define BOT_UP_SetPullup()      do { WPUBbits.WPUB5 = 1; } while(0)
#define BOT_UP_ResetPullup()    do { WPUBbits.WPUB5 = 0; } while(0)
#define BOT_UP_SetAnalogMode()  do { ANSELBbits.ANSB5 = 1; } while(0)
#define BOT_UP_SetDigitalMode() do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set IO_RB6 aliases
#define IO_RB6_TRIS               TRISBbits.TRISB6
#define IO_RB6_LAT                LATBbits.LATB6
#define IO_RB6_PORT               PORTBbits.RB6
#define IO_RB6_WPU                WPUBbits.WPUB6
#define IO_RB6_SetHigh()            do { LATBbits.LATB6 = 1; } while(0)
#define IO_RB6_SetLow()             do { LATBbits.LATB6 = 0; } while(0)
#define IO_RB6_Toggle()             do { LATBbits.LATB6 = ~LATBbits.LATB6; } while(0)
#define IO_RB6_GetValue()           PORTBbits.RB6
#define IO_RB6_SetDigitalInput()    do { TRISBbits.TRISB6 = 1; } while(0)
#define IO_RB6_SetDigitalOutput()   do { TRISBbits.TRISB6 = 0; } while(0)
#define IO_RB6_SetPullup()      do { WPUBbits.WPUB6 = 1; } while(0)
#define IO_RB6_ResetPullup()    do { WPUBbits.WPUB6 = 0; } while(0)

// get/set IO_RB7 aliases
#define IO_RB7_TRIS               TRISBbits.TRISB7
#define IO_RB7_LAT                LATBbits.LATB7
#define IO_RB7_PORT               PORTBbits.RB7
#define IO_RB7_WPU                WPUBbits.WPUB7
#define IO_RB7_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define IO_RB7_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define IO_RB7_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define IO_RB7_GetValue()           PORTBbits.RB7
#define IO_RB7_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define IO_RB7_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define IO_RB7_SetPullup()      do { WPUBbits.WPUB7 = 1; } while(0)
#define IO_RB7_ResetPullup()    do { WPUBbits.WPUB7 = 0; } while(0)

// get/set LED_VERDE aliases
#define LED_VERDE_TRIS               TRISCbits.TRISC0
#define LED_VERDE_LAT                LATCbits.LATC0
#define LED_VERDE_PORT               PORTCbits.RC0
#define LED_VERDE_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define LED_VERDE_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define LED_VERDE_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define LED_VERDE_GetValue()           PORTCbits.RC0
#define LED_VERDE_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define LED_VERDE_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)

// get/set RES_WARM aliases
#define RES_WARM_TRIS               TRISCbits.TRISC1
#define RES_WARM_LAT                LATCbits.LATC1
#define RES_WARM_PORT               PORTCbits.RC1
#define RES_WARM_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define RES_WARM_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define RES_WARM_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define RES_WARM_GetValue()           PORTCbits.RC1
#define RES_WARM_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define RES_WARM_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)

// get/set BUZZER aliases
#define BUZZER_TRIS               TRISCbits.TRISC2
#define BUZZER_LAT                LATCbits.LATC2
#define BUZZER_PORT               PORTCbits.RC2
#define BUZZER_ANS                ANSELCbits.ANSC2
#define BUZZER_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define BUZZER_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define BUZZER_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define BUZZER_GetValue()           PORTCbits.RC2
#define BUZZER_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define BUZZER_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define BUZZER_SetAnalogMode()  do { ANSELCbits.ANSC2 = 1; } while(0)
#define BUZZER_SetDigitalMode() do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set IO_RC3 aliases
#define IO_RC3_TRIS               TRISCbits.TRISC3
#define IO_RC3_LAT                LATCbits.LATC3
#define IO_RC3_PORT               PORTCbits.RC3
#define IO_RC3_ANS                ANSELCbits.ANSC3
#define IO_RC3_SetHigh()            do { LATCbits.LATC3 = 1; } while(0)
#define IO_RC3_SetLow()             do { LATCbits.LATC3 = 0; } while(0)
#define IO_RC3_Toggle()             do { LATCbits.LATC3 = ~LATCbits.LATC3; } while(0)
#define IO_RC3_GetValue()           PORTCbits.RC3
#define IO_RC3_SetDigitalInput()    do { TRISCbits.TRISC3 = 1; } while(0)
#define IO_RC3_SetDigitalOutput()   do { TRISCbits.TRISC3 = 0; } while(0)
#define IO_RC3_SetAnalogMode()  do { ANSELCbits.ANSC3 = 1; } while(0)
#define IO_RC3_SetDigitalMode() do { ANSELCbits.ANSC3 = 0; } while(0)

// get/set LED_VERMELHO aliases
#define LED_VERMELHO_TRIS               TRISCbits.TRISC4
#define LED_VERMELHO_LAT                LATCbits.LATC4
#define LED_VERMELHO_PORT               PORTCbits.RC4
#define LED_VERMELHO_ANS                ANSELCbits.ANSC4
#define LED_VERMELHO_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define LED_VERMELHO_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define LED_VERMELHO_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define LED_VERMELHO_GetValue()           PORTCbits.RC4
#define LED_VERMELHO_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define LED_VERMELHO_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define LED_VERMELHO_SetAnalogMode()  do { ANSELCbits.ANSC4 = 1; } while(0)
#define LED_VERMELHO_SetDigitalMode() do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set LED_AZUL aliases
#define LED_AZUL_TRIS               TRISCbits.TRISC5
#define LED_AZUL_LAT                LATCbits.LATC5
#define LED_AZUL_PORT               PORTCbits.RC5
#define LED_AZUL_ANS                ANSELCbits.ANSC5
#define LED_AZUL_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define LED_AZUL_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define LED_AZUL_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define LED_AZUL_GetValue()           PORTCbits.RC5
#define LED_AZUL_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define LED_AZUL_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define LED_AZUL_SetAnalogMode()  do { ANSELCbits.ANSC5 = 1; } while(0)
#define LED_AZUL_SetDigitalMode() do { ANSELCbits.ANSC5 = 0; } while(0)

// get/set IO_RC6 aliases
#define IO_RC6_TRIS               TRISCbits.TRISC6
#define IO_RC6_LAT                LATCbits.LATC6
#define IO_RC6_PORT               PORTCbits.RC6
#define IO_RC6_ANS                ANSELCbits.ANSC6
#define IO_RC6_SetHigh()            do { LATCbits.LATC6 = 1; } while(0)
#define IO_RC6_SetLow()             do { LATCbits.LATC6 = 0; } while(0)
#define IO_RC6_Toggle()             do { LATCbits.LATC6 = ~LATCbits.LATC6; } while(0)
#define IO_RC6_GetValue()           PORTCbits.RC6
#define IO_RC6_SetDigitalInput()    do { TRISCbits.TRISC6 = 1; } while(0)
#define IO_RC6_SetDigitalOutput()   do { TRISCbits.TRISC6 = 0; } while(0)
#define IO_RC6_SetAnalogMode()  do { ANSELCbits.ANSC6 = 1; } while(0)
#define IO_RC6_SetDigitalMode() do { ANSELCbits.ANSC6 = 0; } while(0)

// get/set IO_RC7 aliases
#define IO_RC7_TRIS               TRISCbits.TRISC7
#define IO_RC7_LAT                LATCbits.LATC7
#define IO_RC7_PORT               PORTCbits.RC7
#define IO_RC7_ANS                ANSELCbits.ANSC7
#define IO_RC7_SetHigh()            do { LATCbits.LATC7 = 1; } while(0)
#define IO_RC7_SetLow()             do { LATCbits.LATC7 = 0; } while(0)
#define IO_RC7_Toggle()             do { LATCbits.LATC7 = ~LATCbits.LATC7; } while(0)
#define IO_RC7_GetValue()           PORTCbits.RC7
#define IO_RC7_SetDigitalInput()    do { TRISCbits.TRISC7 = 1; } while(0)
#define IO_RC7_SetDigitalOutput()   do { TRISCbits.TRISC7 = 0; } while(0)
#define IO_RC7_SetAnalogMode()  do { ANSELCbits.ANSC7 = 1; } while(0)
#define IO_RC7_SetDigitalMode() do { ANSELCbits.ANSC7 = 0; } while(0)

// get/set IO_RD0 aliases
#define IO_RD0_TRIS               TRISDbits.TRISD0
#define IO_RD0_LAT                LATDbits.LATD0
#define IO_RD0_PORT               PORTDbits.RD0
#define IO_RD0_ANS                ANSELDbits.ANSD0
#define IO_RD0_SetHigh()            do { LATDbits.LATD0 = 1; } while(0)
#define IO_RD0_SetLow()             do { LATDbits.LATD0 = 0; } while(0)
#define IO_RD0_Toggle()             do { LATDbits.LATD0 = ~LATDbits.LATD0; } while(0)
#define IO_RD0_GetValue()           PORTDbits.RD0
#define IO_RD0_SetDigitalInput()    do { TRISDbits.TRISD0 = 1; } while(0)
#define IO_RD0_SetDigitalOutput()   do { TRISDbits.TRISD0 = 0; } while(0)
#define IO_RD0_SetAnalogMode()  do { ANSELDbits.ANSD0 = 1; } while(0)
#define IO_RD0_SetDigitalMode() do { ANSELDbits.ANSD0 = 0; } while(0)

// get/set IO_RD1 aliases
#define IO_RD1_TRIS               TRISDbits.TRISD1
#define IO_RD1_LAT                LATDbits.LATD1
#define IO_RD1_PORT               PORTDbits.RD1
#define IO_RD1_ANS                ANSELDbits.ANSD1
#define IO_RD1_SetHigh()            do { LATDbits.LATD1 = 1; } while(0)
#define IO_RD1_SetLow()             do { LATDbits.LATD1 = 0; } while(0)
#define IO_RD1_Toggle()             do { LATDbits.LATD1 = ~LATDbits.LATD1; } while(0)
#define IO_RD1_GetValue()           PORTDbits.RD1
#define IO_RD1_SetDigitalInput()    do { TRISDbits.TRISD1 = 1; } while(0)
#define IO_RD1_SetDigitalOutput()   do { TRISDbits.TRISD1 = 0; } while(0)
#define IO_RD1_SetAnalogMode()  do { ANSELDbits.ANSD1 = 1; } while(0)
#define IO_RD1_SetDigitalMode() do { ANSELDbits.ANSD1 = 0; } while(0)

// get/set IO_RD2 aliases
#define IO_RD2_TRIS               TRISDbits.TRISD2
#define IO_RD2_LAT                LATDbits.LATD2
#define IO_RD2_PORT               PORTDbits.RD2
#define IO_RD2_ANS                ANSELDbits.ANSD2
#define IO_RD2_SetHigh()            do { LATDbits.LATD2 = 1; } while(0)
#define IO_RD2_SetLow()             do { LATDbits.LATD2 = 0; } while(0)
#define IO_RD2_Toggle()             do { LATDbits.LATD2 = ~LATDbits.LATD2; } while(0)
#define IO_RD2_GetValue()           PORTDbits.RD2
#define IO_RD2_SetDigitalInput()    do { TRISDbits.TRISD2 = 1; } while(0)
#define IO_RD2_SetDigitalOutput()   do { TRISDbits.TRISD2 = 0; } while(0)
#define IO_RD2_SetAnalogMode()  do { ANSELDbits.ANSD2 = 1; } while(0)
#define IO_RD2_SetDigitalMode() do { ANSELDbits.ANSD2 = 0; } while(0)

// get/set IO_RD3 aliases
#define IO_RD3_TRIS               TRISDbits.TRISD3
#define IO_RD3_LAT                LATDbits.LATD3
#define IO_RD3_PORT               PORTDbits.RD3
#define IO_RD3_ANS                ANSELDbits.ANSD3
#define IO_RD3_SetHigh()            do { LATDbits.LATD3 = 1; } while(0)
#define IO_RD3_SetLow()             do { LATDbits.LATD3 = 0; } while(0)
#define IO_RD3_Toggle()             do { LATDbits.LATD3 = ~LATDbits.LATD3; } while(0)
#define IO_RD3_GetValue()           PORTDbits.RD3
#define IO_RD3_SetDigitalInput()    do { TRISDbits.TRISD3 = 1; } while(0)
#define IO_RD3_SetDigitalOutput()   do { TRISDbits.TRISD3 = 0; } while(0)
#define IO_RD3_SetAnalogMode()  do { ANSELDbits.ANSD3 = 1; } while(0)
#define IO_RD3_SetDigitalMode() do { ANSELDbits.ANSD3 = 0; } while(0)

// get/set IO_RD4 aliases
#define IO_RD4_TRIS               TRISDbits.TRISD4
#define IO_RD4_LAT                LATDbits.LATD4
#define IO_RD4_PORT               PORTDbits.RD4
#define IO_RD4_ANS                ANSELDbits.ANSD4
#define IO_RD4_SetHigh()            do { LATDbits.LATD4 = 1; } while(0)
#define IO_RD4_SetLow()             do { LATDbits.LATD4 = 0; } while(0)
#define IO_RD4_Toggle()             do { LATDbits.LATD4 = ~LATDbits.LATD4; } while(0)
#define IO_RD4_GetValue()           PORTDbits.RD4
#define IO_RD4_SetDigitalInput()    do { TRISDbits.TRISD4 = 1; } while(0)
#define IO_RD4_SetDigitalOutput()   do { TRISDbits.TRISD4 = 0; } while(0)
#define IO_RD4_SetAnalogMode()  do { ANSELDbits.ANSD4 = 1; } while(0)
#define IO_RD4_SetDigitalMode() do { ANSELDbits.ANSD4 = 0; } while(0)

// get/set IO_RD5 aliases
#define IO_RD5_TRIS               TRISDbits.TRISD5
#define IO_RD5_LAT                LATDbits.LATD5
#define IO_RD5_PORT               PORTDbits.RD5
#define IO_RD5_ANS                ANSELDbits.ANSD5
#define IO_RD5_SetHigh()            do { LATDbits.LATD5 = 1; } while(0)
#define IO_RD5_SetLow()             do { LATDbits.LATD5 = 0; } while(0)
#define IO_RD5_Toggle()             do { LATDbits.LATD5 = ~LATDbits.LATD5; } while(0)
#define IO_RD5_GetValue()           PORTDbits.RD5
#define IO_RD5_SetDigitalInput()    do { TRISDbits.TRISD5 = 1; } while(0)
#define IO_RD5_SetDigitalOutput()   do { TRISDbits.TRISD5 = 0; } while(0)
#define IO_RD5_SetAnalogMode()  do { ANSELDbits.ANSD5 = 1; } while(0)
#define IO_RD5_SetDigitalMode() do { ANSELDbits.ANSD5 = 0; } while(0)

// get/set IO_RD6 aliases
#define IO_RD6_TRIS               TRISDbits.TRISD6
#define IO_RD6_LAT                LATDbits.LATD6
#define IO_RD6_PORT               PORTDbits.RD6
#define IO_RD6_ANS                ANSELDbits.ANSD6
#define IO_RD6_SetHigh()            do { LATDbits.LATD6 = 1; } while(0)
#define IO_RD6_SetLow()             do { LATDbits.LATD6 = 0; } while(0)
#define IO_RD6_Toggle()             do { LATDbits.LATD6 = ~LATDbits.LATD6; } while(0)
#define IO_RD6_GetValue()           PORTDbits.RD6
#define IO_RD6_SetDigitalInput()    do { TRISDbits.TRISD6 = 1; } while(0)
#define IO_RD6_SetDigitalOutput()   do { TRISDbits.TRISD6 = 0; } while(0)
#define IO_RD6_SetAnalogMode()  do { ANSELDbits.ANSD6 = 1; } while(0)
#define IO_RD6_SetDigitalMode() do { ANSELDbits.ANSD6 = 0; } while(0)

// get/set IO_RD7 aliases
#define IO_RD7_TRIS               TRISDbits.TRISD7
#define IO_RD7_LAT                LATDbits.LATD7
#define IO_RD7_PORT               PORTDbits.RD7
#define IO_RD7_ANS                ANSELDbits.ANSD7
#define IO_RD7_SetHigh()            do { LATDbits.LATD7 = 1; } while(0)
#define IO_RD7_SetLow()             do { LATDbits.LATD7 = 0; } while(0)
#define IO_RD7_Toggle()             do { LATDbits.LATD7 = ~LATDbits.LATD7; } while(0)
#define IO_RD7_GetValue()           PORTDbits.RD7
#define IO_RD7_SetDigitalInput()    do { TRISDbits.TRISD7 = 1; } while(0)
#define IO_RD7_SetDigitalOutput()   do { TRISDbits.TRISD7 = 0; } while(0)
#define IO_RD7_SetAnalogMode()  do { ANSELDbits.ANSD7 = 1; } while(0)
#define IO_RD7_SetDigitalMode() do { ANSELDbits.ANSD7 = 0; } while(0)

// get/set IO_RE0 aliases
#define IO_RE0_TRIS               TRISEbits.TRISE0
#define IO_RE0_LAT                LATEbits.LATE0
#define IO_RE0_PORT               PORTEbits.RE0
#define IO_RE0_ANS                ANSELEbits.ANSE0
#define IO_RE0_SetHigh()            do { LATEbits.LATE0 = 1; } while(0)
#define IO_RE0_SetLow()             do { LATEbits.LATE0 = 0; } while(0)
#define IO_RE0_Toggle()             do { LATEbits.LATE0 = ~LATEbits.LATE0; } while(0)
#define IO_RE0_GetValue()           PORTEbits.RE0
#define IO_RE0_SetDigitalInput()    do { TRISEbits.TRISE0 = 1; } while(0)
#define IO_RE0_SetDigitalOutput()   do { TRISEbits.TRISE0 = 0; } while(0)
#define IO_RE0_SetAnalogMode()  do { ANSELEbits.ANSE0 = 1; } while(0)
#define IO_RE0_SetDigitalMode() do { ANSELEbits.ANSE0 = 0; } while(0)

// get/set IO_RE1 aliases
#define IO_RE1_TRIS               TRISEbits.TRISE1
#define IO_RE1_LAT                LATEbits.LATE1
#define IO_RE1_PORT               PORTEbits.RE1
#define IO_RE1_ANS                ANSELEbits.ANSE1
#define IO_RE1_SetHigh()            do { LATEbits.LATE1 = 1; } while(0)
#define IO_RE1_SetLow()             do { LATEbits.LATE1 = 0; } while(0)
#define IO_RE1_Toggle()             do { LATEbits.LATE1 = ~LATEbits.LATE1; } while(0)
#define IO_RE1_GetValue()           PORTEbits.RE1
#define IO_RE1_SetDigitalInput()    do { TRISEbits.TRISE1 = 1; } while(0)
#define IO_RE1_SetDigitalOutput()   do { TRISEbits.TRISE1 = 0; } while(0)
#define IO_RE1_SetAnalogMode()  do { ANSELEbits.ANSE1 = 1; } while(0)
#define IO_RE1_SetDigitalMode() do { ANSELEbits.ANSE1 = 0; } while(0)

// get/set IO_RE2 aliases
#define IO_RE2_TRIS               TRISEbits.TRISE2
#define IO_RE2_LAT                LATEbits.LATE2
#define IO_RE2_PORT               PORTEbits.RE2
#define IO_RE2_ANS                ANSELEbits.ANSE2
#define IO_RE2_SetHigh()            do { LATEbits.LATE2 = 1; } while(0)
#define IO_RE2_SetLow()             do { LATEbits.LATE2 = 0; } while(0)
#define IO_RE2_Toggle()             do { LATEbits.LATE2 = ~LATEbits.LATE2; } while(0)
#define IO_RE2_GetValue()           PORTEbits.RE2
#define IO_RE2_SetDigitalInput()    do { TRISEbits.TRISE2 = 1; } while(0)
#define IO_RE2_SetDigitalOutput()   do { TRISEbits.TRISE2 = 0; } while(0)
#define IO_RE2_SetAnalogMode()  do { ANSELEbits.ANSE2 = 1; } while(0)
#define IO_RE2_SetDigitalMode() do { ANSELEbits.ANSE2 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/