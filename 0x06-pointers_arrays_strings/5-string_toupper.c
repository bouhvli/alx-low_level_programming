#include "main.h"
/**
 * string_toupper - function that recieve a string.
 * @str: first string
 *
 * Description: a function that changes all lowercase.
 * letters of a string to uppercase
 * Return: string
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] > 96 && str[i] < 123)
		{
			str[i] -= 32;
		}
	}
	return (str);
}
