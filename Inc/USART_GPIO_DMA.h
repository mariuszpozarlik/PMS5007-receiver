#ifndef __USART_GPIO_DMA_H
#define __USART_GPIO_DMA_H

#include "utils.h"

void USART_GPIO_Init(void);
void USART_DMA_Init(uint8_t* buff_address);
void TX_USART3(uint8_t* buff, uint8_t* frameFlag);



#endif //__USART_GPIO_DMA_H
