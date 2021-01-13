#include <stdio.h>
#include <stdlib.h>

void ordertabascending(int tab[] , int tabSize)
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

void ordertabdescending(int tab[] , int tabSize)
{
	int save;
	int firstValue;
	int nextValue;

	firstValue = 0;
	nextValue = 1;
	save = 0;
	
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

void displaytabexo1(int tab[], int tabSize)
{
	int i;

	i = 0;
	while ( i < tabSize )		
	{
		if ( tab[i] < 5 )	
		{
			printf("%d\n",tab[i]);
			i++;
		}
		else
		{
			i++;
		}
	}
}

void displaytabexo2(int tab[], int tabSize)
{
	int i;

	i = 0;
	while ( i < tabSize )		
	{
		if ( tab[i] > 5 && i == tabSize -1 )
		{
			printf("%d\n",tab[i]);
			i++;
		}
				
		else if ( tab[i] > 5 )	
		{
			printf("%d,",tab[i]);
			i++;
		}
		else
		{
			i++;
		}
	}
}

void displaytabexo3(int tab[], int tabSize)
{
	int i;
	int pairNumber;
	
	pairNumber = 0;
	i = 0;
	while ( i < tabSize)
	{
		if ( tab[i] % 2 == 0 )
		{
			pairNumber++;
					i++;
		}
		else
		{
			i++;
		}
	}		
	printf ("%d\n",pairNumber);
}

void displaytab(int tab[], int tabSize)
{
	int i;

	i = 0;
	while ( i < tabSize )		
	{
			printf("%d\n",tab[i]);
			i++;
	}
}

