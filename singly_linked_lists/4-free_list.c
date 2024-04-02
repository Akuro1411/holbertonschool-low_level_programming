#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints the nodes and returns the count
 * @h: - input for given structure
 * Return: - Returns the length of list
 */
void free_list(list_t *head)
{
	while(head != NULL)
	{
		free(head->str);
		head = head->next;
		free(head->next);
	}
	free(head);
}
