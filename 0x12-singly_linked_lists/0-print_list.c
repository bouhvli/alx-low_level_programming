#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
size_t print_list(const list_t *h)
{
	int size = 0;

	if (h->next == NULL)
		return (0);
	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", size, h->str);
		else
			printf("[%d] (nil)\n", size);
		h = h->next;
		size++;
	}
	return (size);
}
