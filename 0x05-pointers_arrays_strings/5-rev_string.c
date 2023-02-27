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
	int i, rev, count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}

	for (i = 0; i < (count / 2); i++)
	{
		rev = s[i];
		s[i] = s[count - i -1];
		s[n - i -1] = rev;
	}
	
}
