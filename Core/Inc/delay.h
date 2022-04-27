/*
 * delay.h
 *
 *  Created on: Apr 25, 2022
 *      Author: ADMIN
 */

#ifndef INC_DELAY_H_
#define INC_DELAY_H_

#include "stm32f411xe.h"
#define usTIM	TIM9

void usDelay(uint32_t uSec);

#endif /* INC_DELAY_H_ */
