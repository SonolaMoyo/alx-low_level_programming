#include "main.h"

/**
 * print_diagonal - Function
 * @n: Int
 */
void print_diagonal(int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar(92);
				break;
			}
			_putchar(32);
		}
		_putchar(10);
	}
	if (n <= 0)
		_putchar(10);
}
