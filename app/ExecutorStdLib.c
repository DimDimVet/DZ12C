#include "ExecutorStdLib.h"

#define NoFreeArr 0
#define YesFreeArr 1

int *arrDinamic;

void startTaskDynamic(int count)
{
	count++;

	char *str = malloc(1 * (sizeof(char)));
	printf("\nWrite decimal numbers or press->N (free arr) \n");

	scanf("\n%s", str);
	int result = strcmp(str, "N") & strcmp(str, "n");

	if (result)
	{
		int search = strtol(str, NULL, 10);
		printf("press -> %d\n", search);
		executorDynamic(search, count, NoFreeArr);
		startTaskDynamic(count);
	}
	else
	{
		executorDynamic(0, count, YesFreeArr);
	}
}

void executorDynamic(int search, int count, int isFreeArr)
{
	printf("\n");

	if (!isFreeArr)
	{
		if (arrDinamic == NULL)
		{
			arrDinamic = malloc(count * sizeof(int));
			arrDinamic[count - 1] = search;
		}
		else
		{
			arrDinamic = realloc(arrDinamic, count * sizeof(int));
			arrDinamic[count - 1] = search;
		};

		consoleWrite(arrDinamic, count);
	}
	else
	{
		free(arrDinamic);

		consoleWrite(arrDinamic, count);
	}
}

void consoleWrite(int *arr, int count)
{
	printf("\n");

	for (int i = 0; i < count; i++)
	{
		printf(">> %d\t", arr[i]);
	}
}
