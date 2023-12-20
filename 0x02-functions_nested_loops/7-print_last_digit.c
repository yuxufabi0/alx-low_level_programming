#include "main.h"

/**
 * print_last_digit - Prints last digit of a number
 * @int: Takes an integer
 *
 * Return: num
 */

int	print_last_digit(int);

int    print_last_digit(int num)
{
    num %= 10;
    if (num < 0)
	    num *= -1;
    putchar('0' + num);
    return (num);
}
