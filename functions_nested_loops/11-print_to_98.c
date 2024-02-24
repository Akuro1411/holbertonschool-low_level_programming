#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void print_to_98(int number)
{
  int t;
  if (number < 98)
    {
      for (t = 0; t <= number; t++)
	{
	  _putchar(t + '0');
	}
    }
  else if (number == 98)
    {
      _putchar(number + '0');
    }
  else
    {
      for (t = number - 98; number >= 98; number--)
	{
	  _putchar(number + '0');
	}
    }
}
