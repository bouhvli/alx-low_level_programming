/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the address of the string
 * @accept: the address of the string
 *
 * Return: a pointer to the byte in s that matches
 * one of the bytes in accept, or NULL if no such
 * byte is found.
 */
#include <stdlib.h>
#include "main.h"
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;
	char a = 'f', *ptr;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			if (*(accept + j) == *(s + i))
			{
				a = 't';
				ptr = (s + i);
				break;
			}
		}
		if (a == 't')
		{
		break;
		}
	}
	if (a == 't')
	{
		return (ptr);
	}
	else
		return (NULL);
}
