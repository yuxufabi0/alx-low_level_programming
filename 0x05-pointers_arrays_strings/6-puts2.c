#include "main.h"

/**
 * puts2 - Prints every other char of a string, starting with the first char
 * @str: string to print the chars from
 */

void	puts2(char *str);

void	puts2(char *str)
{
	int len, i;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
