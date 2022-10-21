#include <stdio.h>

/**
 * main - main function
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;
	int j;
	long int n = 612852475143;
	long int f = 0;

	for (j = 0; j <= n; j++)
	{
		for (i = 2; i <= n; i++)
		{
			if (n % i == 0)
			{
				n = n / i;
				if (i >= f)
					f = i;
				break;
			}
		}
	}
	printf("%ld", f);
	printf("\n");
	return (0);
}
