#include "main.h"
/**
 * leet - function that recieve a string.
 * @str: first string
 *
 * Description: a function that encodes a
 * string into 1337.
 * Return: string
 */
char *leet(char *str)
{
	char letterdict[6][2] = {
	{'a', '4'},
	{'A', '4'},
	{'e', '3'},
	{'E', '3'},
	{'o', '0'},
	{'O', '0'},
	{'t', '7'},
	{'T', '7'},
	{'l', '1'},
	{'L', '1'}
	}; 
	for (int i = 0; str[i] != '\0'; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (str[i] == letterdict[j][0])
			{
				str[i] = letterdict[j][1];
			}
		}
	}
	return (str);
}
