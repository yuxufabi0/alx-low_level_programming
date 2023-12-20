#include "main.h"

/**
 * print_alphabet_x10 - Prints the lower alphabets x10
 *
 * Return: Always 0
 */

void	print_alphabet_x10(void);

void	print_alphabet_x10(void)
{
	char a;
	int i;

	i = 0;
	while (i <= 9)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
