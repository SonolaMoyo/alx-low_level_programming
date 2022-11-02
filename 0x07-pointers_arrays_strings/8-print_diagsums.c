#include "main.h"
#include <stdio.h>

/**
 *  print_diagsums- prints the sum of the two diagonals
 * @a: Pointer array/Vector
 * @size: Size of square matrix
 */

void print_diagsums(int *a, int size)
{
	int i, j;
	int n1 = 0;
	int n2 = 0;

	for (i = 0; i < size * size; i++)
	{
		if (i % (size + 1) == 0)
			n1 = n1 + a[i];
	}
	for (j = size; j < size * size - 1; j = j + size - 1)
	{
		n2 = n2 + a[j - 1];
	}
	printf("%d, %d\n", n1, n2);
}
