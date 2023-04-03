#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"
/**
 * length_list - to get the length of the list
 * @h: the list.
 * Return: the number of elements in the list
 */
unsigned int length_list(listint_t *head)
{
	listint_t *current;
	unsigned int i = 0;
	current = head;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i - 1);
}
/**
 * get_nodeint_at_index - a function that returns the nth node of a
 * listint_t linked list.
 * @head: the list .
 * @index: the nth node we wanted.
 * Return:  the nth node of a listint_t if the node does not exist,
 * return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len, i = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);
	len = length_list(current);
	if (len  > index)
		return (NULL);
	else
	{
		while (current != NULL && i != index)
		{
			current = current->next;
			i++;
		}
		return (current);
	}
}
