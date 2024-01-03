#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to be printed
 */

void	print_array(int *a, int n);

void	print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		if (i == 0)
		{
			printf("%d", a[i]);
		}
		else
		{
			printf(", %d", a[i]);
		}
		i++;
	}
	printf("\n");
}
