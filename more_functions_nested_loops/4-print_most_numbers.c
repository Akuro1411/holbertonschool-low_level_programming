#include "main.h"

/**
 *more_numbers - prints numbers 0 to 9 except 2 and 4
 *
 */
void more_numbers(void)
{
int n;
for (n = 0; n <= 9; n++)
{
if ((n != 2) && (n != 4))
{
_putchar(n + '0');
}
}
_putchar('\n');
}
