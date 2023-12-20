#include "main.h"
#include <stdio.h>

/**
 * _abs - Computes absolute value of an integer
 * @int: Takes an integer
 *
 * Return: int
 */

int	_abs(int);

int	_abs(int num)
{
	if (num < 0)
		num *= -1;
	return (num);
}
