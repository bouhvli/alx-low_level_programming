#include "main.h"
#include <stdio.h>
/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: the number we are targeting.
 * @index: if the bit we want to change.
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int position = (1ul << index);
	unsigned long int max_bit = sizeof(unsigned long int) * 8 - 1;

	if (index > max_bit)
		return (-1);
	*n &= ~position;
	return (1);
}
