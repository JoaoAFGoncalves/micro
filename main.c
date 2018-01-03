/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs 

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs  - 1.45
        Device            :  PIC18F45K22
        Driver Version    :  2.00
    The generated drivers are tested against the following:
        Compiler          :  XC8 1.35
        MPLAB             :  MPLAB X 3.40
 */

/*
    (c) 2016 Microchip Technology Inc. and its subsidiaries. You may use this
    software and any derivatives exclusively with Microchip products.

    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED
    WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A
    PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION
    WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION.

    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS
    BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO THE
    FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS IN
    ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF ANY,
    THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.

    MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE
    TERMS.
 */

#include "mcc_generated_files/mcc.h"

/* header file para as bibliotecas de XC8 */
#include <xc.h>
#include <stdio.h>
#include "Variaveis.h"

/* header file para a biblioteca XLCD */
#include "xlcd.h"

/* definição da velocidade de relógio para a função delay */
#define _XTAL_FREQ 8000000 

void menu();
void interrup_emergencia();
void XLCD_menu_time();
void XLCD_menu_temperatura();
void inicializacao_XLCD();
void eusart();
void eusart_case();
void alterar_temperatura_eusart();
void delay_500ms();

/*
                         Main application
 */
void main(void) {
    // Initialize the device
    SYSTEM_Initialize();

    // If using interrupts in PIC18 High/Low Priority Mode you need to enable the Global High and Low Interrupts
    // If using interrupts in PIC Mid-Range Compatibility Mode you need to enable the Global and Peripheral Interrupts
    // Use the following macros to:

    // Enable high priority global interrupts
    INTERRUPT_GlobalInterruptHighEnable();

    // Enable low priority global interrupts.
    INTERRUPT_GlobalInterruptLowEnable();

    // Disable high priority global interrupts
    //INTERRUPT_GlobalInterruptHighDisable();

    // Disable low priority global interrupts.
    //INTERRUPT_GlobalInterruptLowDisable();

    // Enable the Global Interrupts
    //INTERRUPT_GlobalInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Enable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptEnable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();

    int temp, cnt1 = 0, tempmin = 25;

    //CCP1CONbits.CCP1M = 0;
    EPWM1_LoadDutyValue(0);
    EPWM2_LoadDutyValue(0);

    inicializacao_XLCD();

    /*
     * APRESENTÇÃO:
     * 
     *  | SISTEMA CONTROLO DA TEMPERATURA |
     *  |      DE UM FORNO DE CERAMICA    |
     *
     *  |-> JOÃO GONÇALVES     n: 2160782 |
     *  |-> MARCELO FERREIRA   n: 2151750 |
     * 
     *  |      A INICIAR PROGRAMA....     |
     *  |      A PROCESSAR....            |
     * 
     *  |  TEMPERATURA:      /            |
     *  |  TEMPO:            /            |
     * 
     */
    //    /**** LINE 1*****/
    //    WriteCmdXLCD(LINE1);
    //    while (BusyXLCD());
    //    //        012345678901234567890123456789012
    //    putsXLCD(" SISTEMA CONTROLO DA TEMPERATURA ");
    //    while (BusyXLCD());
    //
    //    /**** LINE 2*****/
    //    WriteCmdXLCD(LINE2);
    //    while (BusyXLCD());
    //    //        012345678901234567890123456789012
    //    putsXLCD("      DE UM FORNO DE CERAMICA    ");
    //    while (BusyXLCD());
    //    __delay_ms(3000);
    //
    //    /*
    //     * NOME DOS ALUNOS
    //     */
    //    /**** LINE 1*****/
    //    WriteCmdXLCD(LINE1);
    //    while (BusyXLCD());
    //    //        01234567890123456789012345678901
    //    putsXLCD("-> JO");
    //    while (BusyXLCD());
    //    putcXLCD(0b0000); //chama o Ã para o JOÃO 
    //    while (BusyXLCD());
    //    putsXLCD("O GON");
    //    while (BusyXLCD());
    //    putcXLCD(0b0001); //chama o Ç para o GONÇALVES
    //    while (BusyXLCD());
    //    putsXLCD("ALVES     n");
    //    while (BusyXLCD());
    //    putcXLCD(0b0010); //chama o 'º' para o nº:
    //    while (BusyXLCD());
    //    putsXLCD(": 2160782");
    //    while (BusyXLCD());
    //
    //    /**** LINE 2*****/
    //    WriteCmdXLCD(LINE2);
    //    while (BusyXLCD());
    //    //        01234567890123456789012345678901
    //    putsXLCD("-> MARCELO FERREIRA   n");
    //    while (BusyXLCD());
    //    putcXLCD(0b0010); //chama o 'º' para nº:
    //    while (BusyXLCD());
    //    putsXLCD(": 2151750");
    //    while (BusyXLCD());
    //    __delay_ms(3000);
    //
    //    /**** LINE 1*****/
    //    WriteCmdXLCD(LINE1);
    //    while (BusyXLCD());
    //    //        012345678901234567890123456789012
    //    putsXLCD("      A INICIAR PROGRAMA....     ");
    //    while (BusyXLCD());
    //    /**** LINE 2*****/
    //    WriteCmdXLCD(LINE2);
    //    while (BusyXLCD());
    //    //        012345678901234567890123456789012
    //    putsXLCD("                                 ");
    //    while (BusyXLCD());
    //    __delay_ms(3500);
    //
    //    /**** LINE 2*****/
    //    WriteCmdXLCD(LINE2);
    //    while (BusyXLCD());
    //    //        012345678901234567890123456789012
    //    putsXLCD("      A PROCESSAR....            ");
    //    while (BusyXLCD());
    //    __delay_ms(3500);


    while (1) {

        /*
         *      MENU:
         * LINE1:
         *   vai ter a temperatura real e a desejada apresentada do tipo:
         *      " TEMPERATURA:  REAL / DESEJADA"
         * LINE2:
         *   vai ter o tempo que falta para acabar e o tempo predefinido apresentado do tipo:
         *      " TEMPO: FALTA / PREDEFINIDO"
         */

        /*atualizar menu de 500ms em 500ms no LCD*/
        while (clk500ms) {

            ADC_StartConversion();

            if (cnt_menu == 0) {
                /**** LINE 1*****/
                WriteCmdXLCD(LINE1);
                while (BusyXLCD());
                //        12345678901234567890123456789012
                putsXLCD("  TEMPERATURA:      /            ");
                while (BusyXLCD());
                WriteCmdXLCD(LINE1 + 27);
                putcXLCD(0b0010); //chama o 'º' para ºC
                while (BusyXLCD());
                putsXLCD("C");
                while (BusyXLCD());

                /**** LINE 2*****/
                WriteCmdXLCD(LINE2);
                while (BusyXLCD());
                //        012345678901234567890123456789012
                putsXLCD("  TEMPO:            /      seg.  ");
                while (BusyXLCD());
            }

            if (cnt_menu >= 0 && cnt_menu < 10) {

                /*variavel da temperatura real no forno*/
                WriteCmdXLCD(LINE1 + 15);
                while (BusyXLCD());
                sprintf(tmp_str, "%4d", temperatura_real);
                putsXLCD(tmp_str);
                while (BusyXLCD());
                /*variavel da temperatura desejada no forno*/
                WriteCmdXLCD(LINE1 + 22);
                while (BusyXLCD());
                sprintf(tmp_str, "%4d", temperatura_desejada);
                putsXLCD(tmp_str);
                while (BusyXLCD());

                /*variavel do tempo que falta forno para o forno terminar*/
                WriteCmdXLCD(LINE2 + 15);
                while (BusyXLCD());
                sprintf(tmp_str, "%4d", time_real);
                putsXLCD(tmp_str);
                while (BusyXLCD());
                /*variavel do tempo selecionado para o forno terminar*/
                WriteCmdXLCD(LINE2 + 22);
                while (BusyXLCD());
                sprintf(tmp_str, "%4d", time_desejado);
                putsXLCD(tmp_str);
                while (BusyXLCD());
                while (clk500ms);

            } else {

                if (cnt_menu == 10) {
                    WriteCmdXLCD(LINE1);
                    while (BusyXLCD());
                    //        12345678901234567890123456789012
                    putsXLCD("  PWM RESISTENCIA:      %    ");
                    while (BusyXLCD());
                }

                if (cnt_menu >= 10 && cnt_menu <= 20) {

                    WriteCmdXLCD(LINE1 + 20);
                    while (BusyXLCD());
                    sprintf(tmp_str, "%4d", valor_pwm);
                    putsXLCD(tmp_str);
                    while (BusyXLCD());

                    if (verifica_LCD == 0) {

                        if (estado == 0) {
                            WriteCmdXLCD(LINE2);
                            while (BusyXLCD());
                            //        12345678901234567890123456789012
                            putsXLCD("  Temperatura dentro da gama      ");
                            while (BusyXLCD());
                        } else if (clk2s) {
                            if (estado == 1) {
                                WriteCmdXLCD(LINE2);
                                while (BusyXLCD());
                                //        12345678901234567890123456789012
                                putsXLCD("  Temperatura abaixo da gama    ");
                                while (BusyXLCD());
                            }
                            if (estado == 2) {
                                WriteCmdXLCD(LINE2);
                                while (BusyXLCD());
                                //        12345678901234567890123456789012
                                putsXLCD("  Temperatura acima da gama    ");
                                while (BusyXLCD());
                            }
                        }
                        verifica_LCD = 1;
                    }
                } else {
                    cnt_menu = -1;
                }
            }



            erro_temperatura = temperatura_real - temperatura_desejada;
            cnt_menu++;

        }/*fim do while de atualizar LCD*/

        if (estado != lastEstado) {
            lastEstado = estado;
            verifica_LCD = 0;
        }

        if (temperatura_real >= 600 && temperatura_real <= 850) {
            estado = 0;
            LED_VERDE_LAT = 0;
            LED_VERMELHO_LAT = 0;
        }

        if (time_2s == 2) {

            if (temperatura_real < 600) {
                estado = 1;
                EPWM1_LoadDutyValue(15);
                LED_VERDE_LAT = ~LED_VERDE_LAT;
                EPWM1_LoadDutyValue(0);
            }

            if (temperatura_real > 850) {
                estado = 2;
                EPWM1_LoadDutyValue(15);
                LED_VERMELHO_LAT = ~LED_VERMELHO_LAT;
                EPWM1_LoadDutyValue(0);
            }
            time_2s = 0;
        }

        if (iniciar == 1) {


            if (time_real == 0) {

                //res warm a trabahar a 0% -> 0 do pwm
                EPWM2_LoadDutyValue(0);
                valor_pwm = 0;

                if (time_off_alarme <= 5) {

                    do {

                        EPWM1_LoadDutyValue(5);

                        if (verifica_LCD == 0) {

                            /**** LINE 1*****/
                            WriteCmdXLCD(LINE1);
                            while (BusyXLCD());
                            //        012345678901234567890123456789012
                            putsXLCD("       *  TEMPO TERMINOU  *      "); //tem de vir a duas variaveis 
                            while (BusyXLCD());

                            /**** LINE 2*****/
                            WriteCmdXLCD(LINE2);
                            while (BusyXLCD());
                            //        012345678901234567890123456789012
                            putsXLCD("PRESS SELECT PARA DESLIGAR ALARME");
                            while (BusyXLCD());

                            verifica_LCD = 1;
                        }

                    } while (BOT_SELECT == 0);

                    verifica_LCD = 0;

                } else {

                    EPWM1_LoadDutyValue(0);

                    /**** LINE 1*****/
                    WriteCmdXLCD(LINE1);
                    while (BusyXLCD());
                    //        12345678901234567890123456789012
                    putsXLCD("  TEMPERATURA:      /            ");
                    while (BusyXLCD());
                    WriteCmdXLCD(LINE1 + 27);
                    putcXLCD(0b0010); //chama o 'º' para ºC
                    while (BusyXLCD());
                    putsXLCD("C");
                    while (BusyXLCD());

                    /**** LINE 2*****/
                    WriteCmdXLCD(LINE2);
                    while (BusyXLCD());
                    //        012345678901234567890123456789012
                    putsXLCD("  TEMPO:            /      seg.  ");
                    while (BusyXLCD());
                }

            } else {

                /*
                 * res warm a trabalhar com o pwm a 5 niveis, a 0%, a 25%, a 50%, a 75%, a 100% 
                 */
                if (erro_temperatura >= 0) {
                    //res warm a trabahar a 0% -> 0 do pwm
                    EPWM2_LoadDutyValue(0);
                    valor_pwm = 0;
                }

                if (erro_temperatura < 0 && erro_temperatura >= -10) {
                    //res warm a trabahar a 25% -> 124 do pwm
                    EPWM2_LoadDutyValue(124);
                    valor_pwm = 25;

                }

                if (erro_temperatura < -10 && erro_temperatura >= -30) {
                    //res warm a trabahar a 50% -> 249 do pwm
                    EPWM2_LoadDutyValue(249);
                    valor_pwm = 50;

                }

                if (erro_temperatura <-30 && erro_temperatura >= -65) {
                    //res warm a trabahar a 75% -> 374 do pwm
                    EPWM2_LoadDutyValue(374);
                    valor_pwm = 75;

                }

                if (erro_temperatura < -65) {
                    //res warm a trabahar a 100% -> 499 do pwm
                    EPWM2_LoadDutyValue(499);
                    valor_pwm = 100;

                }
            }


        } else {
            if (erro_temperatura >= 0) {
                //res warm a trabahar a 0% -> 0 do pwm
                EPWM2_LoadDutyValue(0);
                valor_pwm = 0;

            }
        }

        if (menu_var == 1) {
            menu();
            menu_var = 0;
            /**** LINE 1*****/
            WriteCmdXLCD(LINE1);
            while (BusyXLCD());
            //        12345678901234567890123456789012
            putsXLCD("  TEMPERATURA:      /            ");
            while (BusyXLCD());
            WriteCmdXLCD(LINE1 + 27);
            putcXLCD(0b0010); //chama o 'º' para ºC
            while (BusyXLCD());
            putsXLCD("C");
            while (BusyXLCD());

            /**** LINE 2*****/
            WriteCmdXLCD(LINE2);
            while (BusyXLCD());
            //        012345678901234567890123456789012
            putsXLCD("  TEMPO:            /      seg.  ");
            while (BusyXLCD());
        }

        if (emergencia_var == 1) {

            // Desabling TMR1 interrupt.
            PIE1bits.TMR1IE = 0;

            interrup_emergencia();

            /**** LINE 1*****/
            WriteCmdXLCD(LINE1);
            while (BusyXLCD());
            //        12345678901234567890123456789012
            putsXLCD("  TEMPERATURA:      /            ");
            while (BusyXLCD());
            WriteCmdXLCD(LINE1 + 27);
            putcXLCD(0b0010); //chama o 'º' para ºC
            while (BusyXLCD());
            putsXLCD("C");
            while (BusyXLCD());

            /**** LINE 2*****/
            WriteCmdXLCD(LINE2);
            while (BusyXLCD());
            //        012345678901234567890123456789012
            putsXLCD("  TEMPO:            /      seg.  ");
            while (BusyXLCD());
        }

        if (eusart_Aux == 1) {
            eusart();
            eusart_Aux = 0;
        }

        if (eusart_var == 1) {
            eusart_case();
            eusart_Aux = 1;
            eusart_var = 0;
        }




    }/*FIM DO WHILE*/


}/*FIM DA MAIN*/

