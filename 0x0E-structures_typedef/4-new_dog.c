#include "dog.h"
/**
 * new_dog - Creates a new dog object
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Return pointer to dog if success else NULL;
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	d = malloc(sizeof(dog));
	if (d == NULL)
		return (NULL);
	d->name = name;
	d->age = age;
	d->owner = owner;
	return (d);
}

