#include <stdio.h>
#include <stdlib.h>

void orderArray(int array[], int firstValue, int nextValue)
{
	int save;

	save = array[firstValue];
	array[firstValue] = array[nextValue];
	array[nextValue] = save;
	firstValue = 0;
	nextValue = 0;		
}
