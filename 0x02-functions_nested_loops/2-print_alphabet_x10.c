#include "main.h"

/**
  *print_alphabet_x10 - print alphabet x 10
  *@void
  *
  */
void print_alphabet_x10(void)
{
	int i;
	int j;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(alp[i]);
		}
		_putchar('\n');
	}
}
