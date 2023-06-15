#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * len - returns the number of elements in a linked dlistint_t list
 * @h: the list.
 * Return: number of nodes.
 */
size_t len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	if (h == NULL)
		return (count);
	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
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
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i = 0;

	if (new_node == NULL)
		return (NULL);
	if (idx > len(*h))
		return (NULL);
	else if (idx != 0)
	{
		while (tmp->next != NULL && i < idx - 1)
		{
			tmp = tmp->next;
			i++;
		}
		new_node->n = n;
		new_node->prev = tmp;
		new_node->next = tmp->next;
		if (tmp->next)
			tmp->next->prev = new_node;
		tmp->next = new_node;
	}
	else
	{
		new_node->prev = NULL;
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		(*h) = new_node;
	}
	return (new_node);
}
