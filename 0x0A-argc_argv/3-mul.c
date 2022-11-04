#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers.
 * @argv: argv
 * @argc: argc
 * Return: 1 if fail else 0;
 */
int main(int argc, char *argv[])
{
	int m;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	m = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", m);

	return (0);
}
