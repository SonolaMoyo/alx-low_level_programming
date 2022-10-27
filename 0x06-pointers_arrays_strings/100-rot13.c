#include "main.h"

/**
 * rot13 - Rot13
 * @a: Array
 * Return: Rot13
 */

char *rot13(char *a)
{
	int j, i;
	char b1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; b1[j] != '\0'; j++)
		{
			if (a[i] == b1[j])
			{
				a[i] = b2[j];
				break;
			}
		}
	}


	return (a);
}
