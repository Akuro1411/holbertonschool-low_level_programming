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
      if (c == i)
	{
	  return (1);
	  break;
	}
      else
	{
	  return (0);
	}
    }
}
