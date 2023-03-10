/**
 *  _memcpy -  copies memory area.
 * @dest: the address of memory to print
 * @src: the address of memory to print from
 * @n: the number of bytes
 *
 * Return: the dest string.
 */
#include "main.h"
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
