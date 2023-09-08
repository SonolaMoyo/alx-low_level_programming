#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements
 * @size: Size of element
 * Return: returns pointer to the allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *p = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(sizeof(char) * (size * nmemb));
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = '\0';
	}
	return (p);
}
