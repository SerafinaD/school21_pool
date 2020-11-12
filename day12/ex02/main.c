#include "ft_abs.h"
#include <stdio.h>

int main()
{
	int i = 5;
	int p = -20;

	printf("Orig: %d\nMacros: %d\n", i, ABS(i));
	printf("Orig: %d\nMacros: %d\n", p, ABS(p));
}