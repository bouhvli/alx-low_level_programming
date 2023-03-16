#include <stdlib.h>
#include "main.h"
/**
 * array_range - Creates an array of integers.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * Return: A pointer to the newly created array, or NULL on failure.
 */
int *array_range(int min, int max)
{
	int *arr;
	int len;
	int i = 0;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);
	while ( i < len)
	{
		arr[i] = min++;
		i++;
	}
	return (arr);
}
