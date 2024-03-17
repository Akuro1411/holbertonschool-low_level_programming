#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory for given size
 * @b: - the size of memory
 * Return: returns the pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  unsigned int i = 0, j, t = 0;
  char *arr, *empty;
  empty = "";
  if (s1 == NULL)
  {
    s1 = empty;
  }
  if (s2 == NULL)
  {
    s2 = empty;
  }
  while (s1[i])
  {
    i++;
  }

  while (s2[t])
  {
    t++;
  }
  arr = malloc((i + n) * sizeof(char));
  if (arr == NULL)
  {
    return NULL;
  }

  for (j = 0; j < i; j++)
  {
    arr[j] = s1[j];
  }

  if (n >= t)
    for (j = 0; j < t; j++)
    {
      arr[i + j] = s2[j];
    }
  else
  {
    for (j = 0; j < n; j++)
    {
      arr[i + j] = s2[j];
    }
  }
return arr;
}
