#include <stdlib.h>
#include <stdio.h>

int _strlen(char *s);

/**
 * string_nconcat - Function that concatenates two strings
 * @s1: first string to concat
 * @s2: second string to concat
 * @n: byte length of second string to concat
 * Return: return memory address
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int strlen1, strlen2, i;
	char *p = NULL;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	strlen1 = _strlen(s1);
	strlen2 = _strlen(s2);
	if (n > strlen2)
		n = strlen2;

	p = malloc(sizeof(char) * (strlen1 + n + 1));

	if (p == NULL)
		return (NULL);

	/* concantenate the strings together now */
	for (i = 0; i < strlen1 + n; i++)
	{
		if (i < strlen1)
			p[i] = s1[i];
		else
			p[i] = s2[i - strlen1];
	}
	p[i] = '\0';

	return (p);
}


/**
 * _strlen - Calculate the length of a string
 * @s: Pointer to string
 * Return: length of string
*/

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	return (i);
}
