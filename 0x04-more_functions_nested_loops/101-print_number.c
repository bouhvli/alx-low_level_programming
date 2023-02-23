/**
 * print_number - print an interger.
 * @n: operator 1
 *
 * Description: a function that prints an integer.
 */
#include "main.h"
void print_number(int n)
{
	float m, number;
	int i;

	number = n;
	if (number < 0)
	{
		number *= -1;
		_putchar('-');
	}

	m = 1;
	i = 1;
	while (i)
	{
		if (number / (m * 10) > 0)
			m *= 10;
		else
			i = 0;
	}
	while (number >= 0)
	{
		if (m == 1)
		{
			_putchar(number % 10 + '0');
			number = -1;
		}
		else
		{
			_putchar((number / m % 10) + '0');
			m /= 10;
		}
	}
}
