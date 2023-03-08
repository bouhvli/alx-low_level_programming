#include "main.h"
/**
 * _finder - finds the number that compose of square root.
 * @x:number.
 * @y:the number who will test the x
 * Return: square root
 */
int _finder(int x, int y)
{
	if (y * y > x)
	{
	return (-1);
	}
	else if (y * y == x)
	{
	return (b);
	}
	else
	{
	return (_finder(x, y + 1));
	}
	return (1);
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: the number.
 *
 * Return: the square root of @n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (finder(n, 1));
}
