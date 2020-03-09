/*
 * File:   main.c
 * Author: 19180037
 *
 * Created on 9 de Março de 2020, 10:11
 */


#include <xc.h>
#include "config.h"


// DEFINE
#define LED1       PORTDbits.RD0
#define LED2       PORTDbits.RD1
#define BT1        PORTDbits.RD2
#define BT2        PORTDbits.RD3
#define est_LED1   TRISDbits.TRISD0 
#define est_LED2   TRISDbits.TRISD1
#define est_BT1    TRISDbits.TRISD2
#define est_BT2    TRISDbits.TRISD3

void main(void) 
{
    LED1 = 0;
    LED2 = 0;
    est_LED1 = 0;
    est_LED2 = 0;
    est_BT1  = 1;
    est_BT2  = 1;
    
    if(BT1 && BT2 == 0)
    {
          LED1 = 1;
          __delay_ms(500);
          LED1 = 0;        
          __delay_ms(500);
          LED2 = 1;
          __delay_ms(500);
          LED2 = 0;        
          __delay_ms(500);        
              
    }
    
          if(BT1 && BT2 == 1);
          {
             LED1 = 1;
             __delay_ms(2000);
             LED1 = 0;        
             __delay_ms(2000);
             LED2 = 1;
             __delay_ms(2000);
             LED2 = 0;       
             __delay_ms(2000);        
              
         }
    
           if(BT1 == 1)
         {
                 LED1 = 1;
                __delay_ms(1000);
                LED1 = 0;        
                __delay_ms(1000);
                LED2 = 1;
                __delay_ms(1000);
                LED2 = 0;        
                __delay_ms(1000);
         }
    
        if(BT2 == 1)
    {
             LED1 = 1;
             __delay_ms(1000);
             LED1 = 0;        
             __delay_ms(1000);
             LED2 = 1;
             __delay_ms(1000);
             LED2 = 0;       
             __delay_ms(1000);
    }
    
        
            
    
    return;
}
