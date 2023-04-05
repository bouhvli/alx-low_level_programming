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
	listint_t *cmpr;
	size_t i = 0;
	
	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		i++;
		cmpr = head->next;
		while (cmpr != NULL && cmpr < head)
		{
			if (cmpr->next == head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (i);
				exit(98);
			}
			cmpr = cmpr->next;
		}
		head = head->next;
	}
	return (i);
}
                
