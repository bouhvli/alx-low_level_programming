/**
 * print_to_98 - function that prints all natural numbers from n to 98.
 * @n: First operand
 *
 * Description: Numbers must be separated by a comma, followed by a space
 * Numbers should be printed in order
 * The first printed number should be the number passed to your function
 * The last printed number should be 98
 * You are allowed to use the standard library
 * Return: the sum of two values.
 */
#include "main.h"
#include <stdio.h>
void print_to_98(int n)
{
	while (n > 97)
	{
		printf("%d",n);
		_putchar(44);
		_putchar(32);
		n--;
	}
	while (n < 99)
	{
		printf("%d",n);
		_putchar(44);
		_putchar(32);
		n++;
	}
	if (n == 98)
		_putchar("%d",n);
}
