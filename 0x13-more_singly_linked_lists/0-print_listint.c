#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
#include <limits.h>
/**
 * print_listint -  a function that prints all
 * the elements of a listint_t list.
 * @h: the list.
 * Return: the number of items in the list.
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
