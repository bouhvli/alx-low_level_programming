/**
 * _abs - a function that computes the absolute value of an integer.
 * @n: First operand
 *
 * Description: a function that computes the absolute value of an integer.
 * Return: the absolute value.
 */
#include "main.h"

int _abs(int n)
{
	if (n < 0)
	{
		return (-1 * n);
	}

	return (n);
}
