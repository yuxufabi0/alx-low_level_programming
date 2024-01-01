#include "main.h"

/**
 * print_diagonal - Draws a diagonal
 * @n: Takes an int n
 *
 * Return: Always 0
 */

void	print_diagonal(int n);
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_diagonal(0);
    print_diagonal(2);
    print_diagonal(10);
    print_diagonal(-4);
    return (0);
}
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
	if (n <= 0)
		_putchar('\n');
}
