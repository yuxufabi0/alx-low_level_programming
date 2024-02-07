#include "dog.h"
#include <stdio.h>

/**
  * print_dog - A function that prints a struct dog
  * @d: a pointer to the struct dog
  */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
		if (d->name == NULL)
			d->name = "(nil)";
		if (d->owner == NULL)
			d->owner = "(nil)";
		printf("Name: %s\nAge: %lf\nOwner: %s\n", d->name, d->age, d->owner);
}
