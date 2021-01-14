#include <stdio.h>
#include <stdlib.h>
#include "tab.h"

void displaytab(int tab[], int tabSize);
/*{
	int i;

	i = 0;
	while ( i < tabSize )		
	{
		printf("tab [%d] = %d\n",i ,tab[i]);
		i++;
	}
}
*/
void ordertabdescending(int tab[] , int tabSize)
{
	int save;
	int firstValue;
	int nextValue;

	firstValue = 0;
	nextValue = 1;
	
	while ( firstValue < tabSize-1 && nextValue < tabSize )
	{
		if ( tab[firstValue] < tab[nextValue] )
		{	
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
