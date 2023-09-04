#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - allocate memory dynamically
 * @size: size of the array
 * @c: character to initialize the array with
 * Return: returns pointer to the new array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);

	if (ptr != NULL)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			*(ptr + i) = c;
		}
		return (ptr);
	}
	else
		return (NULL);
}
