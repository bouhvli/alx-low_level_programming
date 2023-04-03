#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

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
