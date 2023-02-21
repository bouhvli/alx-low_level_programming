/**
 * main - Entry point prints '_putchar'
 * Description: Write a program that prints _putchar,
 * followed by a new line.
 * Return: 0 that mean success
 */
#include "main.h"

int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	while (ch[i])
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
