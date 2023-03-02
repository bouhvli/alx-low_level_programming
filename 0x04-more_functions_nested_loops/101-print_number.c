/**
 * print_number - print an interger.
 * @n: operator 1
 *
 * Description: a function that prints an integer.
 */
#include "main.h"
void print_number(int n)
{
	int number;

	number = n;
	if (number < 0)
	{
		number *= -1;
		_putchar('-');
	}
	if (number == 0)
		_putchar('0');
	if (number / 10)
		_putchar(number / 10 + '0');
	_putchar(number % 10 + '0');
}
