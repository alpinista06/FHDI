/*
 * blink.c
 *
 *  Created on: 9 de abr de 2019
 *      Author: mario
 */

#include "blink.h"
#include "main.h"


void blink_led(void){

	uint32_t estado = 0;

	estado = HAL_GPIO_ReadPin(PUSH_BUTTON_GPIO_Port, PUSH_BUTTON_Pin);


	if(estado == 1){

		estado = 1;
		HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, SET);
		HAL_Delay(1000);
		HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, RESET);
		HAL_Delay(2000);
		}else{

			estado = 0;
			HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, SET);
			HAL_Delay(250);
			HAL_GPIO_WritePin(LED_GPIO_Port, LED_Pin, RESET);
			HAL_Delay(500);
		}


}
