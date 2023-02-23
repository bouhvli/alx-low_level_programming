/**
 * print_line - draw a straight line in the terminal.
 * @n: First operand
 *
 * Description: a function that draws a straight line in the terminal.
 */
#include "main.h"

void print_line(int n)
{
	char ch = '_';
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
