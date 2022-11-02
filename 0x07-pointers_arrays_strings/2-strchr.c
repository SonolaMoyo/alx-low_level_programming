#include "main.h"

/**
 * _strchr - Search character in a string
 * @s: Pointer to string
 * @c: Character to search
 * Return: Pointer s
 */

char *_strchr(char *s, char c)
{
	unsigned int i;
	char *p;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			p = &s[i];
			return (p);
		}
	}
	if (c == '\0')
	{
		p = &s[i];
		return (p);
	}
	return ('\0');
}