/**
 End of File
 */

void delay_500ms() {
    /* aguarda 500 ms */
    for (int j = 0; j < 100; j++)
        __delay_ms(5);
}

void inicializacao_XLCD() {

    /*
     * Inicialização do LCD:
     * FOUR_BIT: Modo de ligação do display a 4 bits
     * LINES_5X7: Caracteres no display com tamanho 5 colunas por
     * 7 linhas
     *
     * OpenXLCD(FOUR_BIT & LINES_5X7);
     */
    OpenXLCD(FOUR_BIT & LINES_5X7);
    while (BusyXLCD());
    /*
     * Comando interno para o LCD:
     * D_ON: Liga display
     * CURSOR_OFF: Desliga cursor
     * BLINK_OFF: Desliga modo blink (piscar)
     *
     * WriteCmdXLCD(DON & CURSOR_OFF & BLINK_OFF);
     */
    WriteCmdXLCD(DON & CURSOR_OFF & BLINK_OFF);
    while (BusyXLCD());
    /*
     * Comando interno para o LCD:
     * SHIFT_CUR_RIGHT: Deslocamento do cursor para a direita
     *
     * WriteCmdXLCD(SHIFT_CUR_RIGHT);
     */
    WriteCmdXLCD(SHIFT_CUR_LEFT);
    while (BusyXLCD());
    /*
     * Comando interno para o LCD:
     * CLEAR_LCD: Limpa conteúdo do display
     */
    WriteCmdXLCD(CLEAR_LCD);
    while (BusyXLCD());
    /**
     * caracteres especiais 
     */

    /*
     * 'Ã'
     */
    SetCGRamAddr(0b00000000);
    while (BusyXLCD());
    WriteDataXLCD(0b0000101);
    while (BusyXLCD());
    WriteDataXLCD(0b0001010);
    while (BusyXLCD());
    WriteDataXLCD(0b0000000);
    while (BusyXLCD());
    WriteDataXLCD(0b0000100);
    while (BusyXLCD());
    WriteDataXLCD(0b0001010);
    while (BusyXLCD());
    WriteDataXLCD(0b0001110);
    while (BusyXLCD());
    WriteDataXLCD(0b0001010);
    while (BusyXLCD());
    WriteDataXLCD(0b0000000);
    while (BusyXLCD());

    /**
     * 'Ç'
     */
    SetCGRamAddr(0b00001000);
    while (BusyXLCD());
    WriteDataXLCD(0b0000000);
    while (BusyXLCD());
    WriteDataXLCD(0b0001110);
    while (BusyXLCD());
    WriteDataXLCD(0b0001000);
    while (BusyXLCD());
    WriteDataXLCD(0b0001000);
    while (BusyXLCD());
    WriteDataXLCD(0b0001000);
    while (BusyXLCD());
    WriteDataXLCD(0b0001110);
    while (BusyXLCD());
    WriteDataXLCD(0b0000100);
    while (BusyXLCD());

    /**
     *  'º'
     */
    SetCGRamAddr(0b00010000);
    while (BusyXLCD());
    WriteDataXLCD(0b0001110);
    while (BusyXLCD());
    WriteDataXLCD(0b0001010);
    while (BusyXLCD());
    WriteDataXLCD(0b0001110);
    while (BusyXLCD());
    WriteDataXLCD(0b0000000);
    while (BusyXLCD());
    WriteDataXLCD(0b0000000);
    while (BusyXLCD());
    WriteDataXLCD(0b0000000);
    while (BusyXLCD());
    WriteDataXLCD(0b0000000);
    while (BusyXLCD());
}

