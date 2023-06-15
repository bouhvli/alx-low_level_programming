#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list.
 * @h: the list.
 * Return: the number of nodes.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *tmp;
	size_t count = 0;

	if (h == NULL)
		return (count);
	tmp = h;
	while (tmp)
	{
		printf("%d\n", tmp->n);
		tmp = tmp->next;
		count++;
	}
	return (count);
}
