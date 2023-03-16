#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked -  allocates memory using malloc.
 * @b: the size we want to allocate.
 *
 * Return: pointer to the allocated memory incase of success,
 * and if malloc fails, the malloc_checked function should cause
 * normal process termination with a status value of 98
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (malloc(b));
}
