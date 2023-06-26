#include "dog.h"

/**
* free_dog - frees an initialized dog struct
* @d: pointer toa dog instance
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->owner);
	free(d->name);
	free(d);
}
