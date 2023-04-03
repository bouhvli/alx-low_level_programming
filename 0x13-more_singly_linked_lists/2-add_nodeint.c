#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the
 * beginning of a listint_t list.
 * @head: the list.
 * @n: the new value to be inserted.
 *
 * Return:  the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *item;

	item = malloc(sizeof(listint_t));
	if (item == NULL)
		return (NULL);
	item->n = n;
	item->next = *head;
	*head = item;
	return (*head);
}
