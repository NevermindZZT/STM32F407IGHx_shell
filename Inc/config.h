#ifndef     __CONFIG_H__
#define     __CONFIG_H__

#include    "stm32f4xx_hal.h"

#include    "main.h"
#include    "gpio.h"
#include    "usart.h"

#include    "shell.h"


//#define     DEBUG

#ifdef      DEBUG
    #define logWithLocation(x)      printf("file:%s,line:%d:%s\r\n", __FILE__, __LINE__, x)
    #define log(...)                printf(__VA_ARGS__)
#else
    #define logWithLocation(x)
    #define log(...)
#endif
    
#endif
