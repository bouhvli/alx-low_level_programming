#include "search_algos.h"
/**
 * binary_search_l_r - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm
 * @array: the array
 * @l: the start index.
 * @r: the end index.
 * @value: the value we are looking for.
 * Return: -1 if not fount or null or the idx if found.
 */
int binary_search_l_r(int *array, size_t l, size_t r, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);
	for (; r >= l;)
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
/**
 * exponential_search - function that searches for a value in a sorted
 * array of integers using the Exponential search algorithm.
 * @array: the array.
 * @size: the size of the array.
 * @value: the value we are looking for.
 * Return: -1 if not found in the array and index if it's in.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, r;

	while (bound < size && array[bound] <= value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound = bound * 2;
	}
	if (bound + 1 < size)
		r = bound;
	else
		r = size - 1;
	bound /= 2;
	printf("Value found between indexes [%ld] and [%ld]\n", bound, r);
	return (binary_search_l_r(array, bound, r, value));
}
