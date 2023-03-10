/**
 * _islower - check if its a lower case
 * @c: First operand
 *
 * Description: function that checks for lowercase character.
 * Return: 1 if it's a lower case and 0 if not.
 */
#include "main.h"

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	return (0);
}
