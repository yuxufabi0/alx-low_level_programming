#include <stdio.h>

/**
 * main - Prints all single digits
 *
 * Return: Always 0
 */

int main(void)
{
	int num;

	num = '0';
	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	putchar('\n');

	return (0);
}
