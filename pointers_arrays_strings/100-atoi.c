#include "main.h"
/**
 * _atoi - check the code
 * @s: - input of function
 * Return: last value (Success)
 */
int _atoi(char *s)
{
  int i, j, t = 0, negative = 0, positive = 0;
  int a;
  while(s[i])
  { if (s[i] == '-')
    {
      negative++;
    }
    else if (s[i] == '+')
    {
      positive++;
    }
    else
    { 
      if (s[i] >= '0' || s[i] <= '9')
      {
        t = t*10 + s[i] - '0';
      }
      else
      continue;
    }  
    i++;
  }
  if (negative % 2 == 1)
  {
   t = t * (-1);
  }
  return t;
}
