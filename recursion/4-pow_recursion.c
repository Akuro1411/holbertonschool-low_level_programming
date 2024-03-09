#include "main.h"
/**
 * _pow_recursion - check the code
 * @x: - input of number
 * @y: - input of the power
 * Return: Returns the power of given number
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
