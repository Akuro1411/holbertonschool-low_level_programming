#include "main.h"
/**
 * _atoi - check the code
 * @s: - input of function
 * Return: last value (Success)
 */

int _atoi(char *s)
{
  int res = 0, negative = 0;
  for (int i = 0; s[i] != '\0'; ++i)
  {  
    if (s[i] == '-')
    {
      negative++;
    }
    else if (s[i] >= '0' && s[i] <= '9')
      {
        res = res * 10 + s[i] - '0';
      }
  }
  if (negative % 2 == 1)
  {
    res *= -1;
  }
  return res;
}
