#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * list_len - a function that prints all the elements of a list_t list.
 * @h: the list.
 *
 * Return: the number of elements.
 */
size_t list_len(const list_t *h)
{
	size_t size = 0;

	while (h != NULL)
	{
		h = h->next;
		size++;
	}
	return (size);
}
