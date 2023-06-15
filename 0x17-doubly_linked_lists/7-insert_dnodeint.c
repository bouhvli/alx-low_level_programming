#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: the list.
 * @idx: the index where we want to isert the new node.
 * @n: the value of the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp = *h;
	dlistint_t *new_node = NULL;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return add_dnodeint(h, n);
	for (count = 0; tmp != NULL && count < (idx - 1); count++)
		tmp = tmp->next;
	if (tmp->next == NULL || tmp == NULL)
		return (count == (idx - 1)? add_dnodeint_end(h, n): (NULL));
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = tmp;
	new_node->next = tmp->next;
	tmp->next->prev = new_node;
	tmp->next = new_node;
	return (new_node);
}
