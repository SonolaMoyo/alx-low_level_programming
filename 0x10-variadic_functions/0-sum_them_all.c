#include "variadic_functions.h"

/**
 * sum_them_all - Sum numbers
 * @n: amount of number to print
 * Return: sum of numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list number;

	va_start(number, n);

	for (i = 0; i < n; i++)
		sum += va_arg(number, int);

	va_end(number);

	return (sum);
}
