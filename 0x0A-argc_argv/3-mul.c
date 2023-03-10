/**
 * main - a program that multiplies two numbers.
 * @argc: number
 * @argv: name of args
 *
 * Return:If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1.
 */
#include "main.h"
int main(int argc, char *argv[]) 
{
	if (argc != 3) 
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return 1;
	}

	int num1 = 0;
	int num2 = 0;

	for (int i = 0; argv[1][i] != '\0'; i++) 
	{
		num1 = num1 * 10 + (argv[1][i] - '0');
	}
	for (int i = 0; argv[2][i] != '\0'; i++) 
	{
		num2 = num2 * 10 + (argv[2][i] - '0');
	}

	int result = num1 * num2;

	if (result < 0) 
	{
		_putchar('-');
		result = -result;
	}
	if (result == 0) 
	{
		_putchar('0');
	}
	while (result > 0) 
	{
		int digit = result % 10;
		_putchar(digit + '0');
		result /= 10;
	}
	_putchar('\n');

	return (0);
}
