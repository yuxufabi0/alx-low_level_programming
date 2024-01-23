#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A type with kinda of a dog structure
 * @name: member char for name
 * @age: menber float for age
 * @owner: member char for owner's name
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};


void	init_dog(struct dog *d, char *name, float age, char *owner);
void	print_dog(struct dog *d);
dog_t	*new_dog(char *name, float age, char *owner);
void	free_dog(dog_t *d);
char	*_strcpy(char *dest, char *src);
int	_strlen(char *s);

#endif
