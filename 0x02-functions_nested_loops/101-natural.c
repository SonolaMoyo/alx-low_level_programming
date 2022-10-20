#include <stdio.h>

/**
 * main - entry point
 * Return: 0
 *
 */
int main(void)
{
	int s = 0;
	int t = 1024;
	int i;

	for (i = 0; i < t; i++)
		if (i % 3 == 0 || i % 5 == 0)
		{
			s = s + i;
		}
	printf("%d\n", s);
	return (0);
}
