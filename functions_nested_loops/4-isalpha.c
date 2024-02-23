#include "main.h"
/**
 * _isalpha - prints alphabet
 * @c: - input of function
 * Return: Always 0.
 */

int _isalpha(int c)
{
  char a, j;
  int n = 0;
  for (a = 'a'; a < 'z'; a++)
    {
      if (c == a)
	{
	  n++;
	}
    }
  for (j = 'a'; j < 'z'; j++)
    {
      if (c == j)
	{
	  n++;
	}
    }
  if (n == 1)
    {
      return 1;
    }
  else
    {
      return 0;
    }
}
