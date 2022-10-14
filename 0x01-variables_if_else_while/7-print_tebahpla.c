#include <stdio.h>

/**
* main- Entry point
* Return: Always 0 (Success)
*/

int main(void)
{

	char Letters[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 25; i >= 0; i--)
	{
		putchar(Letters[i]);
	}

	putchar('\n');

	return (0);
}
