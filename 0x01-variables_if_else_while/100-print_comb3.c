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

	n = '1';
	for (i = '0'; i <= '9'; i++)
	{
		for (j = n; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);
			if ((i == '8') && (j == '9'))
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
