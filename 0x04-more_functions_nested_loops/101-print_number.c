/**
 * print_number - print an interger.
 * @size: operator 1
 *
 * Description: a function that prints the numbers,
 * from 0 to 9, followed by a new line.
 */
#include "main.h"
void print_number(int n)
{
	int m, i;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}

	m = 1;
	i = 1;
	while (i)
	{
		if (n / (m * 10) > 0)
			m *= 10;
		else
			i = 0;
	}
	while (n >= 0)
	{
		if (m == 1)
		{
			_putchar(n % 10 + '0');
			n = -1;
		}
		else
		{
			_putchar((n / m % 10) + '0');
			m /= 10;
		}
	}
}
