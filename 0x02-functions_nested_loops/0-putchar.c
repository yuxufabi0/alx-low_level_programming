#include "main.h"

/**
 * main - Prints _putchar 
 *
 * Return: Always 0
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	i = 0;
	while (str[i] != '\n')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
