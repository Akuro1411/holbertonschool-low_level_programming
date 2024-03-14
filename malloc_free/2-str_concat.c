#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _strdup - copy and return input str
 * @str: - entered string
 * Return: Every element of array
 */

char *str_concat(char *s1, char *s2)
{
  int i = 0, j = 0, t, z;
  char *arr;
  char empty_string[1] = "";
  while (s1[i])
    i++;
  while (s2[j])
    j++;
  arr = malloc((i + j + 3) * sizeof(char));
  if (arr == NULL)
	  return 0;
  for (t = 0; s1[t] != '\0'; t++)
  {
    if (s1[t] == empty_string[0])
      return 0;
    arr[t] = s1[t];
    if (t == (i - 1))
      for (z = 0; s2[z] != '\0'; z++)
      {
        arr[i] = s2[z];
        i++;
      };
  }
  return arr;
}
