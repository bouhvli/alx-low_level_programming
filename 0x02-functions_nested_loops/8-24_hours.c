/**
 *  jack_bauer- a function that prints every minute of the day of Jack Bauer,
 *  starting from 00:00 to 23:59.
 *
 * Description:  a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 * Return: the value of the last digit.
 */
#include "main.h"

void jack_bauer(void)
{
	int h, ho, se, sec;

	for (h = 0; h <= 2; h++)
	{
		for (ho = 0; ho <= 9; ho++)
		{
			if ((h <= 1 && ho <= 9) || (h <= 2 && ho <= 3))
			{
				for (se = 0; se <= 5; se++)
				{
					for (sec = 0; sec <= 9; sec++)
					{
						_putchar(h + '0');
						_putchar(ho + '0');
						_putchar(58);
						_putchar(se + '0');
						_putchar(sec + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
