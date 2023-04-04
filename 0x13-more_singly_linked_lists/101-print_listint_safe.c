#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#define MAX 1024
/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: the list we want to print.
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	const listint_t *visited[MAX] = {NULL};
	size_t i = 0, count = 0;

	while (current != NULL)
	{
		i = ((size_t)current % MAX);
		if (visited[i] == current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
		visited[i] = current;
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}

	return (count);
}
