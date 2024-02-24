#include "main.h"

/**
 * print_last_digit - prints abs of number
 * @number: - input of function
 * Return: Always 0 (Success)
 */

void times_table(void)
{
  int hour, minute;
  for (hour = 0; hour <=23; hour++)
    {
      for (minute = 0; minute <=59; minute++)
	{
	  if ((hour < 10) && (minute < 10))
	    {
	      _putchar('0');
	      _putchar(hour + '0');
	      _putchar(':');
	      _putchar('0');
	      _putchar(minute + '0');
	      _putchar('\n');
	    }
	  else if ((hour < 10) && (minute >= 10 ))
	    {
	      _putchar('0');
	      _putchar(hour + '0');
	      _putchar(':');
	      _putchar(minute + '0');
	      _putchar('\n');
	    }
	  else if ((hour >= 10) && (minute <  10))
	    {
	      _putchar(hour + '0');
	      _putchar(':');
	      _putchar('0');
	      _putchar(minute + '0');
	      _putchar('\n');
	    }
	  else
	    {
	      _putchar(hour + '0');
	      _putchar(':');
	      _putchar(minute + '0');
	      _putchar('\n');
	    }
	}
    }
}
