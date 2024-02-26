#include <stdio.h>

/**
 *print_most_numbers - prints numbers 0 to 9 except 2 and 4
 *
 */

int main(void)
{
  int n;
  for (n = 1; n <= 100; n++)
    {
      if ((n % 3 == 0) && (n % 5 == 0))
	{
	  printf("FizzBuzz");
	}
      else if (n % 5 == 0)
	{
	  printf("Buzz");
	}
      else if (n % 3 == 0)
	{
	  printf("Fizz");
	}
      else
	{
	  printf("%d", n);
	}
      printf(" ");
    }
  printf('\n');
  return (0);
}
