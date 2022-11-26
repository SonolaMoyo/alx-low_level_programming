#include <stdio.h>
#include <stdlib.h>


/**
 * main - prints the opcodes of its own main function.
 * @argc: Number of arguments - should be two
 * @argv: 1 - amount of opcodes to print
 * Return: opcodes of its own main function
 */

int main(int argc, char *argv[])
{
	char *p = (char *)main;
	int n, i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	n = atoi(argv[1]);

	if (n < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < n; i++)
	{
		printf("%02hhx", p[i]);

		if (i == n - 1)
		{
			break;
		}
		printf(" ");
	}

	printf("\n");
	return (0);
}
