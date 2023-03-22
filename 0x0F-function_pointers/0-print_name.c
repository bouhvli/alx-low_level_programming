#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: the name we need to print.
 * @f: the function we want to point to.
 *
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
