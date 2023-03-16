#include <stdlib.h>
#include "main.h"
/**
 * _calloc - Allocates memory for an array of elements, initialized to zero.
 * @nmemb: The number of elements to allocate memory for.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if the allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	/* Set the allocated memory to zero */
	while (i < nmemb * size)
	{
		*((char *)ptr + i) = 0;
		i++;
	}
	return (ptr);
}
