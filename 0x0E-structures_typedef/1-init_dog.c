#include "dog.h"

/**
  * init_dog - A function that initiallizes an instance of a structure
  * @d: a pointer to the dog structure
  * @name: a char pointer to name
  * @age: an int age
  * @owner: a char pointer to owner
  *
  * Return: Always 0
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
