#include "dog.h"
/**
 * free_dog - frees a struct dog_t
 * @d: pointer to struct dog_t
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
	d = NULL;
}
