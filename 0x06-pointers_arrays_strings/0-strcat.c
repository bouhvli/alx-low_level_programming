#include "main.h"
/**
 * _strcat - function that recieve two strings
 * @dest: first string
 * @src: second string
 *
 * Description: a function that concatenates two string.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
	{	
		i++;
		if (*(dest + i) == '\0' )
		{
			while (*(src + j) != '\0')
			{
				*(dest + i) = *(src + j);
				i++;
				j++;
			}
		}
	}
	return dest;
}
