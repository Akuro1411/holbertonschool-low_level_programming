#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	int i = 0, n;
	while (s[i])
	{
		i++;
	}
	for (n = 0; n < i; n++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
