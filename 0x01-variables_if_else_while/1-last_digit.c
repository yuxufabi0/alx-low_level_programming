#include <stdlib.h>
#include <stio.h>
#include <time.h>
/**
 * main - prints the last digit of a quotient
 * n: number to check
 *
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n % 10 > 5)
	{
		printf("and is greater than 5\n");
	}
	if (n % 10 == 0)
	{
		printf("and is 0\n");
	}
	if (n % 10 < 6 && n % 10 != 0)
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
