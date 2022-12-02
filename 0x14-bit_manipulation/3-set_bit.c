#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to number to be change
 * @index: index is the index, starting from 0 of the bit you want to set
 * Return: 1 if it worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i, n_aux = 1;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	for (i = 0; i < index; i++)
		n_aux = n_aux << 1;

	*n = *n | n_aux;

	return (1);
}
