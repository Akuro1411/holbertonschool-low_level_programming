#include "main.h"
/**
 * _puts - check the code
 * @str: - input of function
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
    int i, t;
    i = 0;
    while (s[i])
    {
        i++;
    }

    for (t = i - 1; t >= 0; t--)
    {

        _putchar(s[t]);
	_putchar('\n')
    }
}

