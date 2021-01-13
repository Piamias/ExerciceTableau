#include <stdio.h>
#include <stdlib.h>
#include "tab.h"

void ordertabascending(int tab[], int tabSize);
void displaytab(int tab[], int tabSize);

int  main()
{
	int tab[8] = {1,2,7,3,4,5,6,7};
	
	ordertabascending(tab,8);
	displaytab(tab,8);
}
