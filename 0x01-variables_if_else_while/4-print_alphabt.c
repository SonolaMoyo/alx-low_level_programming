#include <stdio.h>

/**
* main- Entry point
* Return: Always 0 (Success)
*/

int main(void)
{

	char Letters[25] = "abcdfghijklmnoprstuvwxyz";
	int i;

	for (i = 0; i < 24; i++)
	{
		putchar(Letters[i]);
	}

	putchar('\n');

	return (0);
}
