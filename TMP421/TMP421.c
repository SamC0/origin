#include "TMP421.h"
#include "delay.h"

void TMP421_init()
{
	W_I2C(0x54,0x9,0x4);
	W_I2C(0x54,0x21,0x3);
	W_I2C(0x54,0x0b,0x07);
}

