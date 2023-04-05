#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *fst_pt = head, *slw_pt = head;
	size_t count = 0;

	while (fst_pt != NULL && fst_pt->next != NULL)
	{
		printf("[%p] %d\n", (void *)slw_pt, slw_pt->n);
		count++;
		if (fst_pt->next->next == NULL)
			return (count);
		slw_pt = slw_pt->next;
		fst_pt = fst_pt->next->next;
		if (slw_pt == fst_pt)
		{
			while (head != slw_pt)
			{
				head = head->next;
				printf("[%p] %d\n", (void *)slw_pt, slw_pt->n);
				slw_pt = slw_pt->next;
				count++;
			}
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (count);
			exit(98);
		}
	}
	return (count);
}     
