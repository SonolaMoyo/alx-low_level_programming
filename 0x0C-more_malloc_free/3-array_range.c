#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - Creates an array of integers
 * @min: minimum integer
 * @max: maximum integer
 * Return: return pointer to an array of integers
 */

int *array_range(int min, int max)
{
	int *p = NULL;
	unsigned int i;

	if (min > max)
		return (NULL);
	unsigned int rangeOfInt = max - min + 1;

	p = malloc(sizeof(int) * rangeOfInt);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < rangeOfInt; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
