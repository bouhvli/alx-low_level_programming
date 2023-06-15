#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t
 * linked list.
 * @head: the list.
 * Return: the sum of the list's nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	size_t count = 0, som = 0;

	if (head == NULL)
		return (som);
	tmp = head;
	while (tmp)
	{
		som += tmp->n;
		tmp = tmp->next;
		count++;
	}
	return (som);
}
