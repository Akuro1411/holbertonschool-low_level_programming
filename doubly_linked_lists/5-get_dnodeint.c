#include "lists.h"
#include <stdlib.h>
/**
 * free_dlistint - frees all the nodes
 * @head: - input for given structure
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
  dlistint_t *index_node = head;
  unsigned int i = 0;
  while (i < index)
  {
    index_node = index_node->next;
    if (index_node->next == NULL)
    {
	    return NULL;
    }
    i++;
  }
  return index_node;
}
