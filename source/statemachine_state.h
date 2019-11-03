/* Enums and structs */

typedef enum state
{
	WAIT,
	TEMP_READING,
	TEMP_ALERT,
	DISCONNECTED
} state;

typedef enum event
{
	TIMEOUT,
	COMPLETE,
	ALERT,
	DISCONNECT
} event;


void sms_Init();
void sms_ChangeState();
