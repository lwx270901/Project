/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define PWMLEFT_Pin GPIO_PIN_0
#define PWMLEFT_GPIO_Port GPIOA
#define ECHO2_Pin GPIO_PIN_4
#define ECHO2_GPIO_Port GPIOA
#define TRIG2_Pin GPIO_PIN_5
#define TRIG2_GPIO_Port GPIOA
#define ARIGHT_Pin GPIO_PIN_6
#define ARIGHT_GPIO_Port GPIOA
#define BRIGHT_Pin GPIO_PIN_7
#define BRIGHT_GPIO_Port GPIOA
#define LEFTCONG_Pin GPIO_PIN_0
#define LEFTCONG_GPIO_Port GPIOB
#define LEFTTRU_Pin GPIO_PIN_1
#define LEFTTRU_GPIO_Port GPIOB
#define IR_Pin GPIO_PIN_12
#define IR_GPIO_Port GPIOB
#define RIGHTCONG_Pin GPIO_PIN_14
#define RIGHTCONG_GPIO_Port GPIOB
#define RIGHTTRU_Pin GPIO_PIN_15
#define RIGHTTRU_GPIO_Port GPIOB
#define ALEFT_Pin GPIO_PIN_8
#define ALEFT_GPIO_Port GPIOA
#define BLEFT_Pin GPIO_PIN_9
#define BLEFT_GPIO_Port GPIOA
#define ECHO_Pin GPIO_PIN_10
#define ECHO_GPIO_Port GPIOA
#define TRIG_Pin GPIO_PIN_11
#define TRIG_GPIO_Port GPIOA
#define ECHO1_Pin GPIO_PIN_14
#define ECHO1_GPIO_Port GPIOA
#define TRIG1_Pin GPIO_PIN_15
#define TRIG1_GPIO_Port GPIOA
#define PWMRIGHT_Pin GPIO_PIN_6
#define PWMRIGHT_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
