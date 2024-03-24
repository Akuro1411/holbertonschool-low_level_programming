#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of elements
 * @n: - number of elements in array
 *
 * Return: the sum
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list t;

	if (n == 0)
		return (0);

	va_start(t, n);
	for (i = 0; i < n; i++)
	{
		printf("%u", va_arg(t, int));
		if (i != (n - 1))
			if (seperator != NULL)
				printf("%c", seperator);
	}
	va_end(t);
	printf("\n")
}
