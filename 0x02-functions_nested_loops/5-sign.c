#include "main.h"

/**
 * int print_sign - Checks the sign of a number
 * @n: Takes an integer
 *
 * Return: int
 */

int	print_sign(int n);

int	print_sign(int n)
{
	char sign;
	if (n > 0)
	{
		_putchar('+');
		sign = 1;
	}
	if (n == 0)
	{
		_putchar('0');
		sign = 0;
	}
	if (n < 0)
	{
		_putchar('-');
		sign = -1;
	}
	return (sign)
}
