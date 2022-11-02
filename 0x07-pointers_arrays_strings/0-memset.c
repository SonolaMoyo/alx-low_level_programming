#include "main.h"

/**
 * _memset - Fills memory with constant
 * @s: Pointer to memory s to be fill
 * @b: Constant to fill memory
 * @n: First n bytes to fill
 * Return: Pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
