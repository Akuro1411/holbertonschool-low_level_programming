#include "main.h"
/**
 * _isalpha - prints alphabet
 * @c: - input of function
 * Return: Always 0.
 */

int _isalpha(int c)
{
char i, j;
int n = 0;
for (i = 'a'; i < 'z'; i++)
{
for (j = 'A'; j < 'Z'; j++)
{
if (c == i)
{
n++;
}
else if (c == j)
{
n++;
}
}
}
if (n == 1)
{
return (1);
}
else
{
return (0);
}
}
