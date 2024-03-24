#include <stdarg.h>
#include "variadic_functions.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list t;
	if (n == 0)
		return 0;

	va_start(t, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(t, int);
	}
	va_end(t);
	return sum;
}
