/**
 * print_times_table - a function that prints the n times table,
 * starting with 0.
 * @n: times parametr
 *
 * Description: If n is greater than 15 or less than 0 the
 * function should not print anything.
 */
#include "main.h"


void print_times_table(int n)
{
	int m, y, r;

	if (n >= 0 && n <= 14)
	{
		for (x = 0; x <= n; x++)
		{
			for (m = 0; m <= n; m++)
			{
				r = x * m;
				if (r > 99)
				{
					_putchar(',');
					_putchar(32);
					_putchar((r / 100) + '0');
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
				else if (r > 9)
				{
					_putchar(',');
					_putchar(32);
					_putchar(32);
					_putchar(((r / 10) % 10) + '0');
					_putchar((r % 10) + '0');
				}
				else
				{
					if (m != 0)
					{
						_putchar(',');
						_putchar(32);
						_putchar(32);
						_putchar(32);
					}
					_putchar(r + '0');
				}
			}
			_putchar('\n');
		}
	}
}
