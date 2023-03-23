#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of params.
 *
 * Return: the sum of the params entered, or 0 if n = 0;
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0, arg;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		arg = va_arg(args, int);
		sum += arg;
	}
	return (sum);
}
