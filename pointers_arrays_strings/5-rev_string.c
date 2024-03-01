#include "main.h"
/**
 * rev_string - check the code
 * @s: - input of function
 *
 */
void rev_string(char *s)
{
  int i, t, len;
char new_str;
i = 0;
len = 0;
while (s[i])
{
i++;
}
while (new_str[len])
len++;
for (t = i - 1; t >= 0; t--)
{
new_str[len + i] = s[t];
}
*s = new_str;
}
