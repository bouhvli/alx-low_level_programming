#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - a function that deletes the head node of a listint_t
 * linked list.
 * @head: the list.
 * Return: returns the head node’s data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int trash = 0;

	if (*head == NULL)
		return (0);
	current = *head;
	trash = current->n;
	*head = current->next;
	free(current);
	return (trash);
}
