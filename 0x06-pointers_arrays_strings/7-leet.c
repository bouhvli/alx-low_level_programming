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
	char letterdict[10][2] = {
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
	int i = 0;

	while (str[i] != '\0')
	{
		int j = 0;

		while (j < 9)
		{
			if (str[i] == letterdict[j][0])
			{
				str[i] = letterdict[j][1];
			}
			j++;
		}
		i++;
	}
	return (str);
}
