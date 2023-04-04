#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: the list we want to reverse.
 *
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *new_list, *tmp;

	new_list = NULL;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = new_list;
		new_list = (*head);
		(*head) = tmp;
	}
	*head = new_list;
	return (*head);
}
