/**
 * main.c
 *  Created on: 8 April 2022
 *  Author: Tahir_KAYA
 */

   #include "main.h"


    void v_t_initADC(){

     SysCtlPeripheralEnable(SYSCTL_PERIPH_ADC0);
     ADCHardwareOversampleConfigure(ADC0_BASE, 64);
     ADCSequenceDisable(ADC0_BASE, 0);
     ADCSequenceConfigure(ADC0_BASE, 0, ADC_TRIGGER_PROCESSOR, 0);


    }




    uint32_t v_t_readADC(int pin){



switch(pin){

case 0:
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH0);
    break;
case 1:
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH1);
    break;
case 2:
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH2);
    break;
case 3:
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH3);
    break;
case 4:
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH4);
    break;
case 5:
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH5);
    break;
case 6:
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH6);
    break;
case 7:
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH7);
    break;
case 8:
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH8);
    break;
case 9:
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH9);
    break;
case 10:
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH10);
    break;
case 11:
    ADCSequenceStepConfigure(ADC0_BASE, 0, 0, ADC_CTL_CH11);
    break;

default:
    break;
}



        ADCSequenceStepConfigure(ADC0_BASE, 0, 1,  ADC_CTL_IE | ADC_CTL_END);
        ADCSequenceEnable(ADC0_BASE, 0);
        ADCIntClear(ADC0_BASE, 0);
        ADCProcessorTrigger(ADC0_BASE, 0);
        while(!ADCIntStatus(ADC0_BASE, 0, false)) {}
        ADCSequenceDataGet(ADC0_BASE, 0, v_t_adcValues);

        v_t_adcValue=v_t_adcValues[0];


        return v_t_adcValue;


    }




