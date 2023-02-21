/**
 * print_alphabet_x10 - prints the alphabet, in lowercase
 * Description: Write a program that prints alphabet,
 * 10 times 
 */
#include "main.h"

void print_alphabet_x10(void)
{
	char i;
	int j = 0;

	while (j < 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
