#include <stdio.h>
#include <stdlib.h>
#include "tab.h"

void ordertabascending(int tab[] , int tabSize)
{
	int firstValue;
	int nextValue;

	firstValue = 0;
	nextValue = 1;
	
	while ( firstValue < tabSize-1 && nextValue < tabSize )
	{
		if ( tab[firstValue] > tab[nextValue] )
		{	
			ordertab(tab, firstValue, nextValue);		
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
	int tab[8] = {1,2,7,3,4,5,6,7};
	
	ordertabascending(tab,8);
	displaytab(tab,8);
}
