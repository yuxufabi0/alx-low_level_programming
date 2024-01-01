#include "main.h"

/**
 * print_square - Prints a square
 * @size: Takes an int size
 *
 * Return: Always 0;
 */

void	print_square(int size);

void	print_square(int size)
{
	int a;
	int b;

	a = 0;
	while (a < size && size > -1)
	{
		b = 0;
		while (b < size)
		{
			_putchar('#');
			b++;
		}
		a++;
		_putchar('\n');
	}
	if (size <= 0)
		_putchar('\n');
}
