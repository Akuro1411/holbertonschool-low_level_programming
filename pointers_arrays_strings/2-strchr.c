#include "main.h"
/**
 * _strchr - checks the code
 * @s: - input of function
 * @c: - input of function
 * Return: the end value of code
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
	}
		else
		s++;
	}
	if (c == '\0')
	return (0);
	return (s);
}
