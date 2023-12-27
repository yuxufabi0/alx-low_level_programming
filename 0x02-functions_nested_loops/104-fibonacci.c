#include "main.h"
#include <stdio.h>

/**
 * main - Finds and prints the first 98 Fibonacci numbers,
 * starting with 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
	int long old;
	int long new;
	int long temp;
	int i;

	old = 0;
	new = 1;
	i = 0;
	while (i < 98)
	{
		temp = new;
		new += old;
		old = temp;
		printf("%li", new);
		if (i != 98)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}

