/* 
 * File:   Temperaturas.c
 * Author: santi
 *
 * Created on 31 de agosto de 2019, 11:07
 */

#include <p24FJ128GA010.h>   // Header específico de un micro

//******************************************************************************
#define FOSC 32000000        // Frecuencia del clock del micro
#define FCY FOSC/2          // Frecuencia de instrucciones usada por  "__delay_ms()"
//------------------------------------------------------------------------------
//  ARCHIVOS HEADER
//------------------------------------------------------------------------------

#include "LCD.h"

#include <libpic30.h>       // se necesita para "__delay_ms()"

//------------------------------------------------------------------------------
//   CONFIGURACION DE BITS
//------------------------------------------------------------------------------

_CONFIG1( JTAGEN_OFF        // deshabilito interface JTAG
        & GCP_OFF           // deshabilito proteción de código general
        & GWRP_OFF          // deshabilito protección escritura flash
        & ICS_PGx2         // ICSP interface (2=default)
        & FWDTEN_OFF)       // deshabilito watchdog timer
_CONFIG2( IESO_OFF          // deshabilito 2 velocidades de start up
        & FCKSM_CSDCMD      // deshabilito clock-swithcing/monitor
        & FNOSC_PRIPLL      // primary oscillator: habilito PLL
        & POSCMOD_XT)       // primary oscillator: modo XT

//------------------------------------------------------------------------------
//  Constantes de Programa
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//  Definición de Tipos de variable
//------------------------------------------------------------------------------
//------------------------------------------------------------------------------
//  Declaración de variables Globales
//------------------------------------------------------------------------------

//interrupciones
void __attribute__((interrupt, no_auto_psv))_ADC1Interrupt(){
}

//------------------------------------------------------------------------------
//  Prototipos de funciones
        void configini(void);
//------------------------------------------------------------------------------

void main(void) {
    
    while(1){
        
    }
   
}

//--------------------------------------------------------------------
//funciones
void configini(void){
    AD1CON1bits.ADON=1;
    AD1CON1bits.FORM=00;
    AD1CON1bits.ASAM=0;
    AD1CON1bits.DONE=0;
    AD1CON2bits.SMPI=0000;
    AD1CON3bits.ADCS=11111111;
    IFS0bits.AD1IF=0;
    }

//---------------------------------------------------