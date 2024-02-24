#include "main.h"
/**
 * print_to_98 - check the code
 * @number: - input of function
 */
void print_to_98(int number)
{
int t;
if (number < 98)
{
while (number < 98)
{
	if (number > 10)
	{
	_putchar((number / 10) + '0');
	_putchar((number % 10) + '0');
	}
	else
	{
	_putchar(number + '0');
	}
	number++
	}
}
else if (number == 98)
{
_putchar((number / 10) + '0');
_putchar((number % 10) + '0');
}
else
{
for (t = number - 98; number >= 98; number--)
	{
	_putchar((number / 10) + '0');
	_putchar((number % 10) + '0');
	}
}
