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
if (*src == '\0)
break;
*dest++ = *src++;
}
return (0);
}
