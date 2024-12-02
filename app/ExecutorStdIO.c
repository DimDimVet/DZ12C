#include "ExecutorStdIO.h"

#define NoFreeArr 0
#define YesFreeArr 1

#define digital 1
#define symvol 0

#define SIZECHAR 10

int *arr;

void startTaskNoDynamic(int count)
{
	int size;
	printf("\nIn size Arr: ");
	int result = scanf("%d", &size);

	if (result == digital)
	{
		if (size == 0)
		{
			startTaskNoDynamic(0);
		}
	}
	else if (result == symvol)
	{
		startTaskNoDynamic(0);
	}

	arr = initArr(size);

	manualFullArr(arr, size);
	consolePrint(arr, size);

	freeArr(arr, size);
	consolePrint(arr, size);

}

int* initArr(int count)
{
	int *tempArr[count];
	return *tempArr;
}

void manualFullArr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("In item Arr: ");
		scanf("%d", &arr[i]);
	}
}

void freeArr(int *arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = 0;
	}
}

void consolePrint(int *arr, int count)
{
	printf("\n");

	for (int i = 0; i < count; i++)
	{
		printf(">> %d\t", arr[i]);
	}
}
