#include "main.h"
#include <stdio.h>

/**
 * main - Prints the numbers from 1 to 100
 * For multiples of 3, print Fizz.
 * For multiple of 5, print buzz.
 * For multiple of both 3 and 5, print fizzbuzz.
 *
 * Return: Always 0;
 */

int main(void)
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && (i % 5 != 0))
			printf("Fizz");
		else if(i % 5 == 0 && (i % 3 != 0))
			printf("Buzz");
		else if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz");
		else
			printf("%i", i);
		if (i != 100)
			printf(" ");
		i++;
	}
	printf("\n");
	return (0);
}
