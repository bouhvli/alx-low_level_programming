#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: the string
 *
 * Description: prints a string,in reverse,
 * followed by a new line,
 * to stdout.
 */
void puts_half(char *str)
{
	int i, count = 0;

	while (*(str + count) != '\0')
	{
		count++;
	}
	for (i = (count - 1) / 2; i < count - 1; i++)
	{
		if (i != (count - 1) / 2)
			printf(", ");
		_putchar(*(str + i));
	}
	_putchar('\n');
}
