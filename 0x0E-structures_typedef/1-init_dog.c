#include "dog.h"

/**
 * init_dog - initializes a dog structure
 * @d: Takes in a dog pointer to the structure
 * @name: Takes in a char pointer
 * @age: Takes in a float
 * @owner: Takes in a char pointer
 */

void	init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		break;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
