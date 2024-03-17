#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void *malloc_checked(unsigned int b)
{
  unsigned int *arr;
  arr = malloc(b * sizeof(unsigned int));
  if (arr == NULL)
  exit(98);
  return arr;  
}
