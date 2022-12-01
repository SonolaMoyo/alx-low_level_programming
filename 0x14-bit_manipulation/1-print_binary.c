#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: Decimal number
 */

void print_binary(unsigned long int n)
{
	unsigned long int i, j, k, k1;
	unsigned long int n_aux = n;
	char num = '0';

	if (n == 0)
		putchar('0');

	n_aux = n;

	for (k = 0; n_aux != 0; k++)
	{
		n_aux = n_aux >> 1;
	}
	k1 = k;
	for (j = 0; j < k1; j++)
	{
		n_aux = n;
		for (i = 0; i < k; i++)
		{
			num = (n_aux & 1) + '0';
			n_aux = n_aux >> 1;
		}
		putchar(num);
		num = '0';
		k--;
	}
}
