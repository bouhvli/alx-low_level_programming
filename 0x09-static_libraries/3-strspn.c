/**
 * _strspn - gets the length of a prefix substring
 * @s: the address of the string
 * @accept: the address of the string
 *
 * Return: return the number of counts.
 */

#include "main.h"
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, length = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) != 32)
		{
			for (j = 0; *(accept + j) != '\0'; j++)
			{
				if (*(accept + j) == *(s + i))
				{
					length++;
				}
			}
		}
		else
			return (length);
	}
	return (length);
}
