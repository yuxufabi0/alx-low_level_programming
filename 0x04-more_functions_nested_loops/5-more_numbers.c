#include "main.h"

/**
 * more_numbers - Prints from 0 to 14 x10
 *
 * Return - Always 0
 */

void	more_numbers(void);

void	more_numbers(void)
{
	int a;
	int b;

	i = 0;
	b = 0;
	while (a < 10)
	{
		b = 0;
		while (b < 14)
		{
			if (a > 9)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			a++;
		}
		_putchar('\n');
	}
}
