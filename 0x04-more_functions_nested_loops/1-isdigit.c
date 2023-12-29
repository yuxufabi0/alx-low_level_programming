#include "main.h"

/**
 * _idigit - Checks for (0 through 9).
 * @c: Takes an int c
 *
 * Return: 1 if c is a digit, otherwise 0
 */

int	_isdigit(int c);

int	_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
