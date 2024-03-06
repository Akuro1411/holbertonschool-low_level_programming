#include <stddef.h>
#include "main.h"
/**
 * _print_chessboard - checks the code
 * @a: - input of function
 * @c: - input of function
 * Return: the end value of code
 */
void print_chessboard(char (*a)[8])
{
  int i, j;
  for (i = 0; i < 8; i++)
  {
    for (j = 0; j < 8; j++)
    {
      putchar(a[i][j]);
    }
    putchar('\n');
  }
}
