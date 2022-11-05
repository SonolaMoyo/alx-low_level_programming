#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring
 * @needle: Pointer to string target
 * @haystack: Pointer to string
 * Return: Pointer to begining of location or NUll
 */

char *_strstr(char *haystack, char *needle)
{
	unsigned int i, k, n;
	char *p = '\0';

	n = 0;

	for (k = 0; needle[k] != '\0'; k++)
	{
	}

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (n == k)
		{
			p = &haystack[i - n];
			return (p);
		}
		else if (haystack[i] == needle[n] && n < k)
		{
			n = n + 1;
		} else
			n = 0;
	}
	return (p);
}
