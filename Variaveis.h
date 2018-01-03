/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments:
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef XC_HEADER_TEMPLATE_H
#define	XC_HEADER_TEMPLATE_H

#include <xc.h> // include processor files - each processor file is guarded.  

/* definição da velocidade de relógio para a função delay */

#define CLEAR_LCD 0b00000001
#define LINE1 0b10000000 
#define LINE2 0b11000000


/*definição geral de que o botao de EMERGENCIA é o PORTBbits.RB0*/
#define BOT_EMERGENCIA PORTBbits.RB0
/*definição geral de que o botao de MENU é o PORTBbits.RB1*/
#define BOT_MENU PORTBbits.RB1 
/*definição geral de que o botao de SELECT é o PORTBbits.RB2*/
#define BOT_SELECT PORTBbits.RB2
/*definição geral de que o botao de INCREMENTAR é o PORTBbits.RB5*/
#define BOT_UP PORTBbits.RB5
/*definição geral de que o botao de DECREMENTAR é o PORTBbits.RB4*/
#define BOT_DOWN PORTBbits.RB4
/*definição global da variável TEMPERATURA desejada*/
volatile int temperatura_desejada = 850;
/*definição global da variável TEMPERATURA real do sensor de temperatura*/
volatile int temperatura_real = 550;
/*definição global da variável ERRO_TEMPERATURA para verificar se a res tem ou nao de trabalhar*/
volatile int erro_temperatura;
/*definição global da variável TIME_desejado*/
volatile int time_desejado = 30;
/*definição global da variável TIME que falta*/
volatile int time_real = 30;
/*definição global da variável ERRO_TEMPO para verificar se a res ainda trablha ou nao */
volatile int erro_tempo;
/*definição global da variável menu*/
volatile unsigned char menu_var = 0;
/*definição global da variável emergencia*/
volatile unsigned char emergencia_var = 0;
/*variaveis para o menu*/
volatile unsigned char menu_tmp = 1, menu_act = 0;
/*variavel para a eusart*/
volatile unsigned char teste;
/*variavel para a eusart*/
volatile unsigned char eusart_var = 0;
/*variavel para a up_eusart*/
volatile unsigned char up_eusart = 0;
volatile unsigned char eusart_Aux = 1;
/*variavel para inicializar a o programa atraves da eusart*/
volatile unsigned char iniciar = 0;
/*variavel para verificar se a temperatura está entre 600 e 850 graus*/
volatile unsigned char verifica_temp = 0;
/*variavel para o alarme de quando o tempo chegar ao fim (time_real == 0)*/
volatile unsigned char time_off_alarme = 0;
/*variavel para o alarme no LCD de quando o tempo chegar ao fim (time_real == 0)*/
volatile unsigned char verifica_LCD = 0;
/*variavel para verificar o que imprimir no LCD*/
volatile unsigned char cnt_menu = 0;
volatile unsigned char estado = 0;
volatile unsigned char lastEstado = 1;
/*variavel para saber o valor de pwm*/
volatile unsigned char valor_pwm = 0;
/*variavel para o alarme de temperatura fora da gama*/
volatile unsigned char time_2s = 0;
volatile unsigned char clk250ms = 0, clk500ms = 0, clk1s = 0, clk2s = 0;
;

char tmp_str[21];

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

