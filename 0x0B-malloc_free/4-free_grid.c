#include "main.h"

void free_grid(int **grid, int __attribute__((unused)) height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		if(grid[i] == NULL)
			return;
		free(grid[i]);
	}
	free(grid);	
}

