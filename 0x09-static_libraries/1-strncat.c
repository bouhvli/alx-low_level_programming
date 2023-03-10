#include "main.h"
/**
 * _strncat - function that recieve two strings
 * @dest: first string
 * @src: second string
 * @n: number of bytes to be used
 *
 * Description: a function that concatenates two string.
 * Return: concatenated string.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
		if (*(dest + i) == '\0')
		{
			while (j != n && *(src + j) != '\0')
			{
				*(dest + i) = *(src + j);
				i++;
				j++;
			}
		}
	}
	return (dest);
}
