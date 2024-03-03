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
    t = t*10 + s[i] - '0';
    i++;
  }
  return t;
}
