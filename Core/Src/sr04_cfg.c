/*
 * sr04_cfg.c
 *
 *  Created on: Apr 25, 2022
 *      Author: ADMIN
 */



#include "sr04_cfg.h"
#include "main.h"
const HCSR04_CfgType HCSR04_CfgParam[HCSR04_UNITS] =
{
	// HC-SR04 Sensor Unit 1 Configurations
    {
    	TRIG_GPIO_Port,
		TRIG_Pin,
		ECHO_GPIO_Port,
		ECHO_Pin
	},
	// HC-SR04 Sensor Unit 2 Configurations
	{
			GPIOB,
			GPIO_PIN_5,
			GPIOB,
			GPIO_PIN_4
	},
	// HC-SR04 Sensor Unit 2 Configurations
	{
			GPIOB,
			GPIO_PIN_15,
			GPIOB,
			GPIO_PIN_14
	}
};
