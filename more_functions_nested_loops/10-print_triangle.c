#include "main.h"

/**
 * print_triangle - prints square
 * @size: - input of function
 */

void print_triangle(int size)
{
int t, j;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (t = size; t > 0; t--)
{
_putchar(' ');
for (j = 0; j < t; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
