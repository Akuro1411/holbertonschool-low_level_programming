#include "main.h"
/**
 * string_toupper - check the code
 * @a: - input of function
 *
 */
char *string_toupper(char *a)
{
  int i, j;
  i = 0;
  while(a[i])
  i++;
  for (j = 0; j < i-1; j++)
  {
    if (a[j] > 'a' && a[j] < 'z')
    {
      a[j] = a[j] - 32;;
    }
  }
  return 0;
}
