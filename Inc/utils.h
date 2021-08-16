#ifndef __UTILS_H
#define __UTILS_H

#define TRUE 1
#define FALSE 0

typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;
//typedef unsigned int uint32_t;

//typedef char int8_t;
typedef short int int16_t;
//typedef int int32_t;

uint8_t checksum(const uint8_t* buff);
void LED_Switch(uint8_t* s, unsigned int* value, uint16_t PM2_5);


#endif //__UTILS_H
