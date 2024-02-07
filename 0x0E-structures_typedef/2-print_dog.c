#include "dog.h"
#include <stdio.h>

/**
  * print_dog - A function that prints a struct dog
  * @d: a pointer to the struct dog
  */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
