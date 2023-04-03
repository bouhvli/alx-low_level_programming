#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes the node at
 * index index of a listint_t linked list.
 * @head: the list.
 * @index: the index of the list where the new node should be added.
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current, *tmp;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		current = (*head)->next;
		free(*head);
		*head = current;
		return (1);
	}
	current = *head;
	while (i < index - 1)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
		i++;
	}
	if (current->next == NULL)
		return (-1);
	tmp = current->next;
	current->next = tmp->next;
	free(tmp);
	return (1);

}
