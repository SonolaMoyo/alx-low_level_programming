#include "main.h"

/**
 * reverse_array- Reverse array of integers
 * @a: Array
 * @n: number of elements
 *
 */

void reverse_array(int *a, int n)
{
	int c, i;

	for (i = 0; i < n / 2; i++)
	{
		c = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = c;
	}
}
