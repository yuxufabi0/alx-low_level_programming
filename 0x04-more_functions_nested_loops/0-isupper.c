#include "main.h"

/**
 * _isupper - Checks for uppercase character
 * @c: Takes an int c
 *
 * Return: 1 if c is uppercase, otherwise 0
 */

int	_isupper(int c);

int	_isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
