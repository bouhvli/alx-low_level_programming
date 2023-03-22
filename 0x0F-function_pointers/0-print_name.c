#include "function_pointers.h"
/**
 * print_name - a function that prints a name.
 * @name: the name we need to print.
 * @f: the function we want to point to.
 *
 * Description: the function taks two params one is
 * string and the other is function pointer, that will
 * call the function entered to param with name as param for that
 * function to do the job.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
