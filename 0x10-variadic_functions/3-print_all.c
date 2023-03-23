#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * look_for - this is the core of the print_all function,
 * this function will find matches in the type and print it.
 * @a: the type of the param we want to print it value.
 * @args: the list of arguments intered to the print_all func.
 *
 * Return: 1 if there is an unknown type.
 */
int look_for(char a, va_list args)
{
	int com;
	char c;
	int d;
	double f;
	char *s;

	com = 0;
	switch (a)
	{
		case 'c':
			c = (char)va_arg(args, int);
			printf("%c", c);
			break;
		case 'i':
			d = va_arg(args, int);
			printf("%d", d);
			break;
		case 'f':
			f = va_arg(args, double);
			printf("%f", f);
			break;
		case 's':
			s = va_arg(args, char *);
			if (s == NULL)
				printf("(nil)");
			else
				printf("%s", s);
			break;
		default:
			com = 1;
			break;
	}
	return (com);
}
/**
 * print_all - Prints a formatted string to the console, with variable
 * number of arguments.
 * @format: is a list of types of arguments passed to the function.
 */
void print_all(const char *const format, ...)
{
	va_list args;
	int i;
	int com;

	i = 0;
	com = 0;
	va_start(args, format);
	while (format[i] != '\0')
	{
		com = look_for(format[i], args);
		i++;
		if (format[i] != '\0' && com != 1)
			printf(", ");
		com = 0;
	}
	va_end(args);
	printf("\n");
}
