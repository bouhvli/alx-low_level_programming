#include "search_algos.h"
#include <math.h>
/**
 * jump_search - function that searches for a value in a sorted array of
 * integers using the Jump search algorithm.
 * @array: the array.
 * @size: the size of the array.
 * @value: the value we are looking for.
 * Return: -1 if the value not in the array and idx of it if it is.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t idx, step, jump;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	idx = jump = 0;
	while (jump < size && array[jump] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		idx = jump;
		jump = jump + step;
	}
	printf("Value found between indexes [%ld] and [%ld]\n", idx, jump);
	if (jump > size - 1)
		jump = size - 1;
	while (idx < jump && array[idx] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
		idx++;
	}
	printf("Value checked array[%ld] = [%d]\n", idx, array[idx]);
	if (array[idx] == value)
		return ((int)idx);
	else
		return (-1);
}
