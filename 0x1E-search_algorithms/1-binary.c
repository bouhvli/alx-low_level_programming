#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: the array
 * @size: the size of the array
 * @value: the value we are looking for.
 * Return: -1 if not fount or null or the idx if found.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t idx, l, r;

	if (array == NULL)
		return (-1);
	for (l = 0, r = size - 1; r >= l;)
	{
		printf("Searching in array: ");
		for (idx = l; idx < r; idx++)
			printf("%d, ", array[idx]);
		printf("%d\n", array[idx]);
		idx = l + (r - l) / 2;
		if (array[idx] == value)
			return (idx);
		if (array[idx] > value)
			r = idx - 1;
		else
			l = idx + 1;
	}
	return (-1);
}
