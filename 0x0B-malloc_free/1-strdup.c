#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * len - help to get the length of the string passed to
 * parametars
 * @str: the string we want to calc it's length.
 *
 * Return: the length.
 */
int len(char *str)
{
	int i = 0;

	if (str == NULL)
	{
		return (0);
	}
	else
	{
		while (*(str + i) != '\0')
		{
			i++;
		}
		return (i + 1);
	}
}
/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as
 * a parameter.
 * @str: string we want to copy.
 *
 * Return: a pointer to the copyed string.
 */
char *_strdup(char *str)
{
	char *ptrs;
	int i = 0, length = len(str);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		ptrs = malloc(sizeof(char) * length);
		if (ptrs == NULL)
		{
			return (NULL);
		}
		else
		{
			while (i < length)
			{
				*(ptrs + i) = *(str + i);
				i++;
			}
			*(ptrs + i) = '\0';
		}
		return (ptrs);
	}
}
