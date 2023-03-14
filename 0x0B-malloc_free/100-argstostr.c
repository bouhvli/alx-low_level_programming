#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * argstostr -  concatenates all the arguments of your program.
 * @ac: number.
 * @av: arry of strings
 *
 * Return: Prototype: char *argstostr(int ac, char **av);
 * returns NULL if ac == 0 or av == NULL,
 * returns a pointer to a new string, or NULL if it fails,
 * each argument should be followed by a \n in the new string.
 */
char *argstostr(int ac, char **av)
{
	int i, j, len = 0, total_len = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		total_len += len + 1;
	}

	str = (char *) malloc(total_len * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0, j = 0; i < ac; i++)
	{
		len = strlen(av[i]);
		strncpy(str + j, av[i], len);
		j += len;
		*(str + j) = '\n';
		j++;
	}
	*(str + j) = '\0';
	return (str);
}

