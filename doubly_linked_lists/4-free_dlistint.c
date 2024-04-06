#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - adds the new node at the head of the list
 * @head: - input for given structure
 * @n: - data of new node
 * Return: - Returns the pointer which points new node
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *free_node = head;
	while (free_node)
	{
		free(free_node);
		free_node = free_node->next;
	}
}
