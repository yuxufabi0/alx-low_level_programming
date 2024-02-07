#include "dog.h"
#include <stdio.h>

/**
  * print_dog - A function that prints struct variable
  * @d: a pointer to a dog structure
  */

void print_dog(struct dog *d)
{
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %.1lf\nOwner: %s\n", d->name, d->age, d->owner);
}
