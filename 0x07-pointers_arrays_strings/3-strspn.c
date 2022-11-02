#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: Pointer to string
 * @accept: Pointer to accept string
 * Return: Length of accept string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, r;

	for (i = 0; s[i] != '\0'; i++)
	{
		r = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				r = 1;
				break;
			}
		}
		if (r != 1)
			break;
	}
	return (i);
}
