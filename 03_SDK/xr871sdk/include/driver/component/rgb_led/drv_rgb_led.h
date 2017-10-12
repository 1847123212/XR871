/*
 * Copyright (C) 2017 XRADIO TECHNOLOGY CO., LTD. All rights reserved.
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *    1. Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *    2. Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the
 *       distribution.
 *    3. Neither the name of XRADIO TECHNOLOGY CO., LTD. nor the names of
 *       its contributors may be used to endorse or promote products derived
 *       from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef __RGB_LED_H__
#define __RGB_LED_H__

#include "driver/component/component_def.h"
#include "driver/chip/hal_gpio.h"
#include "driver/chip/hal_pwm.h"

#ifdef __cplusplus
	 extern "C" {
#endif

#define  MaxBrightness uint32_t

typedef enum {
	RGB_HIGH_LEVEL_VALID,
	RGB_LOW_LEVEL_VALID,
}RGB_LED_TYPE;

typedef struct {
	RGB_LED_TYPE type;
	int	ledFrequency;
	PWM_CH_ID r_Led;
	PWM_CH_ID g_Led;
	PWM_CH_ID b_Led;
}Rgb_Led_Info;

typedef struct {
	uint32_t r_Value;
	uint32_t g_Value;
	uint32_t b_Value;
}Rgb_Led_Value;

MaxBrightness Drv_Rgb_Led_Cfg(Rgb_Led_Info *led_info);
void DRV_Rgb_Led_DeInit();
void Drv_Rgb_LedEnable();
void Drv_Rgb_LedDisable();
void Drv_Rgb_Led_Set(Rgb_Led_Value *set);

void RGB_LedTest();

#ifdef __cplusplus
	 }
#endif

#endif /* __RGB_LED_H__ */

