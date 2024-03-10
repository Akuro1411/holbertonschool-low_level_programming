#include "main.h"
/**
 * is_prime_number - func that returns 1 if a num is a prime num, 0 otherwise
 * @n: number for input
 * Return: 0
 */
int find_prime(int n, int i, int last);

int is_prime_number(int n)
{
	return (find_prime(n, 2, n / 2));
}

/**
 * find_prime - blank
 * @n: checkl
 * @i: for the increment
 * @last: limit of recursion
 * Return: 0
 */

int find_prime(int n, int i, int last)
{
	if ((n % i == 0 && i <= last) || n < 0 || n == 1)
		return (0);
	else if (n % i != 0 && i <= last)
		return (find_prime(n, i + 1, last));
	else
		return (1);
}
