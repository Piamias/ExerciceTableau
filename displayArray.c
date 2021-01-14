#include <stdio.h>
#include <stdlib.h>

void displaytab(int tab[], int tabSize)
{
	int i;

	i = 0;
	while ( i < tabSize )		
	{
		printf("tab [%d] = %d\n",i ,tab[i]);
		i++;
	}
}

