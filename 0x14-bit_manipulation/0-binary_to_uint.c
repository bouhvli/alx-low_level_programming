#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * binary_to_uint -  converts a binary number to an unsigned int.
 * @b: pointer to the string.
 *
 * Return: the converted number, or 0 if there is one or more
 * chars in the string b that is not 0 or 1, b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int number = 0;
	int i = 0;


	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			number <<= 1;
			number |= (b[i] - '0');
		}
		else
			return (0);
		i++;
	}
	return (number);
}
