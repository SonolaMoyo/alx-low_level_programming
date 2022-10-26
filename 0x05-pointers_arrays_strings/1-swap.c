#include "main.h"
/**
 * swap_int - Function
 * @a: Pointer
 * @b: Pointer
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;

	*a = *b;
	*b = c;
}
