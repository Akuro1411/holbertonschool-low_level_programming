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
  arr = malloc(nmemb * size);
  for (i = 0; i < (nmemb * size); i++)
  {
	  arr[i] = 0;
  }
  if (arr == NULL)
  {
    return NULL;
  }
  return arr;
}
