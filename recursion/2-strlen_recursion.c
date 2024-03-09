#include "main.h"
/**
 * _strlen_recursion - check the code
 * @s: - input of function
 * Return: Returns the length of string at the end
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	return (1 + _strlen_recursion(s + 1));
}
