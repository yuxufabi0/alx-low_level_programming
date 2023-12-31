#include "main.h"

/**
 * print_diagonal - Draws a diagonal
 * @n: Takes an int n
 *
 * Return: Always 0
 */

void	print_diagonal(int n);

void	print_diagonal(int n)
{
	int a;
	int b;

	a = 0;
	while (a < n && n > 0)
	{
		b = 0;
		while (b < a)
		{
			_putchar(' ');
			b++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
}
