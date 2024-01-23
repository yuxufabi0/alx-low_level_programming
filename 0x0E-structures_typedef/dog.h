#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A structure dog
 * @name: a char member for name
 * @age: a float member for age
 * @owner: a char member for owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void	init_dog(struct dog *d, char *name, float age, char *owner);

#endif
