#include <stdio.h>

/**
* main- Entry point
* Return: Always 0 (Success)
*/

int main(void)
{
	int i;
	int j;
	int n;

	n = 1;

	for (i = 0; i <= 99; i++)
	{
		for (j = n; j <= 99; j++)
		{
			putchar((i / 10) + '0');
			putchar(i % 10 + '0');
			putchar(' ');
			putchar((j / 10) % 10 + '0');
			putchar(j % 10 + '0');
			if ((i == 98) && (j == 99))
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
		n++;
	}
	putchar('\n');
	return (0);
}
