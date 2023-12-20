#include "main.h"

/**
 * print_alphabet - Prints the lower alphabets
 *
 * Return: Always 0
 */
void	print_alphabet(void);
void	print_alphabet(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	return (0);
}
