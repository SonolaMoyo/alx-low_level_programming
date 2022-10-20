#include "main.h"
#include <stdio.h>
/**
* print_to_98 - print
* @n: int
*/
void print_to_98(int n)
{
	int i;

	for (i = n;;)
	{
		if (i >= 0)
		{
			printf("%d", i);
		} else
		{
			printf("%d", i);
		}
		if (i == 98)
			break;
		printf(",");
		printf(" ");
		if (i > 97)
			i--;
		else if (i < 99)
			i++;
	}
	printf("\n");
}
