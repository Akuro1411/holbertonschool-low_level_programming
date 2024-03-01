#include "main.h"
/**
 * puts2 - check the code
 * @str: - input of function
 *
 */
char *_strcat(char *dest, char *src)
{
  int i, t;
  while (src[i])
    i++;
  for (t = 0; t <= i; t++)
    {
      dest[i + t] = src[t];
    }
  return (dest);
}
