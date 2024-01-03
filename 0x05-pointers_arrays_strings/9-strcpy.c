#include "main.h"

/**
 * _strcpy - Copy's a string from a source to a destination
 * @src: string source.
 * @dest: string destination
 *
 * Return: string destination
 */

char	*_strcpy(char *dest, char *src);

char	*_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
