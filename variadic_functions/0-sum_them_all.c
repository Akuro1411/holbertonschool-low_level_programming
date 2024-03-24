#include <stdarg.h>
#include "variadic_functions.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list t;
	if (n == 0)
		return 0;

	va_start(t, n);
	for (i = n; i > 0; i = va_arg(t, unsigned int))
	{
		sum += i;
	}
	va_end(t);
	return sum;
}
