#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 *
 */
int main(void)
{
	int i;
	long int a = 1;
	long int b = 2;
	long int c;
	long int cont = 2;

	for (i = 0; i < 48; i++)
	{
		c = a + b;
		if (c >= 4000000)
			break;
		a = b;
		b = c;
		if (c % 2 == 0)
		{
			cont = cont + c;
		}
	}
	printf("%ld\n", cont);
	return (0);
}
