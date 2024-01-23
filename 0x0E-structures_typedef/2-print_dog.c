#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: Takes a dog pointer
 */

void	print_dog(struct dog *d);
{
	if (d == NULL)
		break;
	if (d->name == NULL)
		d->name = "Name: (nil)";
	if (d->age == NULL)
		d->age = "Age: (nil)";
	if (d->owner == NULL)
		d->owner = "Owner: (nil)";

	printf("Name: %s\nAge: %f\nOwner: %s", d->name, d->age, d->owner);
}
