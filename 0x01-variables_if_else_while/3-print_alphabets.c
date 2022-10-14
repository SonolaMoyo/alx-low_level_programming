#include <stdio.h>

/**
* main- Entry point
* Return: Always 0 (Success)
*/

int main(void)
{

	char Letters[53] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(Letters[i]);
	}

	putchar('\n');

	return (0);
}
