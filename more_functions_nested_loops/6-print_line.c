#include "main.h"

/**
 * print_line - prints number 0 to 14 10 times
 */

void print_line(int n)
{
  int t;
  if (n <= 0)
    {
      _putchar('\n');
    }
  else
    {
      for (t = 0; t < n; t++)
	{
	  _putchar(' ');
	}
      _putchar('\n');
    }
}
