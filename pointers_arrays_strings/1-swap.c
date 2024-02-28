#include "main.h"
/**
 * swap_int - check the code
 * @a: - input of function
 * @b: - input of function
 */

void swap_int(int *a, int *b);
{
  int c, d;
  c = &a;
  d = &b;
  *a = d;
  *b = c;
  
}
