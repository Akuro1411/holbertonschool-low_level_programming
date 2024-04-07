#include "lists.h"
#include <stdlib.h>
/**
 * sum_dlistint - calculates the sum of elements in linked list
 * @head: - input for given structure
 * Return: - return the sum
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
  unsigned int i = 0;
  dlistint_t *node = *head;
  
  if (*head == NULL)
  {
    return -1;
  }

  if (index == 0)
  {
    if ((*head)->next == NULL)
    {
      *head = NULL;
      return 1;
    }
    (*head)->next->prev = NULL;
    *head = (*head)->next;
  }
  else
  {
    while(i < index  && node)
    {
      node = node->next;
      i++;
    }
    if (i < index)
    {
      return -1;
    }
    node->prev->next = node->next;
    node->next->prev = node->prev;

  }
  return 1;
}
