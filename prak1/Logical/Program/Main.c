
#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
	#include <AsDefault.h>
#endif

void _INIT ProgramInit(void)
{
	i = 0;
}

void _CYCLIC ProgramCyclic(void)
{
	led1 = !led1;
	if(i%2)
	{
		led2 = !led2;
	}
	if (i%4)
	{
		led3 = !led3;	
	}
	if (i % 8)
	{
		led4 = !led4;
	}
	i++;
}

void _EXIT ProgramExit(void)
{

}

