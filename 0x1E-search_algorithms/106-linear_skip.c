#include "search_algos.h"
/**
 * linear_skip - a function that searches for a value in a
 * sorted skip list of integers.
 * @list: the list.
 * @value: the value we are looking for.
 * Return: null if list is empty or value not present and the pointer on
 * the first node where value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *tmp, *jump;

	if (list == NULL)
		return (NULL);
	jump = list;
	tmp = jump;
	while (jump->next != NULL && jump->n < value)
	{
		tmp = jump;
		if (jump->express == NULL)
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
		else
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}

	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			tmp->index, jump->index);
	while (tmp->n < value && tmp->index < jump->index)
	{
		printf("Value checked at index [%ld] = [%d]\n",
				tmp->index, tmp->n);
		tmp = tmp->next;
	}
	printf("Value checked at index [%ld] = [%d]\n", tmp->index, tmp->n);
	if (tmp->n == value)
		return (tmp);
	return (NULL);
}
