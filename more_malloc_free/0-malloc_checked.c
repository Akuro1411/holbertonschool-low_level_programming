#include "main.h"
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
  char *arr;
  arr = malloc(b);
  if (arr == NULL)
  exit(98);
  return arr;  
}
