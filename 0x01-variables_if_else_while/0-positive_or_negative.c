#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - checks if a number is -ve, +ve or zero
 * @n: takes a random number
 *
 * Return: 0
 */

int main(void)
{
	int n = 5;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	if (n == 0)
	{
		printf("%i is zero\n", n);
	}
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	return (0);
}
