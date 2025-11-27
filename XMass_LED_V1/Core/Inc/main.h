/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
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
	extern int LED_Speed_Idx;
	extern int LED_Pattern_Row;
	extern int LED_Pattern_Col;

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/

/* USER CODE BEGIN Private defines */
#define TRUE 1
#define FALSE 0

#define LED_Speed_Idx_MAX 12
#define LED_Speed_Idx_Start 3
#define LED_Pattern_Row_MAX 7
#define LED_Pattern_Col_MAX 5

#define LED_Orange 1
#define LED_Red 2
#define LED_Blue 4
#define LED_Green 8

#define LED_Orange_PIN GPIO_PIN_13
#define LED_Red_PIN GPIO_PIN_14
#define LED_Blue_PIN GPIO_PIN_15
#define LED_Green_PIN GPIO_PIN_12

#define LED_Speed_Up_PIN GPIO_PIN_11
#define LED_Speed_Down_PIN GPIO_PIN_9
#define LED_Prg_Next_PIN GPIO_PIN_6
#define LED_Prg_Prev_PIN GPIO_PIN_8
#define LED_OnOff_Toggle_PIN GPIO_PIN_15
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
