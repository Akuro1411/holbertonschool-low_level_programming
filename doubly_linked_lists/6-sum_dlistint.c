#include "lists.h"
#include <stdlib.h>
/**
 * get_dnodeint_at_index - returns the node with given index
 * @head: - input for given structure
 * @index: - index for list
 * Return: - return the node
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while(head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return sum;
}
