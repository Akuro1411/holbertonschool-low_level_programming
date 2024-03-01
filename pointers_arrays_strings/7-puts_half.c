#include "main.h"
/**
 * puts_half - check the code
 * @str: - input of function
 *
 */
void puts_half(char *str)
{
int i, t;
i = 0;
while (str[i])
{
i++;
}
if (i % 2 == 1)
{
t = (i - 1) / 2;
}
else
{
t = i / 2;
}
for (t; t < i; t++)
{
_putchar(str[t]);
}
_putchar('\n');
}
