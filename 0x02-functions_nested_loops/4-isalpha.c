/**
 * _islower - check if its a lower case
 * @c: First operand
 *
 * Description: function that checks for lowercase character.
 * Return: 1 if it's a lower case and 0 if not.
 */
#include "main.h"

int _isalpha(int c)
{
	if ((c >= 0 && c <= 47) || (c >= 58 && c <= 64))
	{
		return (0);
	}
	else if ((c >= 91 && c <= 96) || (c >= 123 && c <= 127))
	{
		return (0);
	}
	return (1);
}
