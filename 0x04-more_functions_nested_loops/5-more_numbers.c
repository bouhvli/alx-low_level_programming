/**
 *  more_numbers - print 10 times the numbers, from 0 to 14.
 *
 * Description: a function that prints 10 times the numbers, from 0 to 14.
 */
#include "main.h"

void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(j + '0');
		}
		for (k = 0; k < 5; k++)
		{
			_putchar('1');
			_putchar(k + '0');
		}
		_putchar('\n');
	}
}
