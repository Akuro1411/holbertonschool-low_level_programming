#include "main.h"

/**
 * print_diagonal - prints _ for given number's loop
 * @n: - input of function
 */

void print_diagonal(int n)
{
  int t, j;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (t = 0; t < n; t++)
{
  for (j = 0; j <= t; j++)
    {
      _putchar(' ');
    }
  if (t == (n-1))
    {
      _putchar('\\');
    }
}
_putchar('\n');
}
}
