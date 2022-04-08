/**
 * main.c
 *  Created on: 8 April 2022
 *  Author: Tahir_KAYA
 */

/*
 *   v_t_adcVal= v_t_readADC(i); //i=AIN number
 *
 *
 * */


#ifndef TAHIR_ADC_H_
#define TAHIR_ADC_H_


void v_t_initADC(void);
uint32_t v_t_readADC(int deger);


uint32_t v_t_adcValues[2];
uint32_t v_t_adcValue;


#endif /* TAHIR_ADC_H_ */
