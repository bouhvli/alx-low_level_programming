/**
 *  print_most_numbers - print the numbers, from 0 to 9.
 *
 * Description: a function that prints the numbers, from 0 to 9.
 */
#include "main.h"

void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		_putchar(i + '0');
	}
	_putchar('\n');
}