void XLCD_menu_temperatura() {

    int lastTemp, cnt1 = 0, temperatura_min = 25;

    WriteCmdXLCD(LINE1);
    while (BusyXLCD());
    //        012345678901234567890123456789012
    putsXLCD("    Menu da TEMPERATURA          ");
    while (BusyXLCD());

    WriteCmdXLCD(LINE2);
    while (BusyXLCD());
    //        012345678901234567890123456789012
    putsXLCD("   SELECIONAR TEMPERATURA:       ");
    while (BusyXLCD());


    do {

        /*
         *  quando o BOTÃO UP é pressionado envia o sinal de "1"
         *  BOTAO aqui serve para INCREMENTAR TEMPERATURA
         */
        if (BOT_UP == 1) {
            /* liga o LED de sinalização RC5 para indicar que o botão ta  a sr pressionado */
            LATCbits.LATC5 = 1;
            /* incrementa o contador para por a temperatura final */
            cnt1++;
            /* ficar à espera para só incrememntar quando é precionado o botao */
            while (BOT_UP == 1) {

            }
            /* desliga o LED de sinalização RC5 para indicar que o botão já não 
             está a ser pressionado */
            LATCbits.LATC5 = 0;
        }

        /*
         *  quando o BOTÃO DOWN é pressionado envia o sinal de "1"
         *  BOTAO aqui serve para DECREMENTAR TEMPERATURA
         */
        if (BOT_DOWN == 1) {
            /* liga o LED de sinalização RC5 para indicar que o botão está a ser pressionado */
            LATCbits.LATC5 = 1;
            /* decrementa o contador para por a temperatura final */
            cnt1--;
            /* ficar à espera para só incrememntar quando é precionado o botao */
            while (BOT_DOWN == 1) {

            }
            /* desliga o LED de sinalização RC5 para indicar que o botão já não 
             está a ser pressionado */
            LATCbits.LATC5 = 0;
        }

        /* desliga o LED de sinalização RC5 para indicar que o botão já não 
        está a ser pressionado */
        //LATCbits.LATC5 = 0;

        if (cnt1 > 33)
            cnt1 = 0;

        if (cnt1 < 0)
            cnt1 = 33;

        temperatura_desejada = cnt1 * 100 + temperatura_min;

        if (lastTemp != temperatura_desejada) {
            WriteCmdXLCD(LINE2 + 28);
            while (BusyXLCD());
            sprintf(tmp_str, "%4d", temperatura_desejada);
            putsXLCD(tmp_str);
            while (BusyXLCD());
            lastTemp = temperatura_desejada;
        }
    } while (BOT_SELECT == 0);
}

