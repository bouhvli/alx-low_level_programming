#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	int arg;

	va_start(args, n);
	if (n == 0)
		return;
	while (i < n)
	{
		arg = va_arg(args, int);
		printf("%d", arg);
		i++;
		if (i != n && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
	va_end(args);
}
