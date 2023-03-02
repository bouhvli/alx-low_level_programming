#include "main.h"
/**
 * _strncpy - function that recieve two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes
 *
 * Description: a function that copy a string.
 * Return:the string copied.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; n > i; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
