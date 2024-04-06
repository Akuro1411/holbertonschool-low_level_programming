#include "lists.h"
#include <stdlib.h>
/**
 * dlistint_len - prints the count of elements in list
 * @h: - input for given structure
 * Return: - Returns the length of list
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
  dlistint_t *new_node = (dlistint_t *)malloc(sizeof(dlistint_t));
  if (new_node == NULL)
  {
    return 0;
  }
  new_node->next = *head;
  new_node->prev = NULL;
  new_node->n = n;
  *head = new_node;
  return *head;
}
