#include <stdio.h>

#define TASK 2//1,2

#if TASK==1
#include "ExecutorStdLib.h"

#elif TASK==2
#include "ExecutorStdIO.h"

#endif

int main()
{
	printf("Executor DZ12");

#if TASK==1
	startTaskDynamic(0);
#elif TASK==2
	startTaskNoDynamic(0);
#endif

	printf("\nStop DZ12");
}
