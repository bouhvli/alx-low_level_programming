#include "main.h"
/**
 * _strcmp - function that recieve two strings
 * @s1: first string
 * @s2: second string
 *
 * Description: a function that compare two string.
 * Return: 0 if they are equal and number of dif if not.
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' || s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	return (0);
}
