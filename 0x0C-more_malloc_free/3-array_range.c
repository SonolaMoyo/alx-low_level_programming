#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - creates an array of integers
 * @min: first number to be created
 * @max: last number to be created
 * Return: Pointer to address of new space
 */

int *array_range(int min, int max)
{
	int *p = NULL;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(int) * (max - min + 1));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		p[i - min] = i;
	}

	return (p);
}