#include <stdio.h>
#include "main.h"
/**
 * print_binary -  prints the binary representation of a number.
 * @n: number to convert.
 */
void print_binary(unsigned long int n)
{
	int numberBits = 0, i = 0, bit = 0;
	unsigned long int copy = n;

	if (n == 0)
		_putchar('0');
	while (copy > 0)
	{
		numberBits++;
		copy >>= 1;
	}

	for (i = numberBits - 1; i >= 0; i--)
	{
		bit = (n >> i) & 1;
		_putchar('0' + bit);
	}
}
