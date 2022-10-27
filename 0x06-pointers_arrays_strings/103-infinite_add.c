#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Print Buffer
 * @b: buffer
 * @size: size
 */

void print_buffer(char *b, int size)
{
	int i, j, k;
	int a = 0;

	for (i = 0; i < size; i = i + 10)
	{
		printf("%08x: ", a);
		for (j = a; j < a + 10; j = j + 2)
		{
			if (j < (size - 1))
				printf("%02x%02x ", b[j], b[j + 1]);
			else if (j < size)
				printf("%02x   ", b[j]);
			else
				printf("     ");

		}
		for (k = a; k < a + 10; k++)
		{
			if (k < size)
			{
				if (b[k] >= 32)
					printf("%c", b[k]);
				else
					printf(".");
			}
		}
		a = a + 10;
		printf("\n");
	}
	if (size <= 0)
	{
		printf("\n");
	}
}
