#include "main.h"
/**
 * factorial - check the code
 * @n: - input of function
 * Return: Returns the factorial of given number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
