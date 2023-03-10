#include "main.h"
/**
 * _strcpy - prints n elements of an array of integers
 * @dest: the string
 * @src: string length
 *
 * Description: prints a string,in reverse,
 * followed by a new line,
 * to stdout.
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int c = 0;

	while (*(src + c) != '\0')
	{
		*(dest + c) = *(src + c);
		c++;
	}
	*(dest + c) = '\0';
	return (dest);
}
