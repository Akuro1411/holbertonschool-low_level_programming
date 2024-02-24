#include "main.h"

/**
 * jack_bauer - prints abs of number
 *
 *
 */

void times_table(void)
{
  int  number, t, n;
      number = 0;
      while (number <= 9)
	{
	  _putchar('0');
	  t = number;
	  for (n = 0; n < 9; n++)
	    {
	      _putchar(',');
	      _putchar(' ');
	      if (t < 10)
	      {
		_putchar(t + '0');
	      }
	      else
	      {
		_putchar((t \ 10) + '0');
		_putchar((t % 10) + '0');
	      }
	      t = t + number;
	    }
	  _putchar('\n');
	  number++;
	}
}
