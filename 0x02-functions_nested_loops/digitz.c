#include <stdio.h>

/**
 * digitz - Prints integers
 * @num: Takes an int
 *
 * Return: Always 0
 */

void	digitz(long int);

void	digitz(long int num)
{
	if (num < 0)
	{
		putchar('-');
		num *= -1;
	}

	if (num / 10)
		digitz(num / 10);

	putchar(num % 10 + '0');
}
