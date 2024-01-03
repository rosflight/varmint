/**
 ******************************************************************************
 * File     : CubeMx.h
 * Date     : Oct 5, 2023
 ******************************************************************************
 *
 * Copyright (c) 2023, AeroVironment, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1.Redistributions of source code must retain the above copyright notice, this
 * list of conditions and the following disclaimer.
 *
 * 2.Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3.Neither the name of the copyright holder nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 **/

#ifndef CUBEMX_H_
#define CUBEMX_H_

// My defines used by CubeMX

#define SERVO_PWM_CLK_DIV  				(200-1)   // 200MHz/200 = 1Hz or 1us per count
#define SERVO_PWM_PERIOD   				(20000)   // For 1MHz/50 = 50Hz
#define SERVO_PWM_CENTER    			(1500)   // 1us * 1500 = 1500 us

// CubeMX Defines:
#define J000_JETSON_32KHZ_CLK_Pin GPIO_PIN_14
#define J000_JETSON_32KHZ_CLK_GPIO_Port GPIOC
#define J000_JETSON_SYNC_Pin GPIO_PIN_13
#define J000_JETSON_SYNC_GPIO_Port GPIOC
#define J000_JETSON_SYNC_EXTI_IRQn EXTI15_10_IRQn
#define IMU0_SPI4_SCK_Pin GPIO_PIN_2
#define IMU0_SPI4_SCK_GPIO_Port GPIOE
#define PITOT_I2C1_SDA_Pin GPIO_PIN_9
#define PITOT_I2C1_SDA_GPIO_Port GPIOB
#define GPS_UART1_RX_Pin GPIO_PIN_7
#define GPS_UART1_RX_GPIO_Port GPIOB
#define BARO_SPI3_MISO_Pin GPIO_PIN_4
#define BARO_SPI3_MISO_GPIO_Port GPIOB
#define BARO_SPI3_SCK_Pin GPIO_PIN_3
#define BARO_SPI3_SCK_GPIO_Port GPIOB
#define IMU1_ACCEL_DRDY_Pin GPIO_PIN_15
#define IMU1_ACCEL_DRDY_GPIO_Port GPIOA
#define IMU1_ACCEL_DRDY_EXTI_IRQn EXTI15_10_IRQn
#define J101_DEBUG_SWCLK_Pin GPIO_PIN_14
#define J101_DEBUG_SWCLK_GPIO_Port GPIOA
#define J101_DEBUG_SWDIO_Pin GPIO_PIN_13
#define J101_DEBUG_SWDIO_GPIO_Port GPIOA
#define TP4_Pin GPIO_PIN_15
#define TP4_GPIO_Port GPIOC
#define J105_2_SPI4_EXT_CS_Pin GPIO_PIN_3
#define J105_2_SPI4_EXT_CS_GPIO_Port GPIOE
#define IMU0_DRDY_Pin GPIO_PIN_8
#define IMU0_DRDY_GPIO_Port GPIOB
#define IMU0_DRDY_EXTI_IRQn EXTI9_5_IRQn
#define PITOT_I2C1_SCL_Pin GPIO_PIN_6
#define PITOT_I2C1_SCL_GPIO_Port GPIOB
#define J103_1_TELEM_UART2_TX_Pin GPIO_PIN_5
#define J103_1_TELEM_UART2_TX_GPIO_Port GPIOD
#define J102_SDMMC1_CMD_Pin GPIO_PIN_2
#define J102_SDMMC1_CMD_GPIO_Port GPIOD
#define J102_SDMMC1_D3_Pin GPIO_PIN_11
#define J102_SDMMC1_D3_GPIO_Port GPIOC
#define J102_SDMMC1_D2_Pin GPIO_PIN_10
#define J102_SDMMC1_D2_GPIO_Port GPIOC
#define J000_JETSON_USB_P_Pin GPIO_PIN_12
#define J000_JETSON_USB_P_GPIO_Port GPIOA
#define EXT_OSC_Pin GPIO_PIN_0
#define EXT_OSC_GPIO_Port GPIOH
#define IMU0_SPI4_CS_Pin GPIO_PIN_4
#define IMU0_SPI4_CS_GPIO_Port GPIOE
#define BARO_CS_Pin GPIO_PIN_1
#define BARO_CS_GPIO_Port GPIOE
#define J106_PWM10_Pin GPIO_PIN_5
#define J106_PWM10_GPIO_Port GPIOB
#define J103_1_TELEM_UART2_RX_Pin GPIO_PIN_6
#define J103_1_TELEM_UART2_RX_GPIO_Port GPIOD
#define J103_1_TELEM_UART2_CTS_Pin GPIO_PIN_3
#define J103_1_TELEM_UART2_CTS_GPIO_Port GPIOD
#define J102_SDMMC1_CK_Pin GPIO_PIN_12
#define J102_SDMMC1_CK_GPIO_Port GPIOC
#define GPS_UART1_TX_Pin GPIO_PIN_9
#define GPS_UART1_TX_GPIO_Port GPIOA
#define J000_JETSON_USB_N_Pin GPIO_PIN_11
#define J000_JETSON_USB_N_GPIO_Port GPIOA
#define J105_2_SPI4_EXT_RST_Pin GPIO_PIN_1
#define J105_2_SPI4_EXT_RST_GPIO_Port GPIOH
#define J000_JETSON_DRDY_Pin GPIO_PIN_5
#define J000_JETSON_DRDY_GPIO_Port GPIOE
#define MAG_DRDY_Pin GPIO_PIN_0
#define MAG_DRDY_GPIO_Port GPIOE
#define MAG_DRDY_EXTI_IRQn EXTI0_IRQn
#define IMU1_SPI1_MOSI_Pin GPIO_PIN_7
#define IMU1_SPI1_MOSI_GPIO_Port GPIOD
#define J103_1_TELEM_UART2_RTS_Pin GPIO_PIN_4
#define J103_1_TELEM_UART2_RTS_GPIO_Port GPIOD
#define J105_4_CAN1_RX_Pin GPIO_PIN_0
#define J105_4_CAN1_RX_GPIO_Port GPIOD
#define J106_PWM01_Pin GPIO_PIN_8
#define J106_PWM01_GPIO_Port GPIOA
#define J106_PWM03_Pin GPIO_PIN_10
#define J106_PWM03_GPIO_Port GPIOA
#define MAG_SPI2_MISO_Pin GPIO_PIN_2
#define MAG_SPI2_MISO_GPIO_Port GPIOC
#define IMU0_SPI4_MOSI_Pin GPIO_PIN_6
#define IMU0_SPI4_MOSI_GPIO_Port GPIOE
#define J105_4_CAN1_TX_Pin GPIO_PIN_1
#define J105_4_CAN1_TX_GPIO_Port GPIOD
#define J102_SDMMC1_D1_Pin GPIO_PIN_9
#define J102_SDMMC1_D1_GPIO_Port GPIOC
#define TP6_Pin GPIO_PIN_7
#define TP6_GPIO_Port GPIOC
#define ADC_5V0_Pin GPIO_PIN_0
#define ADC_5V0_GPIO_Port GPIOC
#define ADC_IBATT_Pin GPIO_PIN_1
#define ADC_IBATT_GPIO_Port GPIOC
#define MAG_SPI2_MOSI_Pin GPIO_PIN_3
#define MAG_SPI2_MOSI_GPIO_Port GPIOC
#define J102_SDMMC1_D0_Pin GPIO_PIN_8
#define J102_SDMMC1_D0_GPIO_Port GPIOC
#define J106_PWM09_Pin GPIO_PIN_6
#define J106_PWM09_GPIO_Port GPIOC
#define ADC_VBAT_Pin GPIO_PIN_0
#define ADC_VBAT_GPIO_Port GPIOA
#define IMU1_SPI1_CS_ACCEL_Pin GPIO_PIN_4
#define IMU1_SPI1_CS_ACCEL_GPIO_Port GPIOA
#define ADC_3V3_Pin GPIO_PIN_4
#define ADC_3V3_GPIO_Port GPIOC
#define BARO_SPI3_MOSI_Pin GPIO_PIN_2
#define BARO_SPI3_MOSI_GPIO_Port GPIOB
#define J105_2_DRDY_Pin GPIO_PIN_10
#define J105_2_DRDY_GPIO_Port GPIOE
#define J105_2_DRDY_EXTI_IRQn EXTI15_10_IRQn
#define J106_PWM04_Pin GPIO_PIN_14
#define J106_PWM04_GPIO_Port GPIOE
#define J106_PWM08_Pin GPIO_PIN_15
#define J106_PWM08_GPIO_Port GPIOD
#define BARO_DRDY_Pin GPIO_PIN_11
#define BARO_DRDY_GPIO_Port GPIOD
#define BARO_DRDY_EXTI_IRQn EXTI15_10_IRQn
#define J105_2_SPI4_EXT_CLK_Pin GPIO_PIN_15
#define J105_2_SPI4_EXT_CLK_GPIO_Port GPIOB
#define IMU1_GYRO_DRDY_Pin GPIO_PIN_1
#define IMU1_GYRO_DRDY_GPIO_Port GPIOA
#define IMU1_GYRO_DRDY_EXTI_IRQn EXTI1_IRQn
#define IMU1_SPI1_SCK_Pin GPIO_PIN_5
#define IMU1_SPI1_SCK_GPIO_Port GPIOA
#define ADC_12V_Pin GPIO_PIN_5
#define ADC_12V_GPIO_Port GPIOC
#define LED_RED_Pin GPIO_PIN_7
#define LED_RED_GPIO_Port GPIOE
#define J106_PWM02_Pin GPIO_PIN_11
#define J106_PWM02_GPIO_Port GPIOE
#define LED_GRN_Pin GPIO_PIN_15
#define LED_GRN_GPIO_Port GPIOE
#define J106_PWM05_Pin GPIO_PIN_14
#define J106_PWM05_GPIO_Port GPIOD
#define IMU1_SPI1_CS_GYRO_Pin GPIO_PIN_10
#define IMU1_SPI1_CS_GYRO_GPIO_Port GPIOD
#define IMU0_EXT_CLK_Pin GPIO_PIN_14
#define IMU0_EXT_CLK_GPIO_Port GPIOB
#define J105_3_SYNC_IN_Pin GPIO_PIN_2
#define J105_3_SYNC_IN_GPIO_Port GPIOA
#define J105_3_SYNC_IN_EXTI_IRQn EXTI2_IRQn
#define IMU1_SPI1_MISO_Pin GPIO_PIN_6
#define IMU1_SPI1_MISO_GPIO_Port GPIOA
#define TP5_Pin GPIO_PIN_0
#define TP5_GPIO_Port GPIOB
#define LED_BLU_Pin GPIO_PIN_8
#define LED_BLU_GPIO_Port GPIOE
#define IMU0_RST_Pin GPIO_PIN_12
#define IMU0_RST_GPIO_Port GPIOE
#define J105_1_I2C2_SCL_Pin GPIO_PIN_10
#define J105_1_I2C2_SCL_GPIO_Port GPIOB
#define MAG_SPI2_SCK_Pin GPIO_PIN_13
#define MAG_SPI2_SCK_GPIO_Port GPIOB
#define J103_2_RC_UART3_RX_Pin GPIO_PIN_9
#define J103_2_RC_UART3_RX_GPIO_Port GPIOD
#define J106_PWM06_Pin GPIO_PIN_13
#define J106_PWM06_GPIO_Port GPIOD
#define GPS_1PPS_Pin GPIO_PIN_3
#define GPS_1PPS_GPIO_Port GPIOA
#define GPS_1PPS_EXTI_IRQn EXTI3_IRQn
#define ADC_VSERVO_Pin GPIO_PIN_7
#define ADC_VSERVO_GPIO_Port GPIOA
#define J105_3_SYNC_OUT_Pin GPIO_PIN_1
#define J105_3_SYNC_OUT_GPIO_Port GPIOB
#define PITOT_DRDY_Pin GPIO_PIN_9
#define PITOT_DRDY_GPIO_Port GPIOE
#define PITOT_DRDY_EXTI_IRQn EXTI9_5_IRQn
#define IMU0_SPI4_MISO_Pin GPIO_PIN_13
#define IMU0_SPI4_MISO_GPIO_Port GPIOE
#define J105_1_I2C2_SDA_Pin GPIO_PIN_11
#define J105_1_I2C2_SDA_GPIO_Port GPIOB
#define MAG_CS_Pin GPIO_PIN_12
#define MAG_CS_GPIO_Port GPIOB
#define J103_2_RC_UART3_TX_Pin GPIO_PIN_8
#define J103_2_RC_UART3_TX_GPIO_Port GPIOD
#define J106_PWM07_Pin GPIO_PIN_12
#define J106_PWM07_GPIO_Port GPIOD

