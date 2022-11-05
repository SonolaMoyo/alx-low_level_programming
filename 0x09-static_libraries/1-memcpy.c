#include "main.h"

/**
 * _memcpy - Copy memory area
 * @dest: Poiter to detination memory
 * @src: Pointer to source memory
 * @n: First n bytes to copy
 * Return: Pointer dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
