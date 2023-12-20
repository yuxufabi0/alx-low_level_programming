#include "main.h"

/**
 * _islower - Checks for lowercase alphabets
 * @c: Takes a character
 *
 * Return: Always 0
 */

int	_islower(int c);

int	_islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
