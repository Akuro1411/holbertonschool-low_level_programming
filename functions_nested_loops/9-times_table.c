#include "main.h"

/**
 * jack_bauer - prints abs of number
 *
 *
 */

void times_table(void)
{
  int n_of_loop, number, t;
  for (n_of_loop = 0; n_of_loop <= 9; n_of_loop++)
    {
      number = 0;
      while (number <= 9)
	{
	  _putchar('0');
	  t = number;
	  for (n = 0; n < 9; n++)
	    {
	      _putchar(' ')
	      _putchar(',')
	      _putchar(t + '0');
	      t = t + number;
	    }
	}
      number++
    }
}
