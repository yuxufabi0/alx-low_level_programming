#include "main.h"

/**
 * times_table - Prints the 9 times table.
 * digitz - Prints digits.
 *
 * Return: Always 0
 */

void	times_table(void);

void	times_table(void)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = a * b;
			if ((c <= 9) && c >= 0)
				_putchar(c + '0');
			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
				if (c < 10 && ((c + b) > 9))
					_putchar(' ');

			}
			b++;
		}
		a++;
		_putchar('\n');
	}
}
