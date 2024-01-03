#include "main.h"

/**
 * _puts - Prints a string followed by a newline
 * @str: Points to a string.
 */

void	_puts(char *str);

void	_puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
