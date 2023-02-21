/**
 * _isalpha - a function that checks for alphabetic character
 * @c: First operand
 *
 * Description: function that checks for lowercase character.
 * Return: 1 if it's a lower case and 0 if not.
 */
#include "main.h"

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}

	return (0);
}
