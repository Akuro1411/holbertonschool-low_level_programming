#include "main.h"
/**
 * _strcat - check the code
 * @dest: - input of function
 * @src: - input of function
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
while (*dest)
{
++dest;
}
while (*src)
{
*dest++ = *src++;
}
return (*dest);
}
