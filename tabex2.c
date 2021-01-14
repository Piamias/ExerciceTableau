#include <stdio.h>
#include <stdlib.h>

void displaytabexo2(int tab[], int tabSize)
{
	int i;
	int b;

	b = 0;
	i = 0;
	while ( i < tabSize )		
	{
		if ( !b && tab[i] > 5 )
		{
			printf("\n%d", tab[i]);
			b++;
			i++;
		}
		else
		{	
		if ( i++, tab[i] > 5 )
		{
			printf(",%d", tab[i]);
		}
		else
		{
			i++;
		}
		}
	}
}

int main()
{
	int tab[8] = {1,2,7,3,4,5,6,7};

	displaytabexo2(tab, 8);
	return 0;
}
