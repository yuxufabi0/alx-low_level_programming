#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initialize a variable of type struct
 * @d: Takes a dog pointer
 * @name: Takes a char name
 * @age: Takes a float age
 * @owner: Takes a char owner
 */

void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}

