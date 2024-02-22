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
  int n = 0;
  for (i = 'a'; i < 'z'; i++)
    {
      if (a == i)
	{
	  n++;
	}
    }
  if (n == 1)
    {
      return (1);
    }
  else
    {
      return (0);
    }
}
