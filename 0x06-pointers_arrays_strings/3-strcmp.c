#include "main.h"

/**
 * _strcmp - Compares
 * @s1: pointer first string
 * @s2: pointer second string
 * Return: compare
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; (s1[i] == s2[i]) && s1[i] != '\0' && s2[i] != '\0'; i++)
	{
	}

	return (s1[i] - s2[i]);

}
