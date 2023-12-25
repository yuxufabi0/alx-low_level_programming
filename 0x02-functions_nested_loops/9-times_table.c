#include "main.h"

/**
 * times_table - Prints the 9 times table.
 * digitz - Prints digits.
 *
 * Return: Always 0
 */

void	times_table(void);
void	digitz(long int num);

void	digitz(long int num)
{
	if (num < 0)
	{
		_putchar('-');
		num *= -1;
	}

	if (num / 10)
		digitz(num / 10);

	_putchar(num % 10 + '0');
}


void	times_table(void)
{
	int a;
	int b;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			digitz(a * b);
			if (b != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			b++;
		}
		a++;
		_putchar('\n');
	}
}
