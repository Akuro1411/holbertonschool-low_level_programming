#include "main.h"

/**
 * find_square - check the code
 * @number: - input of number for to find square root
 * @checker: - starting from 1 to given number
 * Return: Returns the power of given number
 */

int find_square(int checker, int number)
{
	if (checker * checker == number)
		return (checker);
	else if (checker * checker > number)
		return (-1);
	return (find_square(checker + 1, number));
}

/**
 * _sqrt_recursion - check the code
 * @n: - input of number for to find square root
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (find_square(1, n));
}
