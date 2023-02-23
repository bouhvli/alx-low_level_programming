#include <stdio.h>
#include <math.h>

/**
 * main - main block
 * Description:  finds and prints the largest prime
 * factor of the number 612852475143, followed by a new line.
 * Return: nothing a 0
 */
int main(void)
{
	int i;
	long number = 612852475143;

	for (i = (int) sqrt(number); i > 2; i++)
	{
		if (number % i == 0)
		{
			printf("%d\n", i);
			break;
		}
	}

	return (0);
}
