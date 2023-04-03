#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of a
 * listint_t linked list.
 * @head: the list .
 * @index: the nth node we wanted.
 *
 * Return:  the nth node of a listint_t if the node does not exist,
 * return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current;

	if (head == NULL)
		return (NULL);
	current = head;
	while (i < index)
	{
		if (current == NULL)
			return (NULL);
		current = current->next;
		i++;
	}
	return (current);
}
