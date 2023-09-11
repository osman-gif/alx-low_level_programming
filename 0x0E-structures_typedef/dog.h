
#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * struct dog - define a struct named dog with three members
 * @name: char pointer (dog name)
 * @age: dog age
 * @owner: dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
typedef struct dog dog;
typedef struct dog dog_t;
dog_t *new_dog(char *name, float age, char *onwer);
void free_dog(dog_t *d);
#endif
