#include "main.h"

/**
 * more_numbers - Prints from 0 to 14 x10
 *
 * Return - Always 0
 */

void	more_numbers(void);

void	more_numbers(void)
{
	int i;

	i = 0;
	while (i < 14)
	{
		if (i > 9)
			_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		i++;
	}
	_putchar('\n');
}
