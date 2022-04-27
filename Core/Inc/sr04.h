/*
 * sr04.h
 *
 *  Created on: Apr 25, 2022
 *      Author: ADMIN
 */

#ifndef INC_SR04_H_
#define INC_SR04_H_


#define HCSR04_UNITS  3
#include "stm32f411xe.h"
#include "stm32f4xx.h"


typedef struct
{
	GPIO_TypeDef * SR04_TRIGGER_GPIO;
	uint16_t       SR04_TRIGGER_Pin;
	GPIO_TypeDef * SR04_ECHO_GPIO;
	uint16_t       SR04_ECHO_Pin;
}HCSR04_CfgType;


extern float distance[HCSR04_UNITS];
float GetDistance(int index);



#endif /* INC_SR04_H_ */
