#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory for given size
 * @b: - the size of memory
 * Return: returns the pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  int i = 0, j = 0;
  char *arr;
  while (s1[i])
  {
    i++;
  }
  arr = malloc((i + n) * sizeof(char));
  if (arr == NULL)
  {
    return NULL;
  }
  for(j = 0; j < i; j++)
  {
    arr[j] = s1[j];
  }

  for (j = 0; j < n; j++)
  {
    arr[i + j] = s2[j];
  }

  return arr;
  
}
