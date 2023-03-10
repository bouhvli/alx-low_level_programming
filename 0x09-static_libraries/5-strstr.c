/**
 * _strstr -  locates a substring
 * @haystack: the address of the string
 * @needle: the address of the string
 *
 * Return: a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
#include <stdlib.h>
#include "main.h"
char *_strstr(char *haystack, char *needle)
{
	int i;
	int c = 0;

	while (needle[c] != '\0')
		c++;
	while (*haystack)
	{
		for (i = 0; needle[i]; i++)
		{
			if (haystack[i] != needle[i])
				break;
		}
		if (i != c)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}

