#include <stddef.h>
#include "main.h"
/**
 * _strspn - checks the code
 * @s: - input of function
 * @accept: - input of function
 * Return: the end value of code
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, len = 0, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				len++;
				break;
			}
		}
		if (s[i] != accept[j])
		{
			return (len);
		}
	}
	return (len);
}
