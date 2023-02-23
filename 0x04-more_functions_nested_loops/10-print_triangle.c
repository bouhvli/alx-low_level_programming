/**
 * print_triangle - print a triangle
 * @size: operator 1
 *
 * Description: a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 */
#include "main.h"

void print_triangle(int size)
{
	int i, j, k;

	if (size > 0)
	{
		for (i = 1; i < size + 1; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				_putchar(' ');
			}
			for (k = 0; k < size - j; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
