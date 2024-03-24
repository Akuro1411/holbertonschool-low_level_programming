#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints the elements
 * @separator: - separator of numbers
 * @n: - number of elements
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list t;

	va_start(t, n);
	for (i = 0; i < n; i++)
	{
		if (va_arg(t, int) != 0)
			printf("%d", va_arg(t, int));
		else
			printf("(nil)");
		if (i != (n - 1))
			if (separator != NULL)
				printf("%s", separator);
	}
	va_end(t);
	printf("\n");
}
