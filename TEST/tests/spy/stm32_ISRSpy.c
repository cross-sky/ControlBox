#include "stm32_ISRSpy.h"

void vADCDmaChannel1_ISR(void)
{
	vADCsetSingleInputFlag(STATE_DATA_DONE);
}

void adcStartSimpling(void)
{

}

