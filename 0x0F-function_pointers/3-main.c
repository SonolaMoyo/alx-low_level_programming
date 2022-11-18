#include "3-calc.h"

/**
 * main - performs simple operations. '+' '*' '/' '%'
 * @argc: number of arguments
 * @argv: 1 -> first number, 2 -> operator, 3 -> second Number
 * Return: Result of simple operation
 */

int main(int argc, char *argv[])
{
	int n, n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	if (n2 == 0 && (*argv[2] == '/' || *argv[2] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	n = get_op_func(argv[2])(n1, n2);

	printf("%d\n", n);

	return (0);
}
