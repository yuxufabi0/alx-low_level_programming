#include <stdio.h>

/**
 * main - Prints the sum of all the multiple of
 * 3 or 5 below 1024
 *
 * Return: Always 0
 */

int main(void)
{
	int i;
	int s;

	i = 0;
	s = 0;
	while (i < 1024)
	{
		if (i % 3 == 0 || (i % 5 == 0))
			s += i;
		i++;
	}
	printf("%i\n", s);
}
