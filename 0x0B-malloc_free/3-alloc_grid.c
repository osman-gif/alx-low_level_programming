#include "main.h"
#include <stdlib.h>
void init_alloc(int height, int width, int **ptr);
/**
 * alloc_grid - allocate memory to 2d array
 * @width: number of columns
 * @height: number of rows
 * Return: return Pointer to the 2d array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **)malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		free(*ptr);
		return (NULL);
	}

	init_alloc(height, width, ptr);

	return (ptr);
}

/**
 * init_alloc - Initializes a 2 dimentional array of integers
 * @height: Number of rows of the 2d array
 * @width: Number of columns of the 2d array
 * @ptr: Pointer to the 2d array
 */

void init_alloc(int height, int width, int **ptr)
{
	int i, j;

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			return;
		}

		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}

	}
}
