/**
 * _atio_multi - a program that multiplies two numbers.
 * @argv: name of args
 *
 * Return:result.
 */
int _atio_multi(char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int i = 0;

	while (argv[1][i] != '\0')
	{
		num1 = num1 * 10 + (argv[1][i] - '0');
		i++;
	}
	i = 0;
	while (argv[2][i] != '\0')
	{
		num2 = num2 * 10 + (argv[2][i] - '0');
		i++;
	}
	return (num1 * num2);
}
/**
 * main - a program that give the result of two numbers multiplied.
 * @argc: number
 * @argv: name of args
 *
 * Return:If the program does not receive two arguments,
 * your program should print Error, followed by a new line, and return 1.
 */
#include "main.h"
int main(int argc, char *argv[])
{
	int result;

	if (argc != 3)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		return (1);
	}

	result = _atio_multi(argv);
	
	if (result < 0)
	{
		putchar('-');
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

