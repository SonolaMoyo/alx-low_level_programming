#include "main.h"

/**
  *print_last_digit - last digit
  *@n: First operand
  *Return: last digit
  */
int print_last_digit(int n)
{
	int n1;

	if (n > 0 || n == 0)
	{
		_putchar(n % 10 + '0');
		return (n % 10);
	}
	n1 = -1 * (n % 10);
	_putchar(n1 + '0');
	return (n1);
}
