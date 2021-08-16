#include "utils.h"


uint8_t checksum(const uint8_t* buff)
{
	uint16_t l_checksum = 0;
	for(uint8_t idx = 0; idx < 30; ++idx)
	{
		l_checksum += buff[idx];
	}
	if(l_checksum == ((buff[30] << 8) | buff[31]))
		return 1;

	return 0;
}

void LED_Switch(uint8_t* s, unsigned int* value, uint16_t PM2_5)
{
	switch(*s)
	{
	case 0:
		if(PM2_5 > 0 && PM2_5 <= 5)
		{
			*value = 0x00000100;
		}
		if(PM2_5 > 5 && PM2_5 <= 10)
		{
			*value = 0x00000300;
		}
		if(PM2_5 > 10 && PM2_5 <= 15)
		{
			*value = 0x00000700;
		}
		if(PM2_5 > 15 && PM2_5 <= 20)
		{
			*value = 0x00000F00;
		}
		if(PM2_5 > 20 && PM2_5 <= 25)
		{
			*value = 0x00001F00;
		}
		if(PM2_5 > 25 && PM2_5 <= 30)
		{
			*value = 0x00003F00;
		}
		if(PM2_5 > 30 && PM2_5 <= 35)
		{
			*value = 0x00007F00;
		}
		if(PM2_5 > 35)
		{
			*value = 0x0000FF00;
		}

		*s = 1;
		break;
	case 1:

		break;
	default:
		break;
	}
}
