#include "dog.h"
#include <stdlib.h>

/**
  * init_dog - A function that initializes a struct dog variable
  * @d: a pointer pointing to the dog structure
  * @name: a char pointer to the name member
  * @age: an int for age
  * @owner: a char pointer to the owner member
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
