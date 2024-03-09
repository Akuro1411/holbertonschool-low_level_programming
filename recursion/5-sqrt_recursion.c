#include "main.h"
/**
 * _pow_recursion - check the code
 * @x: - input of number
 * @y: - input of the power
 * Return: Returns the power of given number
 */
int find_square(int checker, int number)
{
	if (checker * checker == number)
		return checker;
	else if (checker * checker > number)
		return -1;
	return find_square(checker + 1, number);
}

int _sqrt_recursion(int n)
{
	return find_square(1, n);
}
