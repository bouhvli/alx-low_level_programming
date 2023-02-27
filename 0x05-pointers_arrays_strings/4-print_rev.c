#include "main.h"
/**
 * print_rev - prints a string,in reverse,
 * followed by a new line,
 * to stdout
 * @s: the string
 *
 * Description: prints a string,in reverse,
 * followed by a new line,
 * to stdout.
 */
void print_rev(char *s)
{
	int i, count = _strlen(s);

	for (i = count - 1; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
	_putchar('\n');
}
