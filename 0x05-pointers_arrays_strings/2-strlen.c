#include "main.h"
/**
 * swap_int - swap the value of two vars
 * @s: the string
 *
 * Return: the length of th string
 *
 */
int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
