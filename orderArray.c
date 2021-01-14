#include <stdio.h>
#include <stdlib.h>

void ordertab(int* tab1, int* tab2)
{
	int save;

	save = *tab1;
	*tab1 = *tab2;
	*tab2  = save;
}
