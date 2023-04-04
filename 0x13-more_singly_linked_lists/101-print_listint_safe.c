#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

#define TABLE_SIZE 1024

/**
 * print_listint_safe - a function that prints a listint_t linked list.
 * @head: the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *current = head;
	size_t count = 0;
	const listint_t *visited[TABLE_SIZE] = { NULL };
	size_t hash_idx;

	while (current != NULL)
	{
		hash_idx = ((size_t)current % TABLE_SIZE);
		if (visited[hash_idx] == current)
		{
			printf("-> [%p] %d\n", (void *)current, current->n);
			exit(98);
		}
		visited[hash_idx] = current;
		printf("[%p] %d\n", (void *)current, current->n);
		count++;
		current = current->next;
	}
	return (count);
}

