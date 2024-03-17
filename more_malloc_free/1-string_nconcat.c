#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory for given size
 * @b: - the size of memory
 * Return: returns the pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
  unsigned int i = 0, j = 0, t = 0;
  char *arr;
  if (s1 != NULL)
  while (s1[i])
  {
    i++;
  };
  if (s2 != NULL)
   while (s2[t])
   {
      t++;
   };
  arr = malloc((i + n + 1) * sizeof(char));
  if (arr == NULL)
  {
    return NULL;
  }
  if (s1 != NULL)
  for(j = 0; j < i; j++)
  {
    arr[j] = s1[j];
  };
  if (s2 != NULL)
  {
    if (n < t)
      for (j = 0; j < n; j++)
      {
        arr[i + j] = s2[j];
      };

    else if (n >= t)
      for (j = 0; j < t; j++)
      {
        arr[i + j] = s2[j];
      };
  return arr;
  
}
