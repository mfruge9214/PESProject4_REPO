/* Includes */
#include "MKL25Z4.h"


/* Defines */

#define I2C_ENABLE_MASK		0x80
#define I2C_INT_ENABLE_MASK	0x40
#define I2C_MASTER_MODE_SELECT_MASK	0x20


#define I2C0_PORT	GPIOB
#define I2C0_SCL_PIN	0U
#define I2C0_SDA_PIN	1U

#define I2C0_EN()	(I2C0->C1 |= I2C_ENABLE_MASK)

void i2c0_Init();
