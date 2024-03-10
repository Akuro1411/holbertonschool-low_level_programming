#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print the sum of two diagonals
 * @a: int pointer
 * @size: int
 * print_diagsums: print sum of two diagonals of a square matrix
 *
 */
void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum;
	int sum_sec;

	sum = 0;
	sum_sec = 0;
	i = 0;
	j = 1;
	while (i < size)
	{
		sum = sum + a[(size + 1) * i];
		sum_sec = sum_sec + a[(size - 1) * j];
		j++;
		i++;
	}
	printf("%d, %d\n", sum, sum_sec);
}
