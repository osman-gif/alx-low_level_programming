#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocate memory to 2d array
 * @width: number of columns
 * @height: number of rows
 * Return: return Pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;
	int i;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = (int **)malloc(sizeof(int *) * height);

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);

		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}

	return (ptr);
}
