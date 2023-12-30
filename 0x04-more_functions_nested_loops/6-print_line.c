#include "main.h"

/**
 * print_line - Draws a straight line in the terminal
 * @n: Takes an int n
 *
 * Return: Always 0
 */

void	print_line(int n);

void	print_line(int n)
{
	int i;

	i = 0;
	while (i < n && n > 0)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
