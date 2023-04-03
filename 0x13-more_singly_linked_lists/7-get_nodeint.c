#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
unsigned int length_list(listint_t *head)
{
	listint_t *current;
	unsigned int i = 0;
	current = head;

	while (current != NULL)
	{
		current = current->next;
		i++;
	}
	return (i);
}

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int len, i = 0;
	listint_t *current = head;

	if (head == NULL)
		return (NULL);
	len = length_list(current);
	if ((len - 1) > index)
		return (NULL);
	else
	{
		while (current != NULL && i != index)
		{
			current = current->next;
			i++;
		}
		return (current);
	}
}
