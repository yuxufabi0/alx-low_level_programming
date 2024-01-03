#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Generates random valid passwords for the program 101-crackme
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int pass[101];
	int i;
	int sum;
	int n;

	sum = 0;	

	srand(time(NULL));

	i = 0;
	while (i < 101)
	{
		pass[i] = rand() % 78;
		sum += (pass[i] + '0');
		putchar(pass[i] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
		i++;
	}

	return (0);
}
