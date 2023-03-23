#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * output_c - print the char type.
 * @arg: the args list.
 */
void output_c(va_list arg)
{
	char c;

	c = va_arg(arg, int);
	printf("%c", c);
}

/**
 * output_i - print the int type.
 * @arg: the args list.
 */
void output_i(va_list arg)
{
	int i;

	i = va_arg(arg, int);
	printf("%d", i);
}

/**
 * output_f - print float type.
 * @arg: the args list.
 */
void output_f(va_list arg)
{
	float f;

	f = va_arg(arg, double);
	printf("%f", f);
}

/**
 * output_s - print the string type.
 * @arg: the args list.
 */
void output_s(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", s);
}

/**
 * print_all - Prints anything, followed by a new line.
 * @format: the argument types.
 *
 * Description: Any argument not of type char, int, float,
 * or char * is ignored.
 * If a string is NULL print (nil) instead.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	print type_func[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string}
	};

	va_start(args, format);
	while (format && (*(format + i)))
	{
		j = 0;
		while (j < 4 && (*(format + i) != *(type_func[j].type)))
			j++;

		if (j < 4)
		{
			printf("%s", separator);
			type_func[j].func_print(args);
			separator = ", ";
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

