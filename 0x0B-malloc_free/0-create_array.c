#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and initializes it with a char
 * @size: Size of array
 * @c: initialization char
 * Return: Pointer to array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p = NULL;

	p = malloc(sizeof(char) * size);

	if (p == NULL || size == 0)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}

	return (p);
}
