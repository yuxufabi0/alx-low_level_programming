#include "main.h"

/**
 * print_most_numbers - Prints the numbers from 0 to 9
 *
 * Return: Always 0
 */

void	print_most_numbers(void);

void	print_most_numbers(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		if (num == '2' || num == '4')
		{
			num++;
			continue;
		}
		_putchar(num);
		num++;
	}
	_putchar('\n');
}
