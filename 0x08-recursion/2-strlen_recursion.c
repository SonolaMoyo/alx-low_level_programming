#include "main.h"
#include <string.h>

/**
* _strlen_recursion - prints the length of a string in a recursive manner
* @s: string to operate on
* Return: length of string
*/

int _strlen_recursion(char *s)
{
	int i = 0;
	int n;

	if (s[i] != '\0')
	{
		n = _strlen_recursion(&s[i + 1]);
	} else
	return (0);

	return (n + 1);
}
