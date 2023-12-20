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
	if (n > 0)
	{
		return (1);
		_putchar('+');
	}
	if (n == 0)
	{
		return (0);
		_putchar('0');
	}
	if (n < 0)
	{
		return (-1);
		_putchar('-1');
	}
}
