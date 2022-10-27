#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @a: String
 * Return: a
 */

char *leet(char *a)
{
	int i, j;
	char b1[] = "aeotl";
	char b2[] = "AEOTL";
	char c[] = "43071";

	for (j = 0; a[j] != '\0'; j++)
	{
		for (i = 0; b1[i]  != '\0'; i++)
		{
			if ((a[j] == b1[i]) || (a[j] == b2[i]))
				a[j] = c[i];
		}
	}

	return (a);
}
