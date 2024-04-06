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
  new_node->n = n;
  new_node->prev = NULL;
  if (*head == NULL)
  {
    new_node->next = NULL;
    *head = new_node;
  }
  else
  {
    new_node->next = *head;
    new_node->next->prev = new_node;
    *head = new_node;
  }
  return *head;
}
