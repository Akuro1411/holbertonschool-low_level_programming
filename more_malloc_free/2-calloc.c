#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory for given size
 * @b: - the size of memory
 * Return: returns the pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
  unsigned int *arr, i;
  if (nmemb == 0 || size == 0)
  {
    return NULL;
  }
  arr = malloc(nmemb);
  for (i = 0; i < nmemb; i++)
  {
	  arr[i] = malloc(size);
  }
  if (arr == NULL)
  {
    return NULL;
  }
  return arr;
}
