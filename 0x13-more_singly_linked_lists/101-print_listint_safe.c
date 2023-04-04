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
	const listint_t *slw_pt = head, *fst_pt = head;
	size_t count = 0;

	while (slw_pt != NULL && fst_pt != NULL && fst_pt->next != NULL)
	{
		printf("[%p] %d\n", (void *)slw_pt, slw_pt->n);
		count++;
		slw_pt = slw_pt->next;
		fst_pt = fst_pt->next->next;
		if (slw_pt == fst_pt)
		{
			printf("-> [%p] %d\n", (void *)fast_ptr, fast_ptr->n);
			exit(98);
		}
	}
	while (slw_pt != NULL)
	{
		printf("[%p] %d\n", (void *)slw_pt, slw_pt->n);
		count++;
		slw_pt = slw_pt->next;
	}

	return (count);
}
