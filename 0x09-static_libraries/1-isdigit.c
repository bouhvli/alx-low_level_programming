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
	if (c > 47 && c < 58)
	{
		return (1);
	}

	return (0);
}
