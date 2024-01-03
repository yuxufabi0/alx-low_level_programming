#include "main.h"

/**
 * _puts - Prints a string followed by a newline
 * @s: Points to a string.
 */

void	_puts(char *str);

void	_puts(char *str)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
