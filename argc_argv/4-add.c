#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * main - check the code
 * @argc: - input of function
 * @argv: - input of the function
 * Return: - always success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;
	for (i = 0; i < argc; i++)
	{
		if (argv[i] > 'a' && argv[i] < 'Z')
		{
			printf("ERROR\n");
			return (1);
			break;
		}
		else
		{
			sum = sum + atoi(argv[i]);
		}
	}
	printf("%d\n", sum);
}
