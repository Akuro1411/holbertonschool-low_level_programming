#include "function_pointers.h"
/**
 * int_index - finds the index of element which is matching
 * @array: - input of array
 * @size: - size of array
 * @cmp: - input of function
 * Return: - returns index if number is in array
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}
	}
	return (-1);
}
