#include "main.h"

/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Return: Always 0
 */

void	print_numbers(void);

void	print_numbers(void)
{
	char num;

	num = 0;
	while (num <= '9')
	{
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
