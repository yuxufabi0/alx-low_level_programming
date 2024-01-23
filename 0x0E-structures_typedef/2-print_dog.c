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
	if (name == NULL)
		printf("Name: (nil)");
	else
		printf("%s", d->name);
	if (age == NULL)
		printf("Age: (nil)");
	else
		printf("%d", d->age);
	if (owner == NULL)
		printf("Owner: (nil)");
	else
		printf("%s", d->owner);
}
