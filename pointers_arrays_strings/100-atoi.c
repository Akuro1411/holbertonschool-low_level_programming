#include "main.h"
/**
 * _atoi - check the code
 * @s: - input of function
 * Return: last value (Success)
 */
int _atoi(char *s)
{
  int i, t = 0;
  while(s[i])
  {
    if (s[i] >= '0' || s[i] <= '9')
      {
        t = t*10 + s[i] - '0';
      }
    i++;
  }
  return t;
}
