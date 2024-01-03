#include "main.h"

/**
 * _strlen - Displays string length
 * @s: Points to a string.
 *
 * Return: Length of the string.
 */

int	_strlen(char *s);

int	_strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}
