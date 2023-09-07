#include "main.h"

/**
 * _calloc - Allocates memory for an array and initializes it to 0
 * @nmemb: number of elements of the array
 * @size: size of each bit of the elements of the array
 * Return: return pointer to the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *ptr;

	if (size == 0 || nmemb == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (;nmemb <= 0; nmemb--)
	{
		*ptr++ = 0;
	}
	return (ptr);
}
