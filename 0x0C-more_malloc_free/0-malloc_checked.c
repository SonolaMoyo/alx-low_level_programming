#include <stdlib.h>

/**
 * malloc_checked - Creates malloc with necessary memory size
 * @b - size of malloc
 * Return: Pointer to address of new space
*/

void *malloc_checked(unsigned int b)
{
	int *p = NULL;

	p = malloc(b);

	if(p == NULL)
	{
		exit(98);
	}

	return (p);
}