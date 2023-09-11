#include "dog.h"
/**
 * free_dog - frees a struct dog_t
 * @d: pointer to struct dog_t
 */
void free_dog(dog_t *d)
{
	d = malloc(sizeof(dog_t));
	free(d);
	d = NULL;
}
