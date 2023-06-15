#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_dlistint - frees a dlistint_t list.
 *
 * @head: the list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL, *holder = head;

	while (holder != NULL)
	{
		tmp = holder->next;
		free(holder);
		holder = tmp;
	}
}
