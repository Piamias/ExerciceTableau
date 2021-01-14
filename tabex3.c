#include <stdio.h>
#include <stdlib.h>

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

int  main()
{
	int tab[8] = {1,2,7,3,4,5,6,7};

	displaytabexo3(tab,8);
	return 0;
}

