/*
* Configuration of module: Pwm (Pwm_Cfg.c)
*
* Created by:              
* Copyright:               
*
* Configured for (MCU):    HCS12
*
* Module vendor:           ArcCore
* Generator version:       2.0.1
*
* Generated by Arctic Studio (http://arccore.com) 
*/


#include "Pwm.h"

const Pwm_ConfigType PwmConfig =
{
		.channels = { 		
			{
				.channel =  GreenLED,
				DUTY_AND_PERIOD(4096,188.0),
				.centerAlign =  STD_OFF,
				.polarity = POLARITY_NORMAL,
				.scaledClockEnable = STD_ON,
				.idleState = PWM_LOW,
				.class = PWM_VARIABLE_PERIOD
			},
		},
		.busPrescalerA = PRESCALER_128,
		.busPrescalerB = PRESCALER_2,
		.prescalerA = 1,
		.prescalerB = 1,
};
