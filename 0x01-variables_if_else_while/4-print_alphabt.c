#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase
 * except 'e' and 'q'
 *
 * Return: Always 0
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		if (a == 'e' || a == 'q')
		{
			a++;
			continue;
		}
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
