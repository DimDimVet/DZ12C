#include <stdio.h>
#include <string.h>
#include <math.h>

#ifndef INC_EXECUTORSTDIO_H_
#define INC_EXECUTORSTDIO_H_

void startTaskNoDynamic(int count);
void consolePrint(int *arr, int count);
int* initArr(int count);
void manualFullArr(int *arr, int size);
void freeArr(int *arr, int size);

#endif
