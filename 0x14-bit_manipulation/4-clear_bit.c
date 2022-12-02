#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: number to be modify
 * @index: index of bit to change
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, n_aux = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	for (i = 0; i < index; i++)
	{
		n_aux = n_aux << 1;
	}

	if (*n > (*n ^ n_aux))
		*n = *n ^ n_aux;

	return (1);
}
