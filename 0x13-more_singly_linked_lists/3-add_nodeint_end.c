#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at
 * the end of a listint_t list.
 * @head: the list.
 * @n: the new value.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tmp = malloc(sizeof(listint_t));
	listint_t *item = *head;

	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	tmp->next = NULL;
	if (*head == NULL)
		*head = tmp;
	else
	{
		item = *head;
		while (item->next != NULL)
		{
			item = item->next;
		}
		item->next = tmp;
	}
	return (tmp);
}
