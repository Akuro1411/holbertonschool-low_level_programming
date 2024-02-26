#include "main.h"

/**
 * print_line - prints _ for given number's loop
 * @n: - input of function
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
_putchar('_');
}
_putchar('\n');
}
}
