#include <stddef.h>
#include "main.h"
/**
 * _strchr - checks the code
 * @s: - input of function
 * @c: - input of function
 * Return: the end value of code
 */

char *_strpbrk(char *s, char *accept)
{
  int i;
  while(*s)
  { 
	  i = 0;
    while(accept[i])
    {
      if (*s == accept[i])
      {
        return s;
      }
      else
      i++;
    }
    s++;
  }
  return 0;
}
