#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *
 *
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
