#include "main.h"

/**
 * flip_bits - number of bits to flip to get from one number to another
 * @n: First number
 * @m: Second number
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0, xor = 0;

	xor = n ^ m;
	for (; xor != 0;)
	{
		if ((1 & xor) == 1)
		{
			count++;
		}

		xor = xor >> 1;
	}

	return (count);
}
