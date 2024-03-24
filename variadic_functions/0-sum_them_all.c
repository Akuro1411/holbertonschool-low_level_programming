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

	va_start(t, n);
	for (i = 0; i < n; i++)
	{
		sum += t;
	}
	va_end(t);
	return sum;
}
