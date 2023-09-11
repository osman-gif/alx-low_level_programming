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
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->owner = owner;
	d->age = age;
}
