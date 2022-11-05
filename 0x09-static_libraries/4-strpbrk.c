#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: Pointer to string
 * @accept: Pointer to accept string
 * Return: Pointer to match
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (p);
			}
		}
	}
	p = '\0';
	return (p);
}
