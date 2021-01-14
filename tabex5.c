#include <stdio.h>
#include <stdlib.h>
#include "tab.h"

void ordertabdescending(int tab[] , int tabSize)
{
	int firstValue;
	int nextValue;
	
	firstValue = 0;
	nextValue = 1;
	
	while ( firstValue < tabSize - 1  && nextValue < tabSize )
	{
		if ( tab[firstValue] < tab[nextValue] )
		{
			int save;
			
			save = tab[firstValue];
			tab[firstValue] = tab[nextValue];
			tab[nextValue] = save;
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
	int tab[8] = {1,2,7,3,4,5,6,7};
	
	ordertabdescending(tab,8);
	displaytab(tab,8);
}
