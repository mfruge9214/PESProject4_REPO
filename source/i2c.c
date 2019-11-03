#include "i2c.h"



/* Globals */

void i2c0_Init()
{
	/* Route clock to I2C1 */
	SIM->SCGC4 |= SIM_SCGC4_I2C1_MASK;





	/* Enable values in Control Register */
	I2C0->C1 |= (I2C_ENABLE_MASK | I2C_INT_ENABLE_MASK | I2C_MASTER_MODE_SELECT_MASK);
}
