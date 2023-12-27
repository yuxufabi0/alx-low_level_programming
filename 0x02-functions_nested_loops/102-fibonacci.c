#include "main.h"
#include <stdio.h>

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

    old = 0;
    new = 1;
    i = 0;
    while (i < 50)
    {
        temp = new;
        new += old;
        old = temp;
	printf("%li", new);
	if (i != 49)
		printf(", ");
        i++;
    }
    printf("\n");
    return (0);
}

