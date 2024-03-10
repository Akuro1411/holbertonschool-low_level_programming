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
	char error[] = "ERROR";
	int sum;
	if (argc < 3)
	{
		printf("%s", error);
		return (1);
	}
	else
	{
		sum = atoi(argv[1]) + atoi(argv[2]);
		printf("%d", sum);
	}
	return (0);
}
