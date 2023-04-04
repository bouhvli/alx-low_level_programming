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
	const listint_t *tmp;
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		tmp = head;
		head = head->next;
		if (tmp <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			return (98);
			/*exit(98);*/
		}
	}
	return (count);
}
