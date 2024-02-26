#include "main.h"

/**
 * print_triangle - prints square
 * @size: - input of function
 */

void print_triangle(int size)
{
  int t, j, z;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (t = size; t > 0; t--)
{
for (j = 1; j < t; j++)
{
_putchar(' ');
}
for (z = 1; z < t; z++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
