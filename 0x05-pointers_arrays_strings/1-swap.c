#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: Pointer to int.
 * @b: pointer to int.
 */

void	swap_int(int *a, int *b);

void	swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
