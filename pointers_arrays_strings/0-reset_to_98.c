#include "main.h"


/**
 * main - check the code 
 *
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
  int *c , d;
  d = 98;
  c = &d;
  *c = n;
}
