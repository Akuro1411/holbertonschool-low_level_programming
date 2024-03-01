#include "main.h"
/**
 * rev_string - check the code
 * @s: - input of function
 *
 */
void rev_string(char *s);
{
int i, t;
i = 0;
while (s[i])
{
i++;
}
for (t = i - 1; t >= 0; t--)
{
_putchar(s[t]);
}
_putchar('\n');
}
