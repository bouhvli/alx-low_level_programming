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
	const dlistint_t tmp;
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
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list.
 * @head: the list.
 * @index: idndex of the node we want to extract.
 * Return: the node and if the node does not exist, return NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = NULL;
	dlistint_t *indexed_node = NULL;
	size_t count = 0;

	if (head == NULL)
		return (NULL);
	if (index > len(head))
		return (NULL);
	tmp = head;
	while (count < index && tmp->next != NULL)
	{
		tmp = tmp->next;
		count++;
	}
	indexed_node = malloc(sizeof(dlistint_t));
	indexed_node->n = tmp->n;
	indexed_node->next = NULL;
	indexed_node->prev = NULL;
	return (indexed_node);
}
