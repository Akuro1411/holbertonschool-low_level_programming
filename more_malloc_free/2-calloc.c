#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory for given size
 * @b: - the size of memory
 * Return: returns the pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
  unsigned int *arr;
  if (nmemb == 0 || size == 0)
  {
    return NULL;
  }
  arr = malloc(size * nmemb);
  if (arr == NULL)
  {
    return NULL;
  }
  free(arr);
  return arr;
}
