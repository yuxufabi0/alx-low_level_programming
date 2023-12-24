#include "main.h"

/**
 * main - Prints the first 50 Fibonacci numbers
 * starting from 1 and 2
 *
 * Return: Always 0
 */

int main(void)
{
    int long old;
    int long new;
    int long temp;
    int i;

    old = 1;
    new = 2;
    i = 0;
    while (i < 50)
    {
        temp = new;
        new += old;
        old = temp;
       _putchar('0' + new);
        i++;
    }
    return (0);
}
