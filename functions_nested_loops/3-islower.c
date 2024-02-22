#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 *
 */

int _islower(int c)
{
  char a = c + '0';
  char i;
  for (i = 'a'; i < 'z'; i++)
    {
      if (a == i)
	{
	  int X = 1;
	  return X;
	  break;
	}
      else
	{
	  return (0);
	}
    }
  return (0);
}
