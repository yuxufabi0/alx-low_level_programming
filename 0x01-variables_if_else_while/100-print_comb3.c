#include <stdio.h>

/**
 * main - Prints all possible different combo
 * of two digits
 *
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;

	a = '0';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			putchar(a);
			putchar(b);
			if (a != '8' || b != '9')
			{
				putchar(',');
				putchar(' ');
			}
			b++;
		}
		a++;
	}
	putchar('\n');

	return (0);
}
