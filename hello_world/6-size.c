#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
printf("Size of a char: %d byte(s)", sizeof(char));
printf("Size of int: %zu bytes\n", sizeof(int));
printf("Size of long int: %ld bytes\n", sizeof(long int));
printf("Size of a long long int: %lld byte(s)\n", sizeof(long long int))
printf("Size of float: %zu byte\n", sizeof(float));

return (0);
}
