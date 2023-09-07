#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size of the allocated memory
 * Return: 0 if success and terminate normally with status code of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}

