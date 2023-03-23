#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: is the string to be printed between the strings.
 * @n: is the number of strings passed to the function.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i = 0;
	char *arg;

	va_start(args, n);

	while (i < n)
	{
		arg = va_arg(args, char*);
		if (arg == NULL)
			printf("(nil)");
		else
			printf("%s", arg);
		i++;
		if (i != n && separator != NULL)
		{
			printf("%s", separator);
		}

	}
	va_end(args);
	printf("\n");
}
