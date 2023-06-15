#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 * @h: the list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	if (h == NULL)
		return (count);
	tmp = h;
	while (tmp)
	{
		tmp = tmp->next;
		count++;
	}
	return (count);
}
