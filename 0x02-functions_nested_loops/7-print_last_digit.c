/**
 *  print_last_digit -  a function that prints the last digit of a number
 * @n: First operand
 *
 * Description:  a function that prints the last digit of a number.
 * Return: the value of the last digit.
 */
#include "main.h"

int print_last_digit(int n)
{
	int result = n % 10;
	
	if (result < 0)
	{
		result = result * (-1);
	}
	_putchar('0' + result);
	return (result);
}
