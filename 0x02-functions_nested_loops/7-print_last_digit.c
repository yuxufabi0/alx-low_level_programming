#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @int: Takes an integer
 *
 * Return: int
 */

int	print_last_digit(int);

int	print_last_digit(int num)
{
	if (num < 0)
		num *= -1;
	return (num % 10);
}
