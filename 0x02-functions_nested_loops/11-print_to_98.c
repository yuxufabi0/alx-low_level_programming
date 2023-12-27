#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: Takes an int n
 *
 * Return: Always 0
 */

void	print_to_98(int n);

void	print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
			n++;
		}
		printf("\n");
	}
	else
	{
		while (n >= 98)
		{
			printf("%i", n);
			if (n != 98)
				printf(", ");
			n--;
		}
		printf("\n");
	}
}
