#include "main.h"

/**
 * _isalpha - Checks for alpha characters
 * @c: Takes a character
 *
 * Return: Always 0
 */

int	_isalpha(int c);

int	_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
			(c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
