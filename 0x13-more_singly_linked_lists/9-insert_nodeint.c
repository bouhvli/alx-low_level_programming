#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index -  function that inserts a new node at
 * a given position.
 * @head: the list.
 * @idx: the index of the list where the new node should be added.
 * @n: the value stored in the node.
 *
 * Return: the address of the new node, or NULL if it failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *current, *node = malloc(sizeof(listint_t));

	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = add_nodeint_end(&node, n);
		return (node);
	}
	current = *head;
	while (i < idx - 1)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	node->next = current->next;
	current->next = node;
	return (node);
}
