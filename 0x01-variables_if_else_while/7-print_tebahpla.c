#include <stdio.h>

/**
 * main - Prints lower alphabets in reverse
 *
 * Return: Always 0
 */

int main(void)
{
	char z;

	z = 'z';
	while (z >= 'a')
	{
		putchar(z);
		z--;
	}
	putchar('\n');

	return (0);
}
