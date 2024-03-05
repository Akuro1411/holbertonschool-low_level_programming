#include "main.h"
/**
 * _memset - prints buffer in hexa
 * @s: - input of function
 * @b: - input of function
 * @n: - input of function
 * Return: Nothing.
 */

char *_memset(char *s, char b, unsigned int n)
{
int i, t;
t = n;
for (i = 0; i < t; i++)
{
s[i] = b;
}
return (s);
}
