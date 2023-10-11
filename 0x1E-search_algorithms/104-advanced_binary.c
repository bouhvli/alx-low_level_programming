#include "search_algos.h"
/**
 * binary_search_l_r - function that searches for a value in a sorted array of
 * integers using the Binary search algorithm using recursion.
 * @array: the array
 * @l: the start index.
 * @r: the end index.
 * @value: the value we are looking for.
 * Return: -1 if not fount or null or the idx if found.
 */
int binary_search_rcur(int *array, size_t l, size_t r, int value)
{
	size_t idx;

	if (array == NULL)
		return (-1);
	printf("Searching in array: ");
	for (idx = l; idx < r; idx++)
		printf("%d, ", array[idx]);
	printf("%d\n", array[idx]);
	if (l == r)
		return (-1);
	idx = l + (r - l) / 2;
	if (array[idx] == value && (idx == l || array[idx - 1] != value))
		return (idx);
	if (array[idx] >= value)
		return (binary_search_rcur(array, l, idx, value));
	else
		return (binary_search_rcur(array, idx + 1, r, value));
}
/**
 * advanced_binary - function that searches for a value in a sorted
 * array of integers using binay search algorithm and return the position
 * of the first match.
 * @array: the array.
 * @size: the size of the array.
 * @value: the value we are looking for.
 * Return: -1 if not found in the array and index if it's in.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (binary_search_rcur(array, 0, size - 1, value));
}
