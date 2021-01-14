#include <stdio.h>
#include <stdlib.h>

void ordertab(int tab[], int firstValue, int nextValue)
{
	int save;
	
	save = tab[firstValue];
	tab[firstValue] = tab[nextValue];
	tab[nextValue] = save;
	printf("%d et %d",firstValue,nextValue);
	firstValue = 0;
	nextValue = 1;
	
}
