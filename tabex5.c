#include <stdio.h>
#include <stdlib.h>
#include "tab.h"

void ordertabdescending(int tab[], int tabSize)
{
	int firstValue;
	int nextValue;
	
	firstValue = 0;
	nextValue = 1;
	while (firstValue < tabSize - 1 && nextValue < tabSize)
	{
		if (tab[firstValue] < tab[nextValue])
		{
			ordertab(&tab[firstValue], &tab[nextValue]);
			firstValue = 0;
			nextValue = 1;
		}
		else
		{
			firstValue++;
			nextValue++;
		}
	}
}

int  main()
{
	int tab[8] = {9, 4, 6, 8, 2, 9, 7, 1};
	
	ordertabdescending(tab, 8);
	displaytab(tab, 8);
}
