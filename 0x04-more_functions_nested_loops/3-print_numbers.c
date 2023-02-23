/**
 * print_numbers - prints the numbers, from 0 to 9,
 * followed by a new line
 *
 * Description: a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 */
#include "main.h"

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
