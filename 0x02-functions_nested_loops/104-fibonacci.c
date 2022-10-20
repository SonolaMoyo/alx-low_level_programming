#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i;
	unsigned long int a = 1;
	unsigned long int b = 2;
	unsigned long int c;
	unsigned long int a1, a2, b1, b2, c1, c2;

	printf("%ld, %ld", a, b);
	for (i = 0; i < 89; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
		a1 = a / 1000000000;
		a2 = a % 1000000000;
		b1 = b / 1000000000;
		b2 = b % 1000000000;

	for (i = 89; i < 96; i++)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;

		c1 = c1 + c2 / 1000000000;
		c2 = c2 % 1000000000;

		printf(", %ld%ld", c1, c2);

		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;
	}

	printf("\n");
	return (0);
}