void XLCD_menu_time() {

    int lastTime = -1, cnt2 = 0;

    WriteCmdXLCD(LINE1);
    while (BusyXLCD());
    //        012345678901234567890123456789012
    putsXLCD("     Menu de TEMPO                 ");
    while (BusyXLCD());

    WriteCmdXLCD(LINE2);
    while (BusyXLCD());
    //        012345678901234567890123456789012
    putsXLCD("   SELECIONAR TEMPO:             ");
    while (BusyXLCD());

    do {
        /*
         *  quando o BOTÃO UP é pressionado envia o sinal de "1"
         *  BOTAO aqui serve para INCREMENTAR TEMPO para o TEMPORIZADOR
         */
        if (BOT_UP == 1) {
            /* liga o LED de sinalização RC5 para indicar que o botão esta  a ser pressionado */
            LATCbits.LATC5 = 1;
            /* incrementa o contador para por o tempo para o temporizador */
            cnt2++;
            /* ficar à espera para só incrememntar quando é precionado o botao */
            while (BOT_UP == 1) {

            }
            /* desliga o LED de sinalização RC5 para indicar que o botão já não 
             está a ser pressionado */
            LATCbits.LATC5 = 0;
        }

        /*
         *  quando o BOTÃO DOWN é pressionado envia o sinal de "1"
         *  BOTAO aqui serve para DECREMENTAR TEMPO para o TEMPORIZADOR
         */
        if (BOT_DOWN == 1) {
            /* liga o LED de sinalização RC5 para indicar que o botão está a ser pressionado */
            LATCbits.LATC5 = 1;
            /* decrementa o contador para por o tempo para o temporizador */
            cnt2--;
            /* ficar à espera para só incrememntar quando é precionado o botao */
            while (BOT_DOWN == 1) {

            }
            /* desliga o LED de sinalização RC5 para indicar que o botão já não
              está a ser pressionado */
            LATCbits.LATC5 = 0;
        }

        /* desliga o LED de sinalização RC5 para indicar que o botão já não 
        está a ser pressionado */
        //LATCbits.LATC5 = 0;

        if (cnt2 > 200)
            cnt2 = 0;

        if (cnt2 < 0) //PERGUNTAR PROF
            cnt2 = 200;

        time_desejado = cnt2 + 3000;

        if (lastTime != time_desejado) {
            WriteCmdXLCD(LINE2 + 22);
            while (BusyXLCD());
            sprintf(tmp_str, "%4d secs", time_desejado);
            putsXLCD(tmp_str);
            while (BusyXLCD());
            lastTime = time_desejado;
        }
        time_real = time_desejado;

    } while (BOT_SELECT == 0);
}

