/**
 * main.c
 *  Created on: 8 April 2022
 *  Author: Tahir_KAYA
 */

#include "main.h"

uint16_t readAdcValues[10];

int main(void)
{

    v_t_initADC();

    while(1){

        int adcCounter;

        for(adcCounter=0;adcCounter<10;adcCounter++){

        readAdcValues[adcCounter]=  v_t_readADC(adcCounter); ///read adc values via tahir_adc library

         }




    }


}
