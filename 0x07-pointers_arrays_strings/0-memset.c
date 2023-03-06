/**
 *  _memset - takes a string and a value and number of bytes.
 *  @s: the string to alter.
 *  @b: the new value.
 *  @n: the number of bytes.
 *
 *  Return: the string altered.
 */
#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (i = 0; (unsigned)i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
