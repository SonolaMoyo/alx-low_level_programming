#include "main.h"

/**
 * print_number - Print
 * @n: Integer to print
 *
 */

void print_number(int n)
{
	int i, j;
	unsigned int n1;
	int z = 1;

	if (n < 0)
	{
		n = -1 * n;
		_putchar('-');
	}
	n1 = n;

	for (i = 0; n / 10 != 0; i++)
	{
		n = n / 10;
	}
	for (j = 0; j <= i - 1; j++)
	{
		z = z * 10;
	}

	for ( ; z != 0; )
	{
		_putchar((n1 / z) + '0');
		n1 = n1 % z;
		z = z / 10;
	}
}
