#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <limits.h>
/**
 * listint_len - a function that returns
 * the number of elements in a linked listint_t list.
 * @h: the list.
 * Return:the number of element in the list.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != 0)
	{
		count++;
		h = h->next;
	}
	return (count);
}
