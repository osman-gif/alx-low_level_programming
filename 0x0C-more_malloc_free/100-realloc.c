#include "main.h"

void *free_ptr(void *ptr);

/**
 * _realloc - Reallocates a memory block using malloc and free
 * @ptr: Pointer to the allocated memory
 * @old_size: size of the allocated memory
 * @new_size: size of the memory to be reallocated
 * Return: Returns a pointer to the reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int __attribute__((unused)) i, j;
	char *new_ptr;
	char *tmp_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
			return (NULL);

		return (ptr);
	}
	else
	{
		if (new_size == 0)
			return (free_ptr(ptr));
	}

	if (new_size > old_size)
	{
		tmp_ptr = malloc(old_size);
		new_ptr = malloc(new_size);

		for (i = 0; i < old_size; i++)
		{
			new_ptr[i] = *tmp_ptr++;
		}

		ptr = new_ptr;
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else
	{
		tmp_ptr = malloc(old_size);
		new_ptr = malloc(new_size);

		for (i = 0; i < new_size; i++)
		{
			new_ptr[i] = *tmp_ptr++;
		}
		ptr = new_ptr;
	}

	return (ptr);
}

/**
 * free_ptr - frees a memory allocated using malloc
 * @ptr: pointer to the memory to be freed
 * Return: Returns a void pointer
 */

void *free_ptr(void *ptr)
{
	free(ptr);
	return (NULL);
}
