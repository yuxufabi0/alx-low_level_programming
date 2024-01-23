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
			printf("Name: (nil)\n");
		if (!d->age)
			printf("(nil)\n");
		if (d->owner == NULL)
			printf("(nil)\n");
		printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
	}
}
