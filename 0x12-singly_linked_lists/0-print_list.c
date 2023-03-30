#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - a function that prints all the elements of a list_t list.
 * @h: the list.
 *
 * Return: the number of nodes.
 */
size_t print_list(const list_t *h)
{
	size_t size = 0;

	if (h->next == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%ld] %s\n", size, h->str);
		else
			printf("[%ld] (nil)\n", size);
		h = h->next;
		size++;
	}
	return (size);
}
