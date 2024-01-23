#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints the structure dog
 * @d: Takes a pointer to the structure
 */
void	print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)");
		if (!d->age)
			printf("(nil)");
		if (d->owner == NULL)
			printf("(nil)");
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
