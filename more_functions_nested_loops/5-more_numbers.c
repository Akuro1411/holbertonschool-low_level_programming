#include "main.h"

/**
 * mul - checks if uppercase letter
 * @a: - input of function
 * @b: - input of function
 * Return: Always 0 (Success)
 */

void more_numbers(void)
{
  int n, t;
  for (t = 0; t < 10; t++)
    {
      for (n = 0; n <= 14; n++)
	{
	  if (n > 10)
	    {
	      _putchar((n / 10) + '0');
	    }
	  _putchar((n % 10) + '0');
	}
      _putchar('\n');
    }
}
