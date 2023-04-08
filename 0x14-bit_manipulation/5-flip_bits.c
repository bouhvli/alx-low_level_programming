#include "main.h"
#include <stdio.h>
/**
 * flip_bits - a function that returns the number of bits you
 * would need to flip to get from one number to another.
 * @n: first number.
 * @m: second number.
 * Return:  returns the number of bits you would need to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_operation = n ^ m;
	unsigned int count = 0;

	while (xor_operation != 0)
	{
		count += xor_operation & 1;
		xor_operation >>= 1;
	}
	return (count);
}
