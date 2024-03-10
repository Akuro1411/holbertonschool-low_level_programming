#include <stddef.h>
#include "main.h"
/**
 * _strstr - checks the code
 * @haystack: - input of function
 * @needle: - input of function
 * Return: the end value of code
 */
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (needle[i] != '\0')
		i++;

	while (*haystack)
	{
		for (j = 0; needle[j]; j++)
		{
			if (haystack[j] != needle[j])
				break;
		}
		if (i != j)
			haystack++;
		else
			return (haystack);
	}
	return (0);
}
