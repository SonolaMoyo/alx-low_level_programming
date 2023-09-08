#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - allocates memory for an array and fill with zero
 * @nmemb: number of elements of the array
 * @size: size of the elementes in the array
 * Return: Pointer to address of new space
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = NULL;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(char) * (size * nmemb));

	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size * nmemb; i++)
	{
		p[i] = '\0';
	}

	return (p);
}
