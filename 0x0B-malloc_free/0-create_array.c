#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 * @size: the length of the table.
 * @c: the character we want to put in the fields
 *
 * Return: NULL if size is 0 or if the allocation fails,
 * and the pointer if the everything is OK.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;

	unsigned int long i = 0;


	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(sizeof(char) * size);

		if (ptr == NULL)
		{
			return (NULL);
		}
		else
		{
			while (i < (sizeof(char) * size))
			{
				*(ptr + i) = c;
				i++;
			}
			*(ptr + i) = '\0';
		}
		return (ptr);
	}
}
