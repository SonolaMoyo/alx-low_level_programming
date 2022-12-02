#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: number
 * @index: The index
 * Return: value of a bit at a given index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int j;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	for (j = 0; j < index; j++)
		n = n >> 1;

	return (n & 1);
}
