#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: Always 0
 */

void	times_table(void);

int main(void)
{
    times_table();
    return (0);
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
			_putchar('0' + a*b);
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
			b++;
		}
		a++;
	}
}
