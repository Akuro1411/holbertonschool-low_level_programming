#include "main.h"
void exit(int status);
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
	  exit(1);
	}
      else
	{
	  return (0);
	}
    }
  return (0);
}
