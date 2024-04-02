#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints the nodes and returns the count
 * @h: - input for given structure
 * Return: - Returns the length of list
 */
size_t print_list(const list_t *h)
{
	int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);

}
