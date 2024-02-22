#include "main.h"

/**
 * print_alphabet - prints alphabet
 *
 *
 */

int _islower(int c)
{
  char a[]="abcdefghijklmnopqrstuvwxyz";
  char c;
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

