#include "dog.h"
/**
 * print_dog - prints a struct named dog
 * @d: pointer to a struct of type dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		printf("(nil)\n");
	if (d->owner == NULL)
		printf("nil\n");
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
