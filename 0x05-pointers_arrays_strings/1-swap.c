#include "main.h"
/**
 * swap_int - swap the value of two vars
 * @a: first var
 * @b: the second var
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
