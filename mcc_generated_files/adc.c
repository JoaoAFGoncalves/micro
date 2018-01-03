/**
  ADC Generated Driver File

  @Company
    Microchip Technology Inc.

  @File Name
    adc.c

  @Summary
    This is the generated driver implementation file for the ADC driver using PIC10 / PIC12 / PIC16 / PIC18 MCUs 

  @Description
    This source file provides implementations for driver APIs for ADC.
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

/**
  Section: Included Files
*/

#include <xc.h>
#include "adc.h"
#include "../Variaveis.h"


/**
  Section: ADC Module APIs
*/

void ADC_Initialize(void)
{
    // set the ADC to the options selected in the User Interface
    
    // GO_nDONE stop; ADON enabled; CHS AN0; 
    ADCON0 = 0x01;
    
    // TRIGSEL CCP5; NVCFG VSS; PVCFG VDD; 
    ADCON1 = 0x00;
    
    // ADFM right; ACQT 2; ADCS FOSC/8; 
    ADCON2 = 0x89;
    
    // ADRESL 0; 
    ADRESL = 0x00;
    
    // ADRESH 0; 
    ADRESH = 0x00;
    
    // Enabling ADC interrupt.
    PIE1bits.ADIE = 1;
}

void ADC_SelectChannel(adc_channel_t channel)
{
    // select the A/D channel
    ADCON0bits.CHS = channel;    
    // Turn on the ADC module
    ADCON0bits.ADON = 1;  
}

void ADC_StartConversion()
{
    // Start the conversion
    ADCON0bits.GO_nDONE = 1;
}


bool ADC_IsConversionDone()
{
    // Start the conversion
    return ((bool)(!ADCON0bits.GO_nDONE));
}

adc_result_t ADC_GetConversionResult(void)
{
    // Conversion finished, return the result
    return ((adc_result_t)((ADRESH << 8) + ADRESL));
}

adc_result_t ADC_GetConversion(adc_channel_t channel)
{
    // select the A/D channel
    ADCON0bits.CHS = channel;    

    // Turn on the ADC module
    ADCON0bits.ADON = 1;

    // Start the conversion
    ADCON0bits.GO_nDONE = 1;

    // Wait for the conversion to finish
    while (ADCON0bits.GO_nDONE)
    {
    }

    // Conversion finished, return the result
    return ((adc_result_t)((ADRESH << 8) + ADRESL));
}


void ADC_ISR(void)
{
    // Clear the ADC interrupt flag
    
    /*variaveis para ADC (valor recebido pelo adc)*/
    volatile int valor_adc;
    /*variaveis para ADC (valor da tensão para calcular a resistencia)*/
    float tensao_adc;
    /*variaveis para ADC (valor da resistencia do sensor)*/
    float resistencia_adc;
    float a, b, c;
    // Clear the ADC interrupt flag
    /*
     * valor convertido pelo adc
     */
    valor_adc = ADC_GetConversionResult();
    /*
     * tensao calculada atraves de atraves do valor que é dado pelo adc (5volts em 1024bits)
     * x=5/1024=0.0048828125
     */
    tensao_adc = valor_adc * 0.0048828125;
    /**
     *      LEI de OHM
     * resistencia calculada com a corrente que por ela passa (10mA)
     *  e a tensao que nela cai(tensao_adc)
     */
    resistencia_adc = (tensao_adc / 0.010);
    /*
     *FORMULA QUE RELACIONA A RESISTENCIA DO SENSOR COM A SUA TEMPERATURA
     * [RTD=RTD0*(1+T*a)] -> [T=(((RTD/RTD0)-1)/a)]
     * RTD->resistencia da RTD à temperatura T (ohms)
     * RTD0->resistencia da RTD à temperatura de 0º (ohms) -> corresponde a 100 
     * T-> temperatura da RTD 
     * a-> 0.00385 ?/?/°C
     * 
     * -> [T=(((resistencia_adc/100)-1)/0.00385)]
     * -> temperatura_real = (((resistencia_adc/100)-1)/0.00385);
     * -> temperatura_real = ((int) ((tensao_adc-1)/0.00385)); //formula simplificada
     * 
     */

    a = resistencia_adc / 100;
    b = a - 1;
    c = b / 0.00385;
    temperatura_real = c;
    
    PIR1bits.ADIF = 0;
}
/**
 End of File
*/