#include "main.h"
#include <stdio.h>

/**
 * main - Find and prints the sum of the even-valued terms
 * Considering Fibonacci numbers
 *
 * Return: Always 0
 */

int main(void)
{
	int long old;
	int long new;
	int long temp;
	int sum;
	int i;

	old = 0;
	new = 1;
	i = 1;
	while (i && (new <= 4000000))
	{
		temp = new;
		new += old;
		old = temp;
		if (new % 2 == 0)
			sum += new;
		i++;
	}
	printf("%i\n", sum);
	return (0);
}

