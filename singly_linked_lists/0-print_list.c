#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
size_t print_list(const list_t *h)
{
	int i = 0;
	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
	h = h->next;
	i++;
	}
	return i;
}
