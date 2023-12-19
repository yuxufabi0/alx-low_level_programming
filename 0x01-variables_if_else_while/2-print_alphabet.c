#include <stdio.h>

/**
 * main - Prints the alphabets in lowercase
 *
 * Return: Always 0
 */

int main(void)
{
	char a;

	a = 'a';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return 0;
}
