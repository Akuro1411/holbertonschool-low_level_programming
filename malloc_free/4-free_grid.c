#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * free_grid - copy and return input str
 * @grid: - entered array
 * @height: - number of rows
 * Return: Every element of array
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
