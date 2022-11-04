#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - adds positive numbers
 * @argv: argv
 * @argc: argc
 * Return: 1 if fail else 0;
 */
int main(int argc, char *argv[])
{
	int s = 0;
	int i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (isdigit(argv[i][j]) == 0)
			{
				printf("Error\n");
				return (1);
			}
		}
	s += atoi(argv[i]);
	}

	printf("%d\n", s);

	return (0);
}
