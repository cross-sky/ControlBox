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
#define AirOutTemperMax110 1100		//110��
#define AirOutTemperMax100 1000		//110��
#define EnvirTemper5		50		//5��

typedef enum{
	ADC01_WIN,		//��ˮ�¶�
	ADC02_WOUT,		//��ˮ�¶�
	ADC03_WBANK,	//ˮ���¶�
	ADC04_SolarWin,		//̫���ܽ�ˮ�¶�
	ADC05_SolarWOUT,	//̫���ܳ�ˮ�¶�
	ADC06_WLevel,	//ˮλ
	ADC07_INTER,	//�ڲ��¶�
	ADCMAX,			//���ֵ
	ADC_USED,
	ADC_UNUSED
}ADCENUM;


void vADCSimpling(void);
ptrState BspAdc_getPtrStateAdc(void);
void vADCsetSingleInputFlag(uint16_t flag);
void vADCInit(void);

void vADCDmaChannel1_ISR(void);

#endif

