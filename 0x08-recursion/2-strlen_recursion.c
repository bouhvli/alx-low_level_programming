/**
 * _strlen_recursion - returns the length of a string.
 * @s:the string.
 *
 * Description : a function that returns the length of a string.
 * Return : the lenght of the string as number and if its == '\0'
 * 	    it will return 0;
 */
#include "main.h"
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
