#include "main.h"

/**
 * puts_half - Function
 * @str: Pointer
 *
 */
void puts_half(char *str)
{
	int i;
	int j;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	for (j = (i + 1) / 2; j < i; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
