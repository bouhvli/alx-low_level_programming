#include "main.h"
/**
 * reverse_array - function that recieve a string and number
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
			str[i] -= 32;
	}
	return (str);
}
