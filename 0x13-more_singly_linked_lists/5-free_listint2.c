#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - a function that frees a listint_t list,
 * sets the head to NULL
 * @head: the list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *current;

	if (head == NULL)
		return;
	current = *head;
	while (current != NULL)
	{
		tmp = current->next;
		free(current);
		current = tmp;
	}
	free(tmp);
	*head = current;
	free(current);
	*head = NULL;
}
