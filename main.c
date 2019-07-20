#include"micro_config.h"
#include"interrupt.h"
#include "PLL.h"

void SystemInit(){}
	
int  main()
{
     interrupt_init();
	   EnableInterrupts();
	while(1)
	{
	}
}