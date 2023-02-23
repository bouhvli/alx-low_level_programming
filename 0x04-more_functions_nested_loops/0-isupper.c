/**
 * _isupper - check if its an upper case
 * @c: First operand
 *
 * Description: function that checks for uppercase character.
 * Return: 1 if it's an upper case and 0 if not.
 */
#include "main.h"

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
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
	_putchar('0');
	return (0);
}
