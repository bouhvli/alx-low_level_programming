/**
 *  jack_bauer- a function that prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59.
 * @n: First operand
 *
 * Description:  a function that prints the last digit of a number.
 * Return: the value of the last digit.
 */
#include "main.h"

void jack_bauer(void)
{
	int sec = 0;
	int h = 0;

	while (h < 24)
	{
		for (sec = 0; sec < 60; sec++)
		{
			_putchar('0' + h);
			_putchar(':');
			_putchar(sec + '0');
		}
		h++;
	}
}
