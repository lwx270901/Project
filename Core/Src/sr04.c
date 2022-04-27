/*
 * sr04.c
 *
 *  Created on: Apr 25, 2022
 *      Author: ADMIN
 */


#include "sr04.h"
#include "delay.h"
#include "sr04_cfg.h"


const float speedOfSound = 0.0343/2;
uint32_t numTicks = 0;
float distance[HCSR04_UNITS]={0, 0};
float GetDistance(int index)
{
	HAL_GPIO_WritePin(HCSR04_CfgParam[index].SR04_TRIGGER_GPIO, HCSR04_CfgParam[index].SR04_TRIGGER_Pin, GPIO_PIN_RESET);
	usDelay(3);

		  		//*** START Ultrasonic measure routine ***//
		  		//1. Output 10 usec TRIG
	HAL_GPIO_WritePin(HCSR04_CfgParam[index].SR04_TRIGGER_GPIO, HCSR04_CfgParam[index].SR04_TRIGGER_Pin, GPIO_PIN_SET);
	usDelay(10);
	HAL_GPIO_WritePin(HCSR04_CfgParam[index].SR04_TRIGGER_GPIO, HCSR04_CfgParam[index].SR04_TRIGGER_Pin, GPIO_PIN_RESET);

		  		//2. Wait for ECHO pin rising edge
		  		while(HAL_GPIO_ReadPin(HCSR04_CfgParam[index].SR04_ECHO_GPIO, HCSR04_CfgParam[index].SR04_ECHO_Pin) == GPIO_PIN_RESET);

		  		//3. Start measuring ECHO pulse width in usec
		  		numTicks = 0;
		  		while(HAL_GPIO_ReadPin(HCSR04_CfgParam[index].SR04_ECHO_GPIO, HCSR04_CfgParam[index].SR04_ECHO_Pin) == GPIO_PIN_SET)
		  		{
		  			numTicks++;
		  			usDelay(2); //2.8usec
		  		};

		  		//4. Estimate distance in cm
		  		distance[index] = (numTicks + 0.0f)*2.8*speedOfSound;
		  		return distance[index];
}