void interrup_emergencia() {

    //LATCbits.LATC1 = 0; //DESLIGA RES. AQUECIMENTO
    RES_WARM_LAT = 0; //DESLIGA RES. AQUECIMENTO
    EPWM2_LoadDutyValue(0);

    WriteCmdXLCD(LINE1);
    while (BusyXLCD());
    //        0123456789012456789012345678901
    putsXLCD("          !!!ALARME!!!         ");
    while (BusyXLCD());

    WriteCmdXLCD(LINE2);
    while (BusyXLCD());
    //        0123456789012456789012345678901
    putsXLCD("     !!!PARAGEM FORÇADA!!!     ");
    while (BusyXLCD());

    //BUZZER a trabalhar a um PWM de 50%
    //CCP1CONbits.CCP1M = 1;
    EPWM1_LoadDutyValue(249);
    //CCP1CONbits.CCP1M = 1;

    __delay_ms(1000);

    WriteCmdXLCD(LINE1);
    while (BusyXLCD());
    //0123456789012456789012345678901
    putsXLCD("Caso pretenda desativar alarme ");
    while (BusyXLCD());

    WriteCmdXLCD(LINE2);
    while (BusyXLCD());
    //0123456789012456789012345678901
    putsXLCD("Press BOTAO EMERGÊNCIA  ");
    while (BusyXLCD());

    while (emergencia_var) {
        //LATCbits.LATC0 = 0; //DESLIGA LED VERDE
        LED_VERDE_LAT = ~LED_VERDE_LAT;
        //LATCbits.LATC4 = 0; //DESLIGA LED VERMELHO
        LED_VERMELHO_LAT = ~LED_VERMELHO_LAT;
        //LATCbits.LATC5 = 0; //DESLIGA LED AZUL
        LED_AZUL_LAT = ~LED_AZUL_LAT;
        __delay_ms(300);
    }

    //DESLIGA LED VERDE
    LED_VERDE_LAT = 0;
    //DESLIGA LED VERMELHO
    LED_VERMELHO_LAT = 0;
    //DESLIGA LED AZUL
    LED_AZUL_LAT = 0;
    // desliga o pwm do alarme sonoro
    EPWM1_LoadDutyValue(0);
    BUZZER_LAT = 0; //DESLIGA ALARME SONORO
    //CCP1CONbits.CCP1M = 0;

}

