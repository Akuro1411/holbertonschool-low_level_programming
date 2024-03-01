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
for (t = i / 2; t < i; t = t + 2)
{
_putchar(str[t]);
}
_putchar('\n');
}
