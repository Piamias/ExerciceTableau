#include <stdio.h>
#include <stdlib.h>

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

int  main()
{
	int tab[8] = {1,2,7,3,4,5,6,7};
	
	displaytabexo1(tab, 8);
	return 0;
}

