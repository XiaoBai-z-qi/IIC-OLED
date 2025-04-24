#ifndef __OLED_DRIVER_H__
#define __OLED_DRIVER_H__
#include "main.h"
#include "i2c.h"

void OLED_Init(void);
void OLED_Clear(void);
void OLED_Updata(void);
void OLED_DrawPoint(int16_t X, int16_t Y);
void OLED_DrawLine(int16_t X0, int16_t Y0, int16_t X1, int16_t Y1);
#endif
