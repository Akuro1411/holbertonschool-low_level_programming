#include "main.h"
11;rgb:2b2b/2b2b/2b2b/**
 * cap_string - check the code
 * @a: - input of function
 * Return: returning of result value and success
 */
char *cap_string(char *a)
{
int i, j;
i = 0;
while (a[i])
i++;
for (j = 0; j < i; j++)
{
if ((a[j] >= 32 && a[j] <= 47) || (a[j] >= 58 && a[j] <= 64)
|| a[j] == 10 || a[j] == 9)
{
if (a[j + 1] >= 'a' && a[j + 1] <= 'z')
{
a[j + 1] = a[j + 1] - 32;
}
}
}
return (a);
}
