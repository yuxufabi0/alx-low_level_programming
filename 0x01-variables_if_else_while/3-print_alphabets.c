#include <stdio.h>

/**
 * main - Prints the alphabets in lower and upper case
 *
 * Return: Always 0
 */

int main(void)
{
	char a;
	char A;

	a = 'a';
	A = 'A';
	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	while (A <= 'Z')
	{
		putchar(A);
		A++;
	}
	putchar('\n');

	return (0);
}
