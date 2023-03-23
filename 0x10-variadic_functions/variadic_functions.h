#ifndef VAR_FUN_H
#define VAR_FUN_H
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
int _putchar(char c);

/**
 * struct print - a structer used to assign the func name
 * to the equivalent type.
 *
 * @type: the type of the param.
 * @func_print: function pointer to the fucntion that will
 * print the value of the corespondent type.
 */
typedef struct print
{
	char *type;
	void (*func_print)(va_list arg);
} print;
#endif
