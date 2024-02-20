#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int n;
for (n = 0; n < 16; n++)
{
putchar(48 + n);
}
putchar('\n');
return (0);
}