#ifdef __cplusplus
extern "C" {
#endif

#include <stm32h7xx_hal.h>

void SystemClock_Config(void);
void PeriphCommonClock_Config(void);
void MPU_Initialize(void);
void MPU_Config(void);

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);
void Error_Handler(void);
void SystemClock_Config(void);
void PeriphCommonClock_Config(void);
void MPU_Config(void);
void MX_GPIO_Init(void);
void MX_DMA_Init(void);
void MX_BDMA_Init(void);
void MX_I2C1_Init(void);
void MX_I2C2_Init(void);
void MX_SPI1_Init(void);
void MX_SPI3_Init(void);
void MX_TIM3_Init(void);
void MX_TIM4_Init(void);
void MX_USART1_UART_Init(void);
void MX_USART2_UART_Init(void);
void MX_USART3_UART_Init(void);
void MX_FDCAN1_Init(void);
void MX_SPI4_Init(void);
void MX_TIM1_Init(void);
void MX_TIM12_Init(void);
void MX_ADC1_Init(void);
void MX_RTC_Init(void);
void MX_TIM7_Init(void);
void MX_TIM5_Init(void);
void MX_SDMMC1_SD_Init(void);
void MX_ADC3_Init(void);
void MX_SPI2_Init(void);
void MX_RNG_Init(void);
void MX_TIM8_Init(void);
void MX_CRC_Init(void);

#ifdef __cplusplus
}
#endif

#endif /* CUBEMX_H_ */
