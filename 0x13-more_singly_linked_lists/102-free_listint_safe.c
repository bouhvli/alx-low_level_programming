#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: the list.
 * Return: the size of the list that was free’d.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t size = 0;
	listint_t *current = *h;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		free(current);
		size++;
		if (next >= current)
		{
			*h = NULL;
			return (size);
		}
		current = next;
	}
	*h = NULL;
	return (size);
}
