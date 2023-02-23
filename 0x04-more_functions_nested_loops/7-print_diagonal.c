/**
 * print_diagonal - draw a diagonal line on the terminal.
 * @n: number of lines
 * Description: a function that draws a diagonal line on the terminal.
 */
#include "main.h"

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
