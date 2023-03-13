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
 * @s1: string number 1.
 * @s2: string number 2.
 *
 * Return: a pointer to the new concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptrs;
	int i = 0, j = 0, length, length_s2, sum;

	length_s2 = len(s2);
	length = len(s1);
	sum =  (length + length_s2);

	ptrs = malloc(sizeof(char) * sum);
	if (ptrs == NULL)
	{
		return (NULL);
	}
	if ( s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (i < (length + length_s2))
	{
		while (*(s1 + i) != '\0')
		{
			*(ptrs + i) = *(s1 + j);
			i++;
			j++;
		}
		j = 0;
		while (*(s2 + j) != '\0')
		{
			*(ptrs + i) = *(s2 + j);
			i++;
			j++;
		}
			i++;
		}
		*(ptrs + i) = '\0';
	return (ptrs);
}
