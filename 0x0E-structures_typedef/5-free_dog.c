#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees memory allocated for a struct dog
 * @d: struct dog to free
 * Author : Asaka Hamzah-Mohammed Awinebisah
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
