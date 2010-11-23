/* 
* Configuration of module Os (Os_Cfg.c)
* 
* Created by: 
* Configured for (MCU): Undefined MCU
* 
* Module vendor:  ArcCore
* Module version: 2.0.11
* 
* 
* Generated by Arctic Studio (http://arccore.com)
*           on Tue Sep 28 14:22:25 CEST 2010
*/

	

#include <stdlib.h>
#include <stdint.h>
#include "Platform_Types.h"
#include "Os.h"				// includes Os_Cfg.h
#include "os_config_macros.h"
#include "kernel.h"
#include "kernel_offset.h"
#include "alist_i.h"
#include "Mcu.h"

extern void dec_exception( void );

// Set the os tick frequency
OsTickType OsTickFreq = 1000;


// ###############################    DEBUG OUTPUT     #############################
uint32 os_dbg_mask = 0;
 


// #################################    COUNTERS     ###############################
GEN_COUNTER_HEAD {
};

CounterType Os_Arc_OsTickCounter = -1;

// ##################################    ALARMS     ################################

GEN_ALARM_HEAD {
};

// ################################    RESOURCES     ###############################
GEN_RESOURCE_HEAD {
};

// ##############################    STACKS (TASKS)     ############################
DECLARE_STACK(OsIdle,OS_OSIDLE_STACK_SIZE);
DECLARE_STACK(btask_l_non,2048);
DECLARE_STACK(etask_m_full,2048);

// ##################################    TASKS     #################################
GEN_TASK_HEAD {
	GEN_ETASK(	OsIdle,
				0,
				FULL,
				TRUE,
				NULL,
				0 
	),
	GEN_BTASK(
		btask_l_non,
		3,
		NON,
		FALSE,
		NULL,
		0,
		1
	),
				
	GEN_ETASK(
		etask_m_full,
		4,
		FULL,
		TRUE,
		NULL,
		0
	),
		
				
};

// ##################################    HOOKS     #################################
GEN_HOOKS( 
	StartupHook, 
	NULL, 
	ShutdownHook, 
	ErrorHook,
	PreTaskHook, 
	PostTaskHook 
);

// ##################################    ISRS     ##################################


// ############################    SCHEDULE TABLES     #############################

// Table heads
GEN_SCHTBL_HEAD {
};

GEN_PCB_LIST()

uint8_t os_interrupt_stack[OS_INTERRUPT_STACK_SIZE] __attribute__ ((aligned (0x10)));

GEN_IRQ_VECTOR_TABLE_HEAD {};
GEN_IRQ_ISR_TYPE_TABLE_HEAD {};
GEN_IRQ_PRIORITY_TABLE_HEAD {};

#include "os_config_funcs.h"