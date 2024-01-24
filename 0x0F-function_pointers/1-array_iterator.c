#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function given as a parameter
 * on each element of an array
 * @array: Takes an array to iterate over
 * @size: array size
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
