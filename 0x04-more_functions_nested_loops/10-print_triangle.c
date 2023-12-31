#include "main.h"

/**
 * print_triangle - Prints a triangle
 * @size: Takes an int size
 *
 * Return: Always 0
 */

void	print_triangle(int size);

void	print_triangle(int size)
{
	int a;
	int b;

	a = 0;
	while (a < size)
	{
		b = 0;
		while (b < size)
		{
			if (size > (a + b) + 1)
				_putchar(' ');
			else
				_putchar('#');
			b++;
		}
		a++;
		_putchar('\n');
	}
}
