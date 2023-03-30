#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - a function that frees a list_t list.
 * @head: the list.
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	while (head != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(tmp);
	free(head);
}
