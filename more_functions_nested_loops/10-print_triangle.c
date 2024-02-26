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
for (t = 0; t < size; t++)
{
for (j = t; j < size; j++)
{
_putchar(' ');
}
for (z = 0; z < size; z++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
