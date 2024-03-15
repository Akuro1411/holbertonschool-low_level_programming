#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - copy and return input str
 * @str: - entered string
 * Return: Every element of array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	if (width <=0 || height <= 0)
	return NULL;
	int **arr;

	arr = malloc((height) * sizeof(int));

	if (arr == NULL)
		return NULL;
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc((width) * sizeof(int));
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return NULL;
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return arr;
}
