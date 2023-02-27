#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints n elements of an array of integers
 * @a: the string
 * @n: string length
 * Description: prints a string,in reverse,
 * followed by a new line,
 * to stdout.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n - 1; i++)
	{
		if (i != 0)
		{
			printf(", ");
		}
		putchar(a[i]);
	}
	putchar('\n');
}
