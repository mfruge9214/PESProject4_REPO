#include "statemachine_state.h"
#include "i2c.h"


/* Globals */
static state currState;
static uint8_t tempReadCount;



void sms_Init()
{
	currState = TEMP_READING;
	tempReadCount = 0;
}

state getNextState(uint32_t flag)
{
	switch(currState)
	{
		case WAIT:

			break;
		case TEMP_READING:

			break;
		case TEMP_ALERT:

			break;
		case DISCONNECTED:

			break;
	}
}


void sms_ChangeState(uint32_t flag)
{

}
