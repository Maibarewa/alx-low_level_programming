#include <stdio.h>
#include "dog.h"

/**
 * free_dog -frees memory allocated for a struct dog
 * @d: Struct dog fo free
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
