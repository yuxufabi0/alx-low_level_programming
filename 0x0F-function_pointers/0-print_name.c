#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: Takes in a char pointer to name
 * @f: pointer to the printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
