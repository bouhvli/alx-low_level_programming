/**
 * _strchr - prints buffer in hexa
 * @s: the address of the string
 * @c: the char we look for in the string
 *
 * Return: the pointer to the position of the char
 * if matched or NULL if not.
 */
#include "main.h"
#include <stdlib.h>
char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s != c)
		s++;
	else
		return (s);
	}
	if (c == '\0')
		return (s);

	return (NULL);
}
