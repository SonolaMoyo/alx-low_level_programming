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

	printf("%ld, %ld", a, b);
	for (i = 0; i < 48; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
