#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - calculates the sum of elements in linked list
 * @head: - input for given structure
 * Return: - return the sum
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
  dlistint_t *insert_node = malloc(sizeof(dlistint_t));
  dlistint_t *node = *h;
  unsigned int i = 0;

  if (insert_node == NULL)
  {
	  return NULL;
  }
  while (i < idx - 1)
  {
    if (node->next == NULL)
    break;
    node = node->next;
    i++;
  }
  if (i + 1 < idx)
  {
    return NULL;
  }

  insert_node->next = node->next;
  node->next = insert_node;
  insert_node->prev = node;
  insert_node->n = n;
  return *h;
}
