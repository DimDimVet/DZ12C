#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NoFreeArr 0
#define YesFreeArr 1

void startTaskDynamic(int count);
void executorDynamic(int search, int count, int isFreeArr);
void consoleWrite(int *arr, int count);

int *arrDinamic;

int main()
{
	printf("Executor DZ12");
	startTaskDynamic(0);
	printf("\nStop DZ12");
}

void startTaskDynamic(int count)
{
	count++;

	char *str = malloc(1 * (sizeof(char)));
	printf("\nWrite decimal numbers or press->N (free arr) \n");

	scanf("\n%s", str);
	int result = strcmp(str, "N");
	result = strcmp(str, "n");

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
