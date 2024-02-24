#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - check the code
 * @number: - input of function
 */
void print_to_98(int number)
{
  if (number <= 98)
    {
      while (number <= 98)
	{
	  printf("%d", number);
	  number++;
	  printf("%c",44, " ");
	}

    }
  else
    {
      while (number >= 98)
	{
	  printf("%d", number);
	  printf("%c",44, " ");
	  number--;
	}

    }
}
