#include "main.h"
/**
 * puts2 - prints every other character of a string,
 * starting with the first character
 * @str: the string
 *
 * Description: prints a string,in reverse,
 * followed by a new line,
 * to stdout.
 */
void puts2(char *str)
{
	int count = 0;

	while (*(str + count) != '\0')
	{
		if (count % 2 == 0)
			_putchar(*(str + count));
		count++;
	}
	_putchar('\n');
}
