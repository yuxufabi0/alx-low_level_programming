#ifndef _DOG_
#define _DOG_

/**
  * struct dog - A strucrure for a dog
  * @name: a char pointer
  * @age: an int
  * @owner: a char poiner
  */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
  * struct dog dog_t - A new dog with the dog structur
  */

struct dog dot_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
