#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @int: Takes an integer
 *
 * Return: num
 */

int	print_last_digit(int);

int main(void)
{
    int r;

    print_last_digit(98);
    print_last_digit(0);
    r = print_last_digit(-1024);
    _putchar('0' + r);
    _putchar('\n');
    return (0);
}

int	print_last_digit(int num)
{
	if (num < 0)
		num *= -1;
	num %= 10;
	_putchar('0' + num);
	return (num);
}
