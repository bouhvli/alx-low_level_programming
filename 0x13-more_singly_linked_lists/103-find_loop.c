#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: pointer to the head of the list
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *fst_pt = head, *slw_pt = head;

	while (fst_pt != NULL && fst_pt->next != NULL)
	{
		if (fst_pt->next->next == NULL)
			return (NULL);
		slw_pt = slw_pt->next;
		fst_pt = fst_pt->next->next;
		if (slw_pt == fst_pt)
		{
			while (head != slw_pt)
			{
				head = head->next;
				slw_pt = slw_pt->next;
			}
			return (slw_pt);
		}
	}
	return (NULL);
}
