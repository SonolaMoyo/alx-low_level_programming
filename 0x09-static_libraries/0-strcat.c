#include "main.h"

/**
 * _strcat - Concatenates
 * @dest: pointer first string
 * @src: second string
 * Return: Concatenation
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (j = 0; dest[j] != '\0'; j++)
	{
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i + j] = src[i];
	}

	return (dest);

}