void menu() {

    WriteCmdXLCD(LINE1);
    while (BusyXLCD());
    //        012345678901234567890123456789012
    putsXLCD("1-Menu TEMPERATURA               ");
    while (BusyXLCD());

    WriteCmdXLCD(LINE2);
    while (BusyXLCD());
    //        012345678901234567890123456789012
    putsXLCD("2-Menu TEMPO                     ");
    while (BusyXLCD());

    WriteCmdXLCD(LINE1 + 31);
    while (BusyXLCD());
    //        012345678901234567890123456789012
    sprintf(tmp_str, "%d", menu_tmp);
    putsXLCD(tmp_str);
    while (BusyXLCD());

    do {
        if (BOT_UP == 1) {
            menu_tmp++;
            /* liga o LED de sinalização RC5 para indicar que o botão está a ser pressionado */
            LATCbits.LATC5 = 1;
            while (BOT_UP == 1);
            /* desliga o LED de sinalização RC5 para indicar que o botão já não está a ser pressionado */
            LATCbits.LATC5 = 0;
        }
        if (BOT_DOWN == 1) {
            menu_tmp--;
            /* liga o LED de sinalização RC5 para indicar que o botão está a ser pressionado */
            LATCbits.LATC5 = 1;
            while (BOT_DOWN == 1);
            /* desliga o LED de sinalização RC5 para indicar que o botão já não está a ser pressionado */
            LATCbits.LATC5 = 0;
        }

        if (menu_tmp > 2)
            menu_tmp = 1;
        if (menu_tmp < 1)
            menu_tmp = 2;

        //        /* desliga o LED de sinalização RC5 para indicar que o botão está a ser pressionado */
        //        LATCbits.LATC5 = 0;
        WriteCmdXLCD(LINE1 + 31);
        while (BusyXLCD());
        //        012345678901234567890123456789012
        sprintf(tmp_str, "%d", menu_tmp);
        putsXLCD(tmp_str);
        while (BusyXLCD());

    } while (BOT_SELECT == 0);

    if (BOT_SELECT == 1) {
        /* liga o LED de sinalização RC5 para indicar que o botão está a ser pressionado */
        LATCbits.LATC5 = 1;
        menu_act = menu_tmp;
        /* desliga o LED de sinalização RC5 para indicar que o botão já não está a ser pressionado */
        LATCbits.LATC5 = 0;
    }

    if (menu_act == 1)
        XLCD_menu_temperatura();
    else
        XLCD_menu_time();



    /*switch (menu_act) {
        
        case 1:
            XLCD_menu_temperatura();
            break;
        case 2:
            XLCD_menu_time();
            break;

    }*/
}

