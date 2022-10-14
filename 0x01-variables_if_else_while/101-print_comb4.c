#include <stdio.h>

/**
* main- Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int j;
	int k;
	int n;
	int m;

	n = 1;
	m = 2;

	for (i = 0; i <= 9; i++)
	{
		m = i + 2;
		for (j = n; j <= 9; j++)
		{
			for (k = m; k <= 9; k++)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(k + '0');
				if ((i == 7) && (j == 8) && (k == 9))
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
