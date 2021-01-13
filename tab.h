#include <stdio.h>
#include <stdlib.h>

void orderTabascending(int tab[], int tabSize)
{
	int save;
	int firstValue;
	int nextValue;

	firstValue = 0;
	nextValue = 1;
	save = 0;
	
	while ( firstValue < tabSize-1 && nextValue < tabSize )
	{
		if ( tab[firstValue] > tab[nextValue] )
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

void displaytab(int tab[] , int tabSize)
{
	int i;

	i = 0;
	while ( i < tabSize )
	{
		printf("\n%d\n",tab[i]);
		i++;
	}
}