void eusart() {
    printf("\r\r  Menu: ");
    printf("\r 1- Desligar a resistencia de aquecimento do forno");
    printf("\r 2- Ligar o sistema de controlo de temperatura do forno de ceramica");
    printf("\r 3- Visualizar o valor atual da temperatura do forno");
    printf("\r 4- Visualizar o valor atual programado para a temperatura de referencia");
    printf("\r 5- Programar um novo valor de temperatura de referência para o forno");
    printf("\r 6- Ativar EMERGENCIA");
    printf("\r 7- Ligar o sistema de controlo de temperatura do forno de ceramica");
    printf("\r OPCAO: ");
}

void eusart_case() {


    teste = EUSART1_Read();



    //    teste = EUSART1_Read();

    switch (teste) {
        case '1':
            /*
             * desligar a resistencia
             */
            printf("\r Desligar a resistencia de aquecimento: ");
            LATCbits.LATC1 = 0; //DESLIGA RES. AQUECIMENTO
            EPWM2_LoadDutyValue(0); //DESLIGA PWM
            iniciar = 0;
            // Desabling TMR1 interrupt.
            PIE1bits.TMR1IE = 0;
            break;
        case '2':
            /*
             * ligar o sistema
             */
            printf("\r Sistema a iniciar...");
            iniciar = 1;
            // Enabling TMR1 interrupt.
            PIE1bits.TMR1IE = 1;
            break;
        case '3':
            /*
             * ver o valor atual da temperatura
             */
            printf("\r Valor atual da temperatura do forno");
            printf("\r Temperatura atual: %0.2d", temperatura_real);
            if (temperatura_real < 600) {
                printf("\r AVISO!!");
                printf("\r Temperatura ainda se encontra abaixo da gama [600,850] ºC");
            } else {
                if (temperatura_real > 850) {
                    printf("\r AVISO!!");
                    printf("\r Temperatura ultrapassou a gama [600,850] ºC");
                }
            }
            break;
        case '4':
            /*
             * ver o valor de temperatura desejado atual 
             */
            printf("\r Valor desejado da temperatura do forno");
            printf("\r Temperatura desejada: %0.2d", temperatura_desejada);
            if (temperatura_desejada < 600) {
                printf("\r AVISO!!");
                printf("\r Temperatura programada para um valor abaixo da gama [600,850] ºC");
            } else {
                if (temperatura_desejada > 850) {
                    printf("\r AVISO!!");
                    printf("\r Temperatura programada para um valor acima da gama [600,850] ºC");
                }
            }
            break;
        case '5':
            /*
             *programar um novo valor  
             */
            printf("\r Alterar o valor atual da temperatura do forno");
            printf("\r Temperatura atual: %0.2f", temperatura_real);
            printf("\r PRECIONE: ");
            printf("\r 8 - para aumentar a temperatura.");
            printf("\r 2 - para diminuir a temperatura.");
            printf("\r 0 - para comfirmar a alteração da temperatura desejada");
            alterar_temperatura_eusart();
            break;
        case '6':
            /*
             * ligar emergencia
             */
            INTCONbits.INT0IF = 1;
            printf("\r EMERGENCIA ATIVADA!!!!");
            printf("\r Para desativar a emergencia prima * ");
            //            if (INTCONbits.INT0IF = 1) {
            //                INTCONbits.INT0IF = 0;
            //            }
            break;
        case '7':
            printf("\r A desligar o sistema...");
            iniciar = 0;
            break;
    }
}

