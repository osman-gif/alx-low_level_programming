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
	char *my_name;
	char *my_owner;

	my_name = name;
	my_owner = owner;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	d->name = my_name;
	d->age = age;
	d->owner = my_owner;
	return (d);
}

