/**
 * factorial - get the factorial of a number.
 * @n:the number.
 *
 * Return: the result.
 */
#include "main.h"
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
