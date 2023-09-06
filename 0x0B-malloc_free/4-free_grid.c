#include "main.h"
/**
 * free_grid - Frees a two dimentional array of integers
 * @grid: The array of array integers.
 * @height: The number of array of integers
 */
void free_grid(int **grid, int __attribute__((unused)) height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if (grid[i] == NULL)
			return;
		free(grid[i]);
	}
	free(grid);
}

