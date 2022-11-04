#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to make change
 * @argv: argv
 * @argc: argc
 * Return: 1 if error.
 */
int main(int argc, char *argv[])
{
	int m = 0;
	int c = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	m  = atoi(argv[1]);

	for (; m > 0;)
	{
		if (m >= 25)
		{
			m -= 25;
			c++;
		} else if (m >= 10)
		{
			m -= 10;
			c++;
		} else if (m >= 5)
		{
			m -= 5;
			c++;
		} else if (m >= 2)
		{
			m -= 2;
			c++;
		} else if (m >= 1)
		{
			m -= 1;
			c++;
		}

	}
	printf("%d\n", c);

	return (0);
}
