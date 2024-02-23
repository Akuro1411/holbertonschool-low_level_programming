#include "main.h"
/**
 * _isalpha - prints alphabet
 * @c: - input of function
 * Return: Always 0.
 */

int _isalpha(int c)
{
  char j;
  if ((j >= 'a' && j <= 'z') || (j >= 'A' && j <= 'Z')){
    return (1);
  }
  else{
    return (0);
  }
}
