#include "search_algos.h"
#include <math.h>
/**
 * jump_list - a function that searches for a value in a sorted linked
 * list of integers using the Jump search algorithm.
 * @list: the list.
 * @size: the size of the list.
 * @value: the value we are looking for.
 * Return: null if not found or a pointer to the first node
 * where value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *tmp, *jump;
	size_t step_sqrt, step;

	if (list == NULL)
		return (NULL);
	step = 0;
	step_sqrt = sqrt(size);
	jump = list;
	tmp = list;
	while (jump->n < value && jump->index + 1 < size)
	{
		tmp = jump;
		step += step_sqrt;
		while (jump->index < step)
		{
			if (jump->index + 1 == size)
				break;
			jump = jump->next;
		}
		printf("Value checked at index [%ld] = [%d]\n",
				jump->index, jump->n);
	}
	printf("Value found between indexes [%ld] and [%ld]\n",
			tmp->index, jump->index);
	while (tmp->index < jump->index && tmp->n < value)
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
