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
  
if (s1 != NULL)
while (s1[i])
i++;;

if (s2 != NULL)
while (s2[j])
j++;;

arr = malloc((i + j + 3) * sizeof(char));

if (arr == NULL)
return 0;
if (s1 != NULL)
for (t = 0; s1[t] != '\0'; t++)
{ 
arr[t] = s1[t];
};
if (s2 != NULL)
for (z = 0; s2[z] != '\0'; z++)
{
arr[i] = s2[z];
i++;
};
return arr;
}
