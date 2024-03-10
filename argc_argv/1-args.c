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
	int i;
	i = 0;
	if (argc > 0)
	{
		while (*argv)
		{
			i++;
		}
		printf("%d\n", i);
	}
	return 0;
}
