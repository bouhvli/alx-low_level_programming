#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * int_index - a function that searches for an integer.
 * @array: array number.
 * @size: is the number of elements in the array.
 * @cmp:  is a pointer to the function to be used to compare values.
 *
 * Return: index if matched, and -1 if there is no matches or size < 0
 * or array is null or cmp is null.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) > 0)
			return (i);
	}
	return (-1);
}
