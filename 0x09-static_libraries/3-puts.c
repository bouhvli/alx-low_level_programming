#include "main.h"
/**
 * _puts - prints a string, followed by a new line,
 * to stdout
 * @str: the string
 *
 * Description: prints a string, followed by a new line,
 * to stdout.
 */
void _puts(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		_putchar(*(s + count));
		count++;
	}
	_putchar('\n');
}
