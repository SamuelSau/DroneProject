/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2024 STMicroelectronics.
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

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define MOTOR_1_PWM_Pin GPIO_PIN_0
#define MOTOR_1_PWM_GPIO_Port GPIOA
#define MOTOR_2_PWM_Pin GPIO_PIN_1
#define MOTOR_2_PWM_GPIO_Port GPIOA
#define MOTOR_3_PWM_Pin GPIO_PIN_2
#define MOTOR_3_PWM_GPIO_Port GPIOA
#define MOTOR_4_PWM_Pin GPIO_PIN_3
#define MOTOR_4_PWM_GPIO_Port GPIOA
#define BATTERY_VOLTAGE_SENSOR_ADC1_IN6_Pin GPIO_PIN_6
#define BATTERY_VOLTAGE_SENSOR_ADC1_IN6_GPIO_Port GPIOA
#define BATTERY_CURRENT_SENSOR_ADC2_IN7_Pin GPIO_PIN_7
#define BATTERY_CURRENT_SENSOR_ADC2_IN7_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define IMU_I2C_SCL_Pin GPIO_PIN_8
#define IMU_I2C_SCL_GPIO_Port GPIOB
#define IMU_IC2_SDA_Pin GPIO_PIN_9
#define IMU_IC2_SDA_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
