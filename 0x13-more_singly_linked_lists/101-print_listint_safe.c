#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: the list we want to print.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *tmp;
	size_t i = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;

		tmp = head;
		head = head->next;
		if (tmp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			exit(98);
		}
	}
	return (i);
}
