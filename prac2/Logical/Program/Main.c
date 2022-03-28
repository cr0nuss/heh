
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
	led1 = led[0];
	led2 = led[1];
	led3 = led[2];
	led4 = led[3];
}

void _EXIT ProgramExit(void)
{

}

