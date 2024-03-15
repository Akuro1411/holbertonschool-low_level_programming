#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - copy and return input str
 * @str: - entered string
 * Return: Every element of array
 */
void free_grid(int **grid, int height)
{
  int i;
  for (i = 0;i < height; i++)
  {
    free(grid[i]);
  }
  free(grid);
}
