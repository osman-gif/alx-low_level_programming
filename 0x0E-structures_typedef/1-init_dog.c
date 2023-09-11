#include "dog.h"
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a struct variable
 * @name: char pointer
 * @age: int varibale
 * @owner: char pointer
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;

	if (name == NULL)
		d->name = "";

	if (owner == NULL)
		d->owner = "";

	d->age = age;
}
