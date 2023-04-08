#include <stdio.h>
#include <stdbool.h>
#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: the number we want the bit from.
 * @index: the index of the bit we nwwd.
 * Return: the value of the bit at index index or -1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int position = (1 << index);
	bool bit = 0;

	if (position > n)
		return (-1);
	bit = n & position;
	if (bit)
		return (1);
	return (0);
}
