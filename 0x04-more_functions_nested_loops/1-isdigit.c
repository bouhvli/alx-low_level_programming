/**
 * _isdigit - check if its a digit
 * @c: First operand
 *
 * Description: function that checks for digits.
 * Return: 1 if it's a digit and 0 if not.
 */
#include "main.h"

int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		_putchar(c + '0');
		_putchar(':');
		_putchar(' ');
		_putchar('1');
		return (1);
	}

	_putchar(c + '0');
	_putchar(':');
	_putchar(' ');
	_putchar('1');
	return (0);
}
