#include "main.h"
/**
 * _strncpy - check the code
 * @src: - input of function
 * @dest: - input of function
 * @n: - input of function
 * Return: last value (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
