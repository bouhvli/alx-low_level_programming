#include "main.h"
/**
 * rev_string - prints a string,in reverse,
 * followed by a new line,
 * to stdout
 * @s: the string
 *
 * Description: prints a string,in reverse,
 * followed by a new line,
 * to stdout.
 */
void rev_string(char *s)
{
	int i, j, count = 0;
	char *b_str, *ed_str, str;

	while (*(s + count) != '\0')
	{
		count++;
	}
	b_str = str;
	ed_str = str + count - 1;
	for (i = 0; i < (count - 1) / 2; i++)
	{
		str = *ed_str;
		*ed_str = *b_str;
		*b_str = str;
		b_str++;
		ed_str--;
	}
	_putchar('\n');
}
