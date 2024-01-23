nclude <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees memory allocated to a struct dog
 * @d: Takes in dog pointer
 */
void	free_dog(dog_t *d)
{
	if (d)
	{	
		free(d->name);
		free(d->owner);
		free(d);
	}
}i
