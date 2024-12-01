#include "ExecutorStdIO.h"

#define NoFreeArr 0
#define YesFreeArr 1

#define digital -1
#define symvol 1

#define SIZECHAR 10

void startTaskNoDynamic(int count)
{
	//int arr[10];

	/*int size;
	 printf("In size Arr: ");
	 scanf("%d", &size);

	 if (size == 0)
	 {
	 startTaskNoDynamic(0);
	 }
	 printf("Size Arr jr");
	 //int arr[size];

	 //char str[SIZECHAR];*/
	int size;
	printf("In size Arr: ");
	scanf("%d", &size);
	printf("->%d\n", size);
	if (size == 0)
	{
		startTaskNoDynamic(0);
	}
	int arr[size];

	printf("In item Arr: ");
	scanf("%d", &arr[0]);
	printf("->%d\n", arr[0]);
//
	/*char str[SIZECHAR];
	int ch;
	int i = 0;
	int t = SIZECHAR;

	while ((ch = getchar()) != EOF)
	{
		if (ch != '\n')
		{
			str[i] = ch;
			//printf("char1 -> %d\n", (int) str[i] - 48);
		}
		else
		{
			for (int x = 0; x < t; x++)
			{
				str[i + x] = '\0';
				//printf("char2 -> %d\n", (int) str[i + x]);
			}
			break;
		}

		i++;
		t--;
		if (i >= SIZECHAR)
		{
			break;
		}
	}
	//
	int sizeStr = 0;
	for (int i = 0; i < SIZECHAR; i++)
	{
		if ((str != NULL) && (str[i] != '\0'))
		{
			sizeStr++;
		}
	}
	printf("char3 ->%d %s\n", sizeStr, str);
	arr[0] = 0;

	int temp = sizeStr;
	for (int i = 0; i < temp; i++)
	{
		if (sizeStr != 1)
		{
			arr[0] += ((int) str[i] - 48) * pow(10, sizeStr - 1);
		}
		else
		{
			printf("int1 ->%d\n", ((int) str[i] - 48));
			arr[0] += ((int) str[i] - 48);
		}

		sizeStr--;
	}
	printf("int ->%d\n", arr[0]);*/

//for (int i = 0; i < size; i++)
//{
//scanf("%s", str);

	/*count++;
	 char str[SIZE];
	 int ch;
	 int i = 0;

	 while ((ch = getchar()) != EOF)
	 {
	 if (ch != '\n')
	 {
	 str[i] = ch;
	 //printf("char1 -> %d\n", (int) str[i]-48);
	 }
	 else
	 {
	 for (int x = 0; x < (SIZE - i); x++)
	 {
	 str[i + x] = '\0';
	 //printf("char2 -> %d\n", (int) str[i + x]);
	 }
	 break;
	 }

	 i++;

	 if (i >= SIZE)
	 {
	 break;
	 }
	 }

	 int result = strcmp(str, "N") & strcmp(str, "n");

	 if (result == digital)
	 {

	 for (int d = 0; d < SIZE; d++)
	 {
	 printf("char -> %d\n", (int) str[d]-48);
	 }
	 printf("str -> %s\n", str);
	 arr[count - 1] = 1;
	 //int search = strtol(str, NULL, 10);
	 //printf("press -> %d %d %d\n", arr[0], arr[1], arr[2]);
	 //executorDynamic(search, count, NoFreeArr);
	 startTaskNoDynamic(count);
	 }
	 else if (result == symvol)
	 {
	 //printf("%d|\n", size);
	 startTaskNoDynamic(count);
	 }
	 else
	 {
	 //executorDynamic(0, count, YesFreeArr);
	 }
	 //}*/

//}
}
