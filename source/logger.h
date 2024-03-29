/*
 * File: logger.h
 * Description: This file defines macros and function prototypes for logger
 * Authors: Mike Fruge and Mark Hinkle
 */

#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

/* Create Logging Structures */
/* Created in preparation for later assignments */

#define BUF_SIZE	50

#ifdef BOARD
#include "fsl_debug_console.h"
#define printf	PRINTF
#endif


typedef enum ModuleID
{
	INIT,
	MAIN,
	MEMORY_TEST,
	LED_CONTROL,
	STATE_MACHINE,
	TEMP_SENSOR
}ModuleID;

typedef enum Priority_Lvl
{
	TEST,
	DEBUG,
	STATUS
}Priority_Lvl;





/***********************************************
 *
 * @brief	Initialize the global logger to its default state (disabled, WARNING, default buffer)
 *
 ***********************************************/
void logInit();

/***********************************************
 *
 * @brief	Enable Logger for printouts
 *
 ***********************************************/
void logEnable();

/***********************************************
 * @brief	Disable logger activity
 ***********************************************/
void logDisable();

/***********************************************
 * @brief	Check status of logger
 *
 * @return true if logger is enabled, false if not
 *
 ***********************************************/
bool logStatus();

/***********************************************
 * @brief	Prints out the address and values read from memory
 *
 * @param[in] loc	Pointer to base address to read from memory
 *
 * @param[in] len	Number of words to read from memory
 ***********************************************/
void logData(uint32_t* loc, size_t len);

/***********************************************
 * @brief	Read a segment of memory
 *
 * @param[in] loc	Base address to read memory from
 *
 * @param[in] len	Amount of bytes to read
 *
 * @returns Contents of memory location specified
 ***********************************************/
void logString(char* message);

/***********************************************
 * @brief	Read a segment of memory
 *
 * @param[in] loc	Base address to read memory from
 *
 * @param[in] len	Amount of bytes to read
 *
 * @returns Contents of memory location specified
 ***********************************************/
void logInteger();

