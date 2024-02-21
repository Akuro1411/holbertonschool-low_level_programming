#include "main.h"
#include <stdio.h>
void print_alphabet(void);

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
print_alphabet();
_putchar('\n');
return (0);
}
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
}
