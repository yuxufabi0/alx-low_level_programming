#include <stdio.h>

/**
 * main - Prints all single digits
 *
 * Return: Always 0
 */

int main(void)
{
	char num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		num++;
	}
	putchar('\n');

	return (0);
}
