/**
 * _strchr - prints buffer in hexa
 * @s: the address of the string
 * @c: the char we look for in the string
 *
 * Return: the pointer to the position of the char
 * if matched or NULL if not.
 */
#include "main.h"

char *_strchr(char *s, char c)
{
	char *ptr;
	int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			ptr = (s + i);
			return (ptr);
		}
		i++;
	}
	return (0);
}
