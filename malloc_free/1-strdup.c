#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * create_array - Creates array with given size
 * @size: - size of array
 * @c: - character of every element
 * Return: Every element of array
 */

char *_strdup(char *str)
{
  int i, length = 0;
  char *arr;

  if (str == NULL)
  {
    return NULL;
  }

  
  while (str[length])
  {
    length++;
  }

  arr = malloc((length + 1) * sizeof(char));
  for (i = 0; i < length; i++)
  {
    arr[i] = str[i];
  }
  if (arr == NULL)
  {
	  return NULL;
  }
  return arr;
}
