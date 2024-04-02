#include "lists.h"
#include <stdio.h>
/**
 * list_len - prints the nodes and returns the count
 * @h: - input for given structure
 * Return: - Returns the length of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_list = malloc(sizeof(list_t));
	char *new_string = strdup(str);
	int i = 0;

	new_list->next = *head;
	new_list->str = new_string;
	*head = new_list;

	while (str[i])
	{
  		i++;
	}
	return *head;
}
