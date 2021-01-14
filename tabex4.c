#include <stdio.h>
#include <stdlib.h>
#include "tab.h"

void ordertabascending(int* tab, int tabSize)
{
	int firstValue;
	int nextValue;

	firstValue = 0;
	nextValue = 1;
	
	while (firstValue < tabSize-1 && nextValue < tabSize)
	{
		if (tab[firstValue] > tab[nextValue])
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
	int tab[8] = {9, 1, 1, 1, 2, 3, 8, 3};
	
	ordertabascending(tab/*pointeur vers tab[0]*/,8);
	displaytab(tab,8);
}
