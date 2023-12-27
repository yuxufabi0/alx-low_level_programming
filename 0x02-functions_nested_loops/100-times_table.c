#include "main.h"
#include <stdio.h>

/**
 * print_times_table - Print the n times table
 * @n: Takes an int n
 *
 *
 * Return: Always 0
 */

void	print_times_table(int n);

void	print_times_table(int n)
{
	int a;
	int b;
	int c;

	a = 0;
	while (a <= n && (n <= 15))
	{
		b = 0;
		while (b <= n)
		{
			c = a * b;
			printf("%i", c);
			if (b != n && (c + a < 10))
				printf(",   ");
			if (b != n && (c + a  > 9) && c + a < 100)
				printf(",  ");
			if (b != n && (c + a > 99))
				printf(", ");
			b++;
		}
		a++;
		printf("\n");
	}
}
