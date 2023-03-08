/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x:the base value.
 * @y:the power.
 *
 * Return: returns the value of x raised to the power of y,
 * if y is lower than 0, the function should return -1.
 */
#include "main.h"
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
