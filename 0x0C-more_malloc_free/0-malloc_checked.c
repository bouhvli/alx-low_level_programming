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
	size_t size = INT_MAX;

	if (b == 0 || b == size)
	{
		exit(98);
	}
	if (malloc(b) != NULL)
	{
		return (malloc(b));
	}
	else
	{
		exit(98);
	}
}
