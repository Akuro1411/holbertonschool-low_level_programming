#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - calculates the sum of elements in linked list
 * @head: - input for given structure
 * Return: - return the sum
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
  unsigned int i = 0;
  dlistint_t *insert_node = malloc(sizeof(dlistint_t));
  dlistint_t *node = *h;

  if (insert_node == NULL)
    return NULL;
  insert_node->n = n;
  if (idx == 0)
  {
    insert_node->next = *h;
    insert_node->prev = NULL;
    (*h)->prev = insert_node;
    *h = insert_node;
  }
  else
  {
    while (i < idx - 1 && node->next != NULL)
    {
      node = node->next;
      i++;
    }
    if (i + 1 <= idx)
      return NULL;

    insert_node->next = node->next;
    insert_node->prev = node;
    node->next->prev = insert_node;
    node->next = insert_node;
  }
  return *h;
}