void alterar_temperatura_eusart() {

    int lastTemp, cnt1 = 0, temperatura_min = 25;
    do {
        do {

            /*
             *  quando o BOTÃO UP é pressionado envia o sinal de "1"
             *  BOTAO aqui serve para INCREMENTAR TEMPERATURA
             */
            if (BOT_UP == 1) {
                /* liga o LED de sinalização RC5 para indicar que o botão ta  a sr pressionado */
                LATCbits.LATC5 = 1;
                /* incrementa o contador para por a temperatura final */
                cnt1++;
                /* ficar à espera para só incrememntar quando é precionado o botao */
                while (BOT_UP == 1) {

                }
            }

            /*
             *  quando o BOTÃO DOWN é pressionado envia o sinal de "1"
             *  BOTAO aqui serve para DECREMENTAR TEMPERATURA
             */
            if (BOT_DOWN == 1) {
                /* liga o LED de sinalização RC5 para indicar que o botão está a ser pressionado */
                LATCbits.LATC5 = 1;
                /* decrementa o contador para por a temperatura final */
                cnt1--;
                /* ficar à espera para só incrememntar quando é precionado o botao */
                while (BOT_DOWN == 1) {

                }
            }

            /* desliga o LED de sinalização RC5 para indicar que o botão já não 
            está a ser pressionado */
            //LATCbits.LATC5 = 0;

            if (cnt1 > 33)
                cnt1 = 0;

            if (cnt1 < 0)
                cnt1 = 33;

            temperatura_desejada = cnt1 * 25 + temperatura_min;

            if (lastTemp != temperatura_desejada) {
                printf("\r Temperatura: %4d", temperatura_desejada);
                //            WriteCmdXLCD(LINE2 + 28);
                //            while (BusyXLCD());
                //            sprintf(tmp_str, "%4d", temperatura_desejada);
                //            putsXLCD(tmp_str);
                //            while (BusyXLCD());
                lastTemp = temperatura_desejada;
            }
        } while (BOT_SELECT == 0);
        if (temperatura_desejada > 599 && temperatura_desejada < 851) {
            verifica_temp = 1;
            printf("\r Temperatura alterada com sucesso!");
        } else {
            verifica_temp = 0;
            printf("\r Temperatura invalida, deverá de escolher uma temperatura entre os 600 e o 850 graus!");
        }
    } while (verifica_temp == 0);
}