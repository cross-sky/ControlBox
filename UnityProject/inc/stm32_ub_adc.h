#ifndef __STM32_UB_ADC_H
#define __STM32_UB_ADC_H
//#include "StateType.h"

typedef struct  IOControl
{
	uint8_t 		name;
	uint16_t		pin;
	GPIO_TypeDef*	port;
	uint32_t		clk;
}IOControl;

#define ADC_NeedRunCount	5
#define AirOutTemperMax110 1100		//110度
#define AirOutTemperMax100 1000		//110度
#define EnvirTemper5		50		//5度

typedef enum{
	ADC01_WIN,		//回水温度
	ADC02_WOUT,		//出水温度
	ADC03_WBANK,	//水箱温度
	ADC04_SolarWin,		//太阳能进水温度
	ADC05_SolarWOUT,	//太阳能出水温度
	ADC06_WLevel,	//水位
	ADC07_INTER,	//内部温度
	ADCMAX,			//最大值
	ADC_USED,
	ADC_UNUSED
}ADCENUM;


void vADCSimpling(void);
ptrState BspAdc_getPtrStateAdc(void);
void vADCsetSingleInputFlag(uint16_t flag);
void vADCInit(void);

void vADCDmaChannel1_ISR(void);

#endif

