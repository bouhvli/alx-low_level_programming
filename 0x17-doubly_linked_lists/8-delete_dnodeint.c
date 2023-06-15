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
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list.
 * @head: the list.
 * @index: the index of the node we want to delete.
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = (*head), *fast = NULL, *slow = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index >= len(tmp))
		return (-1);
	else if (index == 0)
	{
		if (tmp->next != NULL)
			tmp->next->prev = NULL;
		*head = tmp->next;
	}
	else
	{
		while (tmp->next != NULL && i < index)
		{
			tmp = tmp->next;
			i++;
		}
		slow = tmp->prev;
		fast = tmp->next;
		if (slow != NULL)
			slow->next = fast;
		if (fast != NULL)
			fast->prev = slow;
	}
	free(tmp);
	return (1);
}
